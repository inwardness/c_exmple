// SDB-CGEN V2.0.2
// gcc -DMAIN=1 types_arm_ios_64.c ; ./a.out > types_arm_ios_64.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"CCOperation","enum"}, 
  {"enum.CCCryptorStatus.kCCAlignmentError","4"}, 
  {"func.exit.cc","amd64"}, 
  {"exit","func"}, 
  {"func.sym.imp.err.args","2"}, 
  {"__assert_rtn","func"}, 
  {"enum.CCCryptorStatus.kCCBufferTooSmall","2"}, 
  {"sym.imp.err","func"}, 
  {"enum.CCAlgorithm.kCCAlgorithmDES","1"}, 
  {"func._exit.ret","void"}, 
  {"func.CCCrypt.cc","cdecl"}, 
  {"enum.CCAlgorithm.kCCAlgorithmBlowfish","6"}, 
  {"func.__assert_rtn.arg.0","const char *,assertion"}, 
  {"func.__assert_rtn.arg.1","const char *,file"}, 
  {"func.__assert_rtn.arg.2","unsigned int,line"}, 
  {"enum.CCAlgorithm.kCCAlgorithmRC4","4"}, 
  {"func.__assert_rtn.arg.3","const char *,function"}, 
  {"enum.CCOperation.kCCDecrypt","1"}, 
  {"abort","func"}, 
  {"func.CCCrypt.args","11"}, 
  {"_exit","func"}, 
  {"enum.CCAlgorithm.kCCAlgorithmRC2","5"}, 
  {"func.__assert_rtn.noreturn","true"}, 
  {"func.abort.noreturn","true"}, 
  {"func.CCCrypt.arg.9","uint32_t,dataOutAvailable"}, 
  {"func.CCCrypt.arg.8","void *,dataOut"}, 
  {"func.__assert_rtn.cc","amd64"}, 
  {"func.CCCrypt.arg.5","const void *,iv"}, 
  {"__stack_chk_fail","func"}, 
  {"func.sym.imp.err.cc","amd64"}, 
  {"enum.CCCryptorStatus.kCCMemoryFailure","3"}, 
  {"func.CCCrypt.arg.4","uint32_t,keyLength"}, 
  {"enum.CCCryptorStatus","kCCSuccess,kCCParamError,kCCBufferTooSmall,kCCMemoryFailure,kCCAlignmentError,kCCDecodeError,kCCUnimplemented"}, 
  {"func.CCCrypt.arg.7","uint32_t,dataInLength"}, 
  {"func.CCCrypt.arg.6","const void *,dataIn"}, 
  {"func.CCCrypt.arg.1","CCAlgorithm,alg"}, 
  {"func.abort.cc","amd64"}, 
  {"func.CCCrypt.arg.0","CCOperation,op"}, 
  {"CCCrypt","func"}, 
  {"func.CCCrypt.arg.3","const void *,key"}, 
  {"func._exit.args","1"}, 
  {"func.CCCrypt.arg.2","int32_t,options"}, 
  {"CCCryptorStatus","enum"}, 
  {"func.__stack_chk_fail.args","0"}, 
  {"enum.CCCryptorStatus.kCCSuccess","0"}, 
  {"enum.CCAlgorithm.kCCAlgorithm3DES","2"}, 
  {"func.CCCrypt.ret","CCCryptorStatus"}, 
  {"func.exit.args","1"}, 
  {"func.__assert_rtn.ret","void"}, 
  {"func.CCCrypt.arg.10","uint32_t *,dataOutMoved"}, 
  {"enum.CCCryptorStatus.kCCUnimplemented","6"}, 
  {"func.exit.arg.0","int,status"}, 
  {"enum.CCAlgorithm.kCCAlgorithmAES","0"}, 
  {"func.__assert_rtn.args","4"}, 
  {"func.sym.imp.err.noreturn","true"}, 
  {"func.__stack_chk_fail.cc","amd64"}, 
  {"enum.CCCryptorStatus.kCCDecodeError","5"}, 
  {"func.__stack_chk_fail.ret","void"}, 
  {"enum.CCOperation.kCCEncrypt","0"}, 
  {"func.abort.ret","void"}, 
  {"enum.CCAlgorithm.kCCAlgorithmCAST","3"}, 
  {"enum.CCAlgorithm","kCCAlgorithmAES,kCCAlgorithmDES,kCCAlgorithm3DES,kCCAlgorithmCAST,kCCAlgorithmRC4,kCCAlgorithmRC2"}, 
  {"enum.CCOperation","kCCEncrypt,kCCDecrypt"}, 
  {"func.exit.noreturn","true"}, 
  {"func._exit.cc","amd64"}, 
  {"func._exit.arg.0","int,status"}, 
  {"func.abort.args","0"}, 
  {"func.__stack_chk_fail.noreturn","true"}, 
  {"func.sym.imp.err.arg.1","const char *,msg"}, 
  {"func.sym.imp.err.arg.0","int,eval"}, 
  {"enum.CCCryptorStatus.kCCParamError","1"}, 
  {"CCAlgorithm","enum"}, 
  {"func.exit.ret","void"}, 
  {"func._exit.noreturn","true"}, 
  {"func.sym.imp.err.ret","void"}, 
  {NULL, NULL}
};
// 0x1aec4170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_types_arm_ios_64_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_types_arm_ios_64_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_types_arm_ios_64(x,y) gperf_types_arm_ios_64_hash(x)
const unsigned int gperf_types_arm_ios_64_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_types_arm_ios_64 = {
  .name = "types-arm-ios-64",
  .get = &gperf_types_arm_ios_64_get,
  .hash = &gperf_types_arm_ios_64_hash,
  .foreach = &gperf_types_arm_ios_64_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_types_arm_ios_64.get)("foo");
	printf ("%s\n", s);
}
#endif
