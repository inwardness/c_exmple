// SDB-CGEN V2.0.2
// gcc -DMAIN=1 sparc.c ; ./a.out > sparc.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"stx","store extended word"}, 
  {"movle","move if less or equal"}, 
  {"movre","move if register zero"}, 
  {"movrgez","move if register greater than or equal to zero"}, 
  {"movu","move if unordered or equal"}, 
  {"fabsq","absolute value quad"}, 
  {"fble","branch on less or equal"}, 
  {"bge","branch on greater or equal"}, 
  {"fblg","branch on less or greater"}, 
  {"subx","substract with carry"}, 
  {"mova","move always"}, 
  {"prefetcha","prefetch data from alternate space"}, 
  {"retl","return from leaf procedure"}, 
  {"move","move if equal"}, 
  {"fitoq","convert 32-bit integer to floating"}, 
  {"movg","move if greater"}, 
  {"fbule","branch on unordered or less"}, 
  {"lduh","load unsigned half word (16bit)"}, 
  {"fitos","convert 32-bit integer to floating"}, 
  {"signx","sign-extend 32-bit value to 64 bits"}, 
  {"bne_pn","branch if not equal"}, 
  {"rett","return from trap instruction"}, 
  {"movrgz","move if register greater than zero"}, 
  {"movneg","move if negative"}, 
  {"bgu","branch on greater unsigned"}, 
  {"movl","move if less or greater"}, 
  {"fabsd","absolute value double"}, 
  {"stxa","store extended word into alternate space"}, 
  {"movn","move never"}, 
  {"fmovcs","move if carry set"}, 
  {"ldub","load unsigned byte from addr"}, 
  {"sethi","sets upper 22 bits of rd with const"}, 
  {"popc","population"}, 
  {"save","provide new register window"}, 
  {"casxl","cas little-endian, extended"}, 
  {"addcc","adds to numbers and updates Z, N, V flags"}, 
  {"movrlz","move if register less than zero"}, 
  {"fmovrlez","move if register less than or equal zero"}, 
  {"brz","branch on register zero"}, 
  {"fstoi","convert floating point to 32-bit integer"}, 
  {"fitod","convert 32-bit integer to floating"}, 
  {"ble","branch on less or equal"}, 
  {"movrnz","move if register not zero"}, 
  {"nop","no operation"}, 
  {"ld","load from memory into register"}, 
  {"bne","branch on not equal"}, 
  {"fmovcc","move if carry clear"}, 
  {"casxa","compare and swap extended from alternate space"}, 
  {"fmovu","move if unordered"}, 
  {"bleu","branch on less or equal unsigned"}, 
  {"st","stores word to addr"}, 
  {"fnegd","negate double"}, 
  {"fmovq","move quad"}, 
  {"iprefetch","instruction prefetch"}, 
  {"fstox","convert floating point to 64-bit integer"}, 
  {"fqtoi","convert floating point to 32-bit integer"}, 
  {"ldda","load double floating-point register from alternate space"}, 
  {"ldxa","load extended word from alternate space"}, 
  {"cmp","sets appropriate condition codes"}, 
  {"brgz","branch on register greater than zero"}, 
  {"fmovg","move if greater"}, 
  {"fmovrgz","move if register greater than zero"}, 
  {"fmove","move if equal"}, 
  {"fmovd","move double"}, 
  {"fmova","move always"}, 
  {"fnegq","negate quad"}, 
  {"fmovn","move never"}, 
  {"fmovl","move if less"}, 
  {"movgu","move if greater unsigned"}, 
  {"fqtox","convert floating point to 64-bit integer"}, 
  {"smul","signed multiplication"}, 
  {"call","call a subroutine, saving return address in o7"}, 
  {"ldswa","load signed word from alternate space"}, 
  {"ret","return from subroutine"}, 
  {"be_pn","branch if equal"}, 
  {"bcs_a_pn","branch if carry bit is set"}, 
  {"or","binary or"}, 
  {"brnz","branch on register not zero"}, 
  {"fmovneg","move if negative"}, 
  {"movleu","move less or equal unsigned"}, 
  {"fbe","branch on equal"}, 
  {"fbg","branch on greater"}, 
  {"movge","move if greater or equal"}, 
  {"movpos","move if positive"}, 
  {"brgez","branch on register greater than or equal to zero"}, 
  {"bpos","branch on positive"}, 
  {"bvs","branch on overflow set"}, 
  {"fmovpos","move if positive"}, 
  {"bg","branch on greater"}, 
  {"fmovgu","move if greater unsigned"}, 
  {"fbl","branch on less"}, 
  {"be","branch on equal"}, 
  {"fbo","branch on ordered"}, 
  {"fbn","branch always"}, 
  {"sra","arithmetic right-shift of rs1, shift by op2 and stores result"}, 
  {"ba","branch always"}, 
  {"orn","binary nor"}, 
  {"fmovrgez","move if register greater than or equal to zero"}, 
  {"srl","shift right logic"}, 
  {"fbu","branch on unordered"}, 
  {"bn","branch never"}, 
  {"bl","branch on less"}, 
  {"mov","moves data from src to dst"}, 
  {"addx","add with carry"}, 
  {"bvc","branch on overflow clear"}, 
  {"fbue","branch on unordered or equal"}, 
  {"casx","cas extended"}, 
  {"fbge","branch on greater or equal"}, 
  {"fbug","branch on unordered or greater"}, 
  {"fmovge","move if greater or equal"}, 
  {"add","addition"}, 
  {"fbuge","branch on unordered or greater"}, 
  {"fbul","branch on unordered or less"}, 
  {"and","binary and"}, 
  {"casa","compare and swap word from alternate space"}, 
  {"casl","cas little-endian"}, 
  {"movvc","move if overflow clear"}, 
  {"clrx","clear extended word"}, 
  {"cas","compare & swap"}, 
  {"movne","move if not equal"}, 
  {"stqa","store quad floating-point register to alternate space"}, 
  {"membar","memory barrier"}, 
  {"movule","move if unordered or less or equal"}, 
  {"sub","substract"}, 
  {"clruw","copy and clear upper word"}, 
  {"stxfsr","store floating-point register (all 64-bits)"}, 
  {"restore","restore previous register window"}, 
  {"fxtod","convert 64-bit integer to floating"}, 
  {"bneg","branch on negative"}, 
  {"ldsw","load a signed word"}, 
  {"bcc_a_pn","branch if carry bit is clear"}, 
  {"movvs","move if overflow set"}, 
  {"fmovrne","move if register not zero"}, 
  {"flushw","flush register windows"}, 
  {"bcc","branch on carry clear"}, 
  {"fmovvc","move if overflow clear"}, 
  {"movcs","move if carry set (less than, unsigned)"}, 
  {"fmovle","move if less or equal"}, 
  {"fbne","branch on not equal"}, 
  {"ba_a","branch always"}, 
  {"fmovne","move if not equal"}, 
  {"movrlez","move if register less than or equal to zero"}, 
  {"fxtoq","convert 64-bit integer to floating"}, 
  {"brlz","branch on register less than zero"}, 
  {"fxtos","convert 64-bit integer to floating"}, 
  {"fmovrlz","move if register less than zero"}, 
  {"prefetch","prefetch data"}, 
  {"unimp","unimplemented instruction"}, 
  {"fmovvs","move if overflow set"}, 
  {"stda","store double floating-point register to alternate space"}, 
  {"bcs","branch on carry set"}, 
  {"fdtox","convert floating point to 64-bit integer"}, 
  {"movcc","move if carry clear (greater or equal, unsigned)"}, 
  {"lda","load floating-point register from alternate space"}, 
  {"movug","move if unordered or greater or equal"}, 
  {"stb","store byte"}, 
  {"sll","shift left logical"}, 
  {"ldqa","load quad floating-point register from alternate space"}, 
  {"sta","store floating-point register to alternate space"}, 
  {"fmovleu","move if less or equal unsigned"}, 
  {"brlez","branch on register less than or equal to zero"}, 
  {"ldx","load extended word"}, 
  {"udivx","unsigned divide (64-bit)"}, 
  {"mulx","multiply"}, 
  {"fdtoi","convert floating point to 32-bit integer"}, 
  {NULL, NULL}
};
// 0x33f48170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_sparc_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_sparc_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_sparc(x,y) gperf_sparc_hash(x)
const unsigned int gperf_sparc_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_sparc = {
  .name = "sparc",
  .get = &gperf_sparc_get,
  .hash = &gperf_sparc_hash,
  .foreach = &gperf_sparc_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_sparc.get)("foo");
	printf ("%s\n", s);
}
#endif
