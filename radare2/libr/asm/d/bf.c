// SDB-CGEN V2.0.2
// gcc -DMAIN=1 bf.c ; ./a.out > bf.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {">","increment ptr"}, 
  {"[","loop begin"}, 
  {"-","decrementbyte value in ptr"}, 
  {"_","read a byte from keyboard and save it in ptr"}, 
  {"]","loop end"}, 
  {".","print byte stored in ptr"}, 
  {"+","increment byte value in ptr"}, 
  {"<","decrement ptr"}, 
  {NULL, NULL}
};
// 0xd38b160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_bf_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_bf_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_bf(x,y) gperf_bf_hash(x)
const unsigned int gperf_bf_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_bf = {
  .name = "bf",
  .get = &gperf_bf_get,
  .hash = &gperf_bf_hash,
  .foreach = &gperf_bf_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_bf.get)("foo");
	printf ("%s\n", s);
}
#endif
