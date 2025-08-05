// SDB-CGEN V2.0.2
// gcc -DMAIN=1 types_x86_macos_64.c ; ./a.out > types_x86_macos_64.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"func.__assert_rtn.args","4"}, 
  {"enum.CCCryptorStatus.kCCParamError","1"}, 
  {"enum.CCAlgorithm.kCCAlgorithmDES","1"}, 
  {"func.__stack_chk_fail.cc","amd64"}, 
  {"func.CCCrypt.ret","CCCryptorStatus"}, 
  {"enum.CCAlgorithm.kCCAlgorithmBlowfish","6"}, 
  {"func.exit.arg.0","int,status"}, 
  {"enum.CCAlgorithm","kCCAlgorithmAES,kCCAlgorithmDES,kCCAlgorithm3DES,kCCAlgorithmCAST,kCCAlgorithmRC4,kCCAlgorithmRC2"}, 
  {"func.__assert_rtn.cc","amd64"}, 
  {"func.exit.args","1"}, 
  {"enum.CCAlgorithm.kCCAlgorithmCAST","3"}, 
  {"enum.CCAlgorithm.kCCAlgorithmAES","0"}, 
  {"enum.CCCryptorStatus.kCCSuccess","0"}, 
  {"func.abort.ret","void"}, 
  {"enum.CCCryptorStatus","kCCSuccess,kCCParamError,kCCBufferTooSmall,kCCMemoryFailure,kCCAlignmentError,kCCDecodeError,kCCUnimplemented"}, 
  {"func._exit.args","1"}, 
  {"func.abort.noreturn","true"}, 
  {"enum.CCAlgorithm.kCCAlgorithm3DES","2"}, 
  {"func.exit.ret","void"}, 
  {"func._exit.arg.0","int,status"}, 
  {"enum.CCOperation","kCCEncrypt,kCCDecrypt"}, 
  {"CCOperation","enum"}, 
  {"func.CCCrypt.args","11"}, 
  {"enum.CCAlgorithm.kCCAlgorithmRC4","4"}, 
  {"enum.CCCryptorStatus.kCCDecodeError","5"}, 
  {"func._exit.cc","amd64"}, 
  {"enum.CCAlgorithm.kCCAlgorithmRC2","5"}, 
  {"enum.CCCryptorStatus.kCCUnimplemented","6"}, 
  {"func.__assert_rtn.arg.0","const char *,assertion"}, 
  {"func.__assert_rtn.arg.1","const char *,file"}, 
  {"func.abort.args","0"}, 
  {"func.__assert_rtn.arg.2","unsigned int,line"}, 
  {"func.__stack_chk_fail.noreturn","true"}, 
  {"func._exit.noreturn","true"}, 
  {"func.__assert_rtn.arg.3","const char *,function"}, 
  {"func.CCCrypt.cc","cdecl"}, 
  {"CCCryptorStatus","enum"}, 
  {"__assert_rtn","func"}, 
  {"func.exit.cc","amd64"}, 
  {"func.abort.cc","amd64"}, 
  {"func.CCCrypt.arg.9","uint32_t,dataOutAvailable"}, 
  {"func.CCCrypt.arg.8","void *,dataOut"}, 
  {"_exit","func"}, 
  {"func.CCCrypt.arg.5","const void *,iv"}, 
  {"func.CCCrypt.arg.4","uint32_t,keyLength"}, 
  {"CCAlgorithm","enum"}, 
  {"func.CCCrypt.arg.7","uint32_t,dataInLength"}, 
  {"func.CCCrypt.arg.6","const void *,dataIn"}, 
  {"CCCrypt","func"}, 
  {"func.exit.noreturn","true"}, 
  {"func.CCCrypt.arg.1","CCAlgorithm,alg"}, 
  {"func.CCCrypt.arg.0","CCOperation,op"}, 
  {"exit","func"}, 
  {"func.CCCrypt.arg.3","const void *,key"}, 
  {"func.__stack_chk_fail.ret","void"}, 
  {"func.CCCrypt.arg.2","int32_t,options"}, 
  {"func._exit.ret","void"}, 
  {"__stack_chk_fail","func"}, 
  {"enum.CCCryptorStatus.kCCBufferTooSmall","2"}, 
  {"func.__stack_chk_fail.args","0"}, 
  {"enum.CCOperation.kCCEncrypt","0"}, 
  {"func.CCCrypt.arg.10","uint32_t *,dataOutMoved"}, 
  {"enum.CCCryptorStatus.kCCMemoryFailure","3"}, 
  {"enum.CCCryptorStatus.kCCAlignmentError","4"}, 
  {"func.__assert_rtn.ret","void"}, 
  {"func.__assert_rtn.noreturn","true"}, 
  {"abort","func"}, 
  {"enum.CCOperation.kCCDecrypt","1"}, 
  {NULL, NULL}
};
// 0x37fec170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_types_x86_macos_64_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_types_x86_macos_64_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_types_x86_macos_64(x,y) gperf_types_x86_macos_64_hash(x)
const unsigned int gperf_types_x86_macos_64_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_types_x86_macos_64 = {
  .name = "types-x86-macos-64",
  .get = &gperf_types_x86_macos_64_get,
  .hash = &gperf_types_x86_macos_64_hash,
  .foreach = &gperf_types_x86_macos_64_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_types_x86_macos_64.get)("foo");
	printf ("%s\n", s);
}
#endif
