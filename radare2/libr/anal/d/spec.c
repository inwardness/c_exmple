// SDB-CGEN V2.0.2
// gcc -DMAIN=1 spec.c ; ./a.out > spec.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"spec.gcc.lu","unsigned long int"}, 
  {"spec.gcc.lf","double"}, 
  {"spec.gcc.ld","long int"}, 
  {"gcc","spec"}, 
  {"spec.gcc.li","long int"}, 
  {"spec.gcc.lli","long long int"}, 
  {"spec.gcc.g","double"}, 
  {"spec.gcc.f","float"}, 
  {"spec.gcc.u","unsigned int"}, 
  {"spec.gcc.d","int"}, 
  {"spec.gcc.llu","unsigned long long int"}, 
  {"spec.gcc.s","const char *"}, 
  {"spec.gcc.c","char"}, 
  {"spec.gcc.lld","long long int"}, 
  {"spec.gcc.p","void *"}, 
  {NULL, NULL}
};
// 0x5e31160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_spec_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_spec_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_spec(x,y) gperf_spec_hash(x)
const unsigned int gperf_spec_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_spec = {
  .name = "spec",
  .get = &gperf_spec_get,
  .hash = &gperf_spec_hash,
  .foreach = &gperf_spec_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_spec.get)("foo");
	printf ("%s\n", s);
}
#endif
