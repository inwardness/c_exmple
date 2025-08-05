// SDB-CGEN V2.0.2
// gcc -DMAIN=1 cc_x86_16.c ; ./a.out > cc_x86_16.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"cc.msm.arg0","ax"}, 
  {"cc.ms.argn","stack"}, 
  {"cc.msm.arg1","dx"}, 
  {"watcom","cc"}, 
  {"cc.watcom.ret","si"}, 
  {"cc.turboc.ret","ax"}, 
  {"cc.turboc.arg0","ax"}, 
  {"cc.turboc.arg1","dx"}, 
  {"cc.fastcall.ret","ax"}, 
  {"turboc","cc"}, 
  {"cc.turboc.arg2","bx"}, 
  {"default.cc","fastcall"}, 
  {"cc.watcom.argn","stack"}, 
  {"msm","cc"}, 
  {"cc.fastcall.argn","stack"}, 
  {"cc.ms.arg1","dx"}, 
  {"cc.ms.arg0","ax"}, 
  {"cc.msm.argn","stack"}, 
  {"cc.msm.ret","bx"}, 
  {"fastcall","cc"}, 
  {"cc.turboc.argn","stack"}, 
  {"ms","cc"}, 
  {"cc.watcom.arg2","bx"}, 
  {"cc.watcom.arg3","cx"}, 
  {"cc.ms.ret","ax"}, 
  {"cc.fastcall.arg3","cx"}, 
  {"cc.watcom.arg0","ax"}, 
  {"cc.fastcall.arg2","bx"}, 
  {"cc.watcom.arg1","dx"}, 
  {"cc.fastcall.arg1","dx"}, 
  {"cc.fastcall.arg0","ax"}, 
  {"cc.msm.arg2","bx"}, 
  {NULL, NULL}
};
// 0xe568170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_cc_x86_16_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_cc_x86_16_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_cc_x86_16(x,y) gperf_cc_x86_16_hash(x)
const unsigned int gperf_cc_x86_16_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_cc_x86_16 = {
  .name = "cc-x86-16",
  .get = &gperf_cc_x86_16_get,
  .hash = &gperf_cc_x86_16_hash,
  .foreach = &gperf_cc_x86_16_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_cc_x86_16.get)("foo");
	printf ("%s\n", s);
}
#endif
