// SDB-CGEN V2.0.2
// gcc -DMAIN=1 sh.c ; ./a.out > sh.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"stc","store control register"}, 
  {"tst","test logical"}, 
  {"mova","move effective address"}, 
  {"bt","branch if true"}, 
  {"movca.l","move with cache block allocation"}, 
  {"jmp","jump"}, 
  {"fabs","floating-point absolute value"}, 
  {"pref","prefetch data to cache"}, 
  {"and.b","bitise and (byte)"}, 
  {"muls.w","multiply as signed word"}, 
  {"sts","store system/fpu register"}, 
  {"div1","divide 1 step"}, 
  {"fldi0","floating-point load immediate 0.0"}, 
  {"fldi1","floating-point loa immediate 1.0"}, 
  {"fdiv","floating-point divide"}, 
  {"addc","add with carry"}, 
  {"add","add binary"}, 
  {"bt/s","branch if true with delay slot"}, 
  {"trapa","trap always"}, 
  {"rte","return from exception"}, 
  {"cmp/eq","compare rm,rn : set t if rn == rm"}, 
  {"rotl","rotate left"}, 
  {"fcmp/gt","compare (float) frm, frn: set t if frn > frm"}, 
  {"cmp/str","compare rm,rn : set t if any bytes are equal"}, 
  {"addv","add with (v flag) overflow check"}, 
  {"braf","branch far"}, 
  {"mac.l","multiply and accumulate long"}, 
  {"or","bitwise or (byte)"}, 
  {"fsub","floating-point subtract"}, 
  {"rts","return from subroutine"}, 
  {"bsrf","branch to subroutine far"}, 
  {"not","not-logical complement"}, 
  {"ftrc","floating-point truncate and convert to integer"}, 
  {"nop","no operation"}, 
  {"mac.w","multiply and accumulate word"}, 
  {"sett","set t bit"}, 
  {"sets","set s bit"}, 
  {"fadd","floating-point add"}, 
  {"frchg","fr-bit change"}, 
  {"shll16","shift logical left 16"}, 
  {"sleep","sleep"}, 
  {"jsr","jump to subroutine"}, 
  {"ldtlb","load pteh/ptel/ptea to tlb"}, 
  {"mov.w","move word"}, 
  {"fschg","sz-bit change"}, 
  {"flds","floating-point load to system register"}, 
  {"rotcl","rotate with carry left"}, 
  {"ftrv","floating-point transform vector"}, 
  {"tst.b","test logical, byte"}, 
  {"rotr","rotate right"}, 
  {"fcnvds","floating-point convert double to single precision"}, 
  {"exts.w","extend word as signed"}, 
  {"xor","bitwise exclusive-or"}, 
  {"shar","shift arithmetic right"}, 
  {"clrmac","clear mac register"}, 
  {"mov.l","move longword"}, 
  {"cmp/hs","compare rm,rn : set t if  rn >= rm (unsigned)"}, 
  {"negc","negate with carry"}, 
  {"shal","shift arithmetic left"}, 
  {"extu.w","extend word as unsigned"}, 
  {"shlr2","shift logical right 2"}, 
  {"bf.s","branch if false with delay slot"}, 
  {"dmuls.l","double-length multiply as signed"}, 
  {"fmov","floating-point move"}, 
  {"cmp/hi","compare rm,rn : set t if  rn > rm (unsigned)"}, 
  {"shlr8","shift logical right 8"}, 
  {"exts.b","extend byte as signed"}, 
  {"shad","shift arithmetic dynamically"}, 
  {"mov.b","move byte"}, 
  {"div0u","divide (step 0) as unsigned"}, 
  {"dt","decrement and test"}, 
  {"cmp/pl","set t if rn > 0"}, 
  {"div0s","divide (step 0) as signed"}, 
  {"dmulu.l","double-length multiply as unsigned"}, 
  {"ldc","load to control register"}, 
  {"float","floating-point convert from integer"}, 
  {"rotcr","rotate with carry right"}, 
  {"fsts","floating-point store system register"}, 
  {"ocbi","operand cache block invalidate"}, 
  {"neg","negate"}, 
  {"extu.b","extend byte as unsigned"}, 
  {"shlr","shift logical right"}, 
  {"and","bitwise and"}, 
  {"mov","move data"}, 
  {"lds","load to fpu/system register"}, 
  {"fcmp/eq","compare (float) frm, frn: set t if frm == frn"}, 
  {"cmp/gt","compare rm,rn : set t if rn > rm (signed)"}, 
  {"swap.w","swap register words"}, 
  {"sub","subtract binary"}, 
  {"shll8","shift logical left 8"}, 
  {"mulu.w","multiply as unsigned word"}, 
  {"fneg","floating-point negate value"}, 
  {"cmp/pz","set t if rn >= 0"}, 
  {"ldc.l","load to control register"}, 
  {"bra","branch"}, 
  {"lds.l","load to fpu/system register"}, 
  {"bf/s","branch if false with delay slot"}, 
  {"fcnvsd","floating-point convert single to double precision"}, 
  {"clrs","clear s bit"}, 
  {"fipr","floating-point inner product"}, 
  {"clrt","clear t bit"}, 
  {"shll2","shift logical left 2"}, 
  {"mul.l","multiply long"}, 
  {"subc","subtract with carry"}, 
  {"xor.b","bitwise exclusive-or (byte)"}, 
  {"stc.l","store control register"}, 
  {"shld","shift logical dynamically"}, 
  {"cmp/ge","compare rm,rn : set t if rn >= rm (signed)"}, 
  {"sts.l","store system/fpu register"}, 
  {"ocbp","operand cache block purge"}, 
  {"bf","branch if false"}, 
  {"swap.b","swap register lower bytes"}, 
  {"tas.b","test and set byte"}, 
  {"fmac","floating-point multiply and accumulate"}, 
  {"bsr","branch to subroutine"}, 
  {"fmul","floating-point multiply"}, 
  {"shlr16","shift logical right 16"}, 
  {"shll","shift logical left"}, 
  {"movt","move t bit to rn"}, 
  {"fmov.s","floating-point move"}, 
  {"ocbwb","operand cache block write back"}, 
  {"bt.s","branch if true with delay slot"}, 
  {"fsqrt","floating-point square root"}, 
  {"xtrct","middle extraction from linked register"}, 
  {"subv","subtract with (v flag) underflow check"}, 
  {NULL, NULL}
};
// 0x14c35160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_sh_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_sh_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_sh(x,y) gperf_sh_hash(x)
const unsigned int gperf_sh_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_sh = {
  .name = "sh",
  .get = &gperf_sh_get,
  .hash = &gperf_sh_hash,
  .foreach = &gperf_sh_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_sh.get)("foo");
	printf ("%s\n", s);
}
#endif
