// SDB-CGEN V2.0.2
// gcc -DMAIN=1 cc_stm8_16.c ; ./a.out > cc_stm8_16.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"stm8","cc"}, 
  {"cc.stm8.arg1","y"}, 
  {"cc.stm8.arg0","x"}, 
  {"cc.stm8.ret","a"}, 
  {"default.cc","stm8"}, 
  {NULL, NULL}
};
// 0x35b0f170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_cc_stm8_16_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_cc_stm8_16_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_cc_stm8_16(x,y) gperf_cc_stm8_16_hash(x)
const unsigned int gperf_cc_stm8_16_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_cc_stm8_16 = {
  .name = "cc-stm8-16",
  .get = &gperf_cc_stm8_16_get,
  .hash = &gperf_cc_stm8_16_hash,
  .foreach = &gperf_cc_stm8_16_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_cc_stm8_16.get)("foo");
	printf ("%s\n", s);
}
#endif
