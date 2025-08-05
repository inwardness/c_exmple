// SDB-CGEN V2.0.2
// gcc -DMAIN=1 cc_mips_16.c ; ./a.out > cc_mips_16.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"cc.n32.arg0","a0"}, 
  {"cc.n32.arg1","a1"}, 
  {"cc.n32.ret","v0"}, 
  {"cc.n32.argn","stack"}, 
  {"cc.n32.arg6","a6"}, 
  {"cc.n32.arg7","a7"}, 
  {"cc.n32.arg4","a4"}, 
  {"cc.n32.arg5","a5"}, 
  {"cc.n32.arg2","a2"}, 
  {"n32","cc"}, 
  {"cc.n32.arg3","a3"}, 
  {"default.cc","n32"}, 
  {NULL, NULL}
};
// 0x3694a170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_cc_mips_16_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_cc_mips_16_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_cc_mips_16(x,y) gperf_cc_mips_16_hash(x)
const unsigned int gperf_cc_mips_16_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_cc_mips_16 = {
  .name = "cc-mips-16",
  .get = &gperf_cc_mips_16_get,
  .hash = &gperf_cc_mips_16_hash,
  .foreach = &gperf_cc_mips_16_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_cc_mips_16.get)("foo");
	printf ("%s\n", s);
}
#endif
