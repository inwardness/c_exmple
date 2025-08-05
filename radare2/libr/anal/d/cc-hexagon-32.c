// SDB-CGEN V2.0.2
// gcc -DMAIN=1 cc_hexagon_32.c ; ./a.out > cc_hexagon_32.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"cc.hexagon.arg4","r4"}, 
  {"cc.hexagon.ret","r0"}, 
  {"hexagon","cc"}, 
  {"cc.hexagon.arg3","r3"}, 
  {"cc.hexagon.arg2","r2"}, 
  {"cc.hexagon.arg1","r1"}, 
  {"default.cc","hexagon"}, 
  {"cc.hexagon.arg0","r0"}, 
  {"cc.hexagon.arg5","r5"}, 
  {"cc.hexagon.argn","stack_rev"}, 
  {NULL, NULL}
};
// 0x36ebd170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_cc_hexagon_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_cc_hexagon_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_cc_hexagon_32(x,y) gperf_cc_hexagon_32_hash(x)
const unsigned int gperf_cc_hexagon_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_cc_hexagon_32 = {
  .name = "cc-hexagon-32",
  .get = &gperf_cc_hexagon_32_get,
  .hash = &gperf_cc_hexagon_32_hash,
  .foreach = &gperf_cc_hexagon_32_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_cc_hexagon_32.get)("foo");
	printf ("%s\n", s);
}
#endif
