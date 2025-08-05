// SDB-CGEN V2.0.2
// gcc -DMAIN=1 v850.c ; ./a.out > v850.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"adf","add on condition flag"}, 
  {"feret","return from trap or interrupt"}, 
  {"xorbsu","exclusive or bit string upward"}, 
  {"andnbsu","and not bit string upward"}, 
  {"nop1","do nothing once"}, 
  {"tst1","test bit"}, 
  {"bsh","byte swap halfword"}, 
  {"xh","swap halfwords"}, 
  {"sch1bsd","search bit 1 downward"}, 
  {"cmpf.s","compare floating short"}, 
  {"jmp","jump register"}, 
  {"andbsu","and bit string upward"}, 
  {"bgt","branch if greater than (signed)"}, 
  {"xor","exclusive bitwise OR on registers"}, 
  {"caxi","compare and exchange interlocked"}, 
  {"xb","swap low bytes"}, 
  {"jarl","jump and register link"}, 
  {"jr","jump relative"}, 
  {"divu","divide unsigned"}, 
  {"xornbsu","exclusive or not bit string upward"}, 
  {"divq","divide quad word"}, 
  {"subr","reverse substraction"}, 
  {"not1","bitwise NOT given bit"}, 
  {"ctret","return from callt"}, 
  {"divh","divide half word"}, 
  {"and","and"}, 
  {"zxb","zero extend byte"}, 
  {"sxh","sign extend halfword"}, 
  {"mul","multiply signed"}, 
  {"xori","exclusive or immediate"}, 
  {"cvt.ws","convert word to floating short"}, 
  {"sch0bsu","search bit 0 upward"}, 
  {"sst.w","store word"}, 
  {"stsr","store from system register"}, 
  {"zxh","zero extend half"}, 
  {"sxb","sign extend byte"}, 
  {"mac","multiply and add word"}, 
  {"ldsr","load into system register"}, 
  {"cmov","conditional move"}, 
  {"switch","jump with table lookup"}, 
  {"sch0l","search zero from left"}, 
  {"jal","jump and link"}, 
  {"bnh","branch if not higher (unsigned)"}, 
  {"tst","test registers"}, 
  {"bnl","branch if not carry/less than"}, 
  {"sch0bsd","search bit 0 downward"}, 
  {"sst.h","store half word"}, 
  {"bne","branch if not zero/equal"}, 
  {"be","branch if zero/equal"}, 
  {"mulu","multiply unsigned"}, 
  {"ld.bu","load unsigned byte"}, 
  {"sst.b","store byte"}, 
  {"set1","set bit"}, 
  {"bc","branch on condition"}, 
  {"eiret","return from trap or interrupt"}, 
  {"shr","shift right"}, 
  {"bn","branch if negative"}, 
  {"rie","reserved instruction exception"}, 
  {"bl","branch if carry/less than"}, 
  {"movea","add immediate"}, 
  {"di","disable interrupts"}, 
  {"bh","branch if higher (unsigned)"}, 
  {"shl","shift left"}, 
  {"bv","branch if overflow"}, 
  {"prepare","create stack frame"}, 
  {"callt","call interrupt table entry at given address"}, 
  {"divf.s","divide floating short"}, 
  {"cvt.sw","convert floating short to word"}, 
  {"mpyhw","multiply halfword signed"}, 
  {"sch0r","search zero from right"}, 
  {"br","branch always"}, 
  {"sch1l","search one from left"}, 
  {"or","bitwise or"}, 
  {"bnv","branch if not overflow"}, 
  {"out.b","output byte"}, 
  {"bp","branch if positive"}, 
  {"satsubi","saturated substrcation"}, 
  {"st.h","store halfword"}, 
  {"orbsu","or bit string upward"}, 
  {"synce","synchronize exceptions"}, 
  {"satadd","saturated addition"}, 
  {"out.h","output halfword"}, 
  {"satsubr","saturated reverse substract"}, 
  {"ble","branch if less/equal (signed)"}, 
  {"syncm","synchronize memory"}, 
  {"out.w","output word"}, 
  {"movhi","add high halfword"}, 
  {"st.b","store byte"}, 
  {"syncp","synchronize pipeline"}, 
  {"sasf","shift and flag condition"}, 
  {"andi","and immediate"}, 
  {"sar","shift arithmetic right"}, 
  {"ld.hu","load unsigned half word"}, 
  {"syscall","system call"}, 
  {"clr1","clear bit"}, 
  {"ornbsu","or not bit string immediate"}, 
  {"setf","set flag condition"}, 
  {"in.h","input halfword"}, 
  {"ei","enable interrupts"}, 
  {"st.w","store word"}, 
  {"sub","subtract"}, 
  {"blt","branch if less than (signed)"}, 
  {"trap","trap"}, 
  {"sch1r","search one from right"}, 
  {"div","divide signed"}, 
  {"movbsu","move bit string upward"}, 
  {"addf.s","add floating short"}, 
  {"sbf","conditional substraction"}, 
  {"in.b","input byte"}, 
  {"mov","move"}, 
  {"not","not"}, 
  {"cmp","compare two registers and update flags"}, 
  {"ori","or immediate"}, 
  {"nop","do nothing"}, 
  {"notbsu","not bit string upward"}, 
  {"satsub","saturated substraction"}, 
  {"ld.b","load signed byte"}, 
  {"cli","clear interrupt disable flag"}, 
  {"in.w","input word"}, 
  {"subf.s","subtract floating short"}, 
  {"reti","return from trap or interrupt"}, 
  {"addi","add immediate"}, 
  {"trnc.sw","truncate floating short to word"}, 
  {"hsw","halfword swap word"}, 
  {"ld.h","load halfword"}, 
  {"dispose","function dispose"}, 
  {"bsw","byte swap word"}, 
  {"ld.w","load word"}, 
  {"hsh","halfword swap half word"}, 
  {"halt","halt cpu"}, 
  {"rev","reverse bits"}, 
  {"sch1bsu","search bit 1 upward"}, 
  {"fetrap","software trap"}, 
  {"mulf.s","multiply floating short"}, 
  {"add","add immediate to register"}, 
  {"sei","set interrupt disable flag"}, 
  {"bge","branch if greater/equal (signed)"}, 
  {NULL, NULL}
};
// 0x2b0e1160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_v850_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_v850_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_v850(x,y) gperf_v850_hash(x)
const unsigned int gperf_v850_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_v850 = {
  .name = "v850",
  .get = &gperf_v850_get,
  .hash = &gperf_v850_hash,
  .foreach = &gperf_v850_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_v850.get)("foo");
	printf ("%s\n", s);
}
#endif
