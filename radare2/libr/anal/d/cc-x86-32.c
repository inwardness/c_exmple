// SDB-CGEN V2.0.2
// gcc -DMAIN=1 cc_x86_32.c ; ./a.out > cc_x86_32.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"cc.dlang.ret","eax"}, 
  {"cc.dlang.argn","stack_rev"}, 
  {"cc.fastcall.argn","stack"}, 
  {"cc.stdcall.ret","eax"}, 
  {"default.cc","cdecl"}, 
  {"dlang","cc"}, 
  {"cc.optlink.argn","stack"}, 
  {"cc.dlang.revarg","1"}, 
  {"stdcall","cc"}, 
  {"cc.optlink.ret","eax"}, 
  {"pascal","cc"}, 
  {"cc.fastcall.ret","eax"}, 
  {"cdecl","cc"}, 
  {"cc.watcom.argn","stack"}, 
  {"cdecl-fastcall-ms","cc"}, 
  {"watcom","cc"}, 
  {"cc.dlang.arg1","esi"}, 
  {"cc.dlang.arg0","edi"}, 
  {"cc.dlang.arg3","ecx"}, 
  {"cc.cdecl-fastcall-ms.argn","stack"}, 
  {"cc.dlang.arg2","edx"}, 
  {"cc.borland.argn","stack_rev"}, 
  {"cc.dlang.arg5","r9d"}, 
  {"cc.dlang.arg4","r8d"}, 
  {"cc.fastcall.arg1","edx"}, 
  {"borland","cc"}, 
  {"cc.fastcall.arg0","ecx"}, 
  {"cc.cdecl-fastcall-ms.arg0","ecx"}, 
  {"cc.stdcall.argn","stack"}, 
  {"cc.watcom.ret","eax"}, 
  {"cc.pascal.ret","eax"}, 
  {"fastcall","cc"}, 
  {"cc.cdecl.argn","stack"}, 
  {"cc.borland.ret","eax"}, 
  {"cc.watcom.arg2","ebx"}, 
  {"cc.borland.arg1","edx"}, 
  {"cc.pascal.argn","stack_rev"}, 
  {"cc.watcom.arg3","ecx"}, 
  {"optlink","cc"}, 
  {"cc.borland.arg0","eax"}, 
  {"cc.cdecl.ret","eax"}, 
  {"cc.watcom.arg0","eax"}, 
  {"cc.watcom.arg1","edx"}, 
  {"cc.borland.arg2","ecx"}, 
  {"cc.optlink.arg2","ecx"}, 
  {"cc.dlang.ret2","edx"}, 
  {"cc.optlink.arg0","eax"}, 
  {"cc.optlink.arg1","edx"}, 
  {"cc.cdecl-fastcall-ms.ret","eax"}, 
  {NULL, NULL}
};
// 0x248fe170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_cc_x86_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_cc_x86_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_cc_x86_32(x,y) gperf_cc_x86_32_hash(x)
const unsigned int gperf_cc_x86_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_cc_x86_32 = {
  .name = "cc-x86-32",
  .get = &gperf_cc_x86_32_get,
  .hash = &gperf_cc_x86_32_hash,
  .foreach = &gperf_cc_x86_32_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_cc_x86_32.get)("foo");
	printf ("%s\n", s);
}
#endif
