// SDB-CGEN V2.0.2
// gcc -DMAIN=1 types_arm_ios_16.c ; ./a.out > types_arm_ios_16.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"func._exit.args","1"}, 
  {"func._exit.ret","void"}, 
  {"abort","func"}, 
  {"func.__assert_rtn.arg.0","const char *,assertion"}, 
  {"__assert_rtn","func"}, 
  {"func.__assert_rtn.arg.1","const char *,file"}, 
  {"func.__assert_rtn.arg.2","unsigned int,line"}, 
  {"func._exit.arg.0","int,status"}, 
  {"sym.imp.err","func"}, 
  {"func.__assert_rtn.arg.3","const char *,function"}, 
  {"func.sym.imp.err.arg.1","const char *,msg"}, 
  {"func.sym.imp.err.arg.0","int,eval"}, 
  {"func.abort.noreturn","true"}, 
  {"_exit","func"}, 
  {"func.exit.args","1"}, 
  {"func.__stack_chk_fail.noreturn","true"}, 
  {"__stack_chk_fail","func"}, 
  {"func.__assert_rtn.ret","void"}, 
  {"func.abort.cc","amd64"}, 
  {"func.sym.imp.err.args","2"}, 
  {"func.__stack_chk_fail.args","0"}, 
  {"func.__stack_chk_fail.cc","amd64"}, 
  {"func.__assert_rtn.noreturn","true"}, 
  {"func.abort.ret","void"}, 
  {"func.__assert_rtn.args","4"}, 
  {"func.sym.imp.err.noreturn","true"}, 
  {"func.exit.ret","void"}, 
  {"func.abort.args","0"}, 
  {"func._exit.noreturn","true"}, 
  {"func.exit.noreturn","true"}, 
  {"func.exit.arg.0","int,status"}, 
  {"func.__stack_chk_fail.ret","void"}, 
  {"func.__assert_rtn.cc","amd64"}, 
  {"func.sym.imp.err.cc","amd64"}, 
  {"func.exit.cc","amd64"}, 
  {"func.sym.imp.err.ret","void"}, 
  {"func._exit.cc","amd64"}, 
  {"exit","func"}, 
  {NULL, NULL}
};
// 0x1a491170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_types_arm_ios_16_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_types_arm_ios_16_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_types_arm_ios_16(x,y) gperf_types_arm_ios_16_hash(x)
const unsigned int gperf_types_arm_ios_16_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_types_arm_ios_16 = {
  .name = "types-arm-ios-16",
  .get = &gperf_types_arm_ios_16_get,
  .hash = &gperf_types_arm_ios_16_hash,
  .foreach = &gperf_types_arm_ios_16_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_types_arm_ios_16.get)("foo");
	printf ("%s\n", s);
}
#endif
