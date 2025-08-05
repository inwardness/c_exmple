// SDB-CGEN V2.0.2
// gcc -DMAIN=1 v810.c ; ./a.out > v810.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"sei","set interrupt disable flag"}, 
  {"ble","branch if less/equal (signed)"}, 
  {"bnv","branch if not overflow"}, 
  {"andbsu","and bit string upward"}, 
  {"in.w","input word"}, 
  {"st.b","store byte"}, 
  {"mulf.s","multiply floating short"}, 
  {"sch1bsd","search bit 1 downward"}, 
  {"trap","trap"}, 
  {"cvt.ws","convert word to floating short"}, 
  {"div","divide signed"}, 
  {"blt","branch if less than (signed)"}, 
  {"sar","shift arithmetic right"}, 
  {"st.w","store word"}, 
  {"xor","exclusive or register"}, 
  {"bge","branch if greater/equal (signed)"}, 
  {"not","not"}, 
  {"trnc.sw","truncate floating short to word"}, 
  {"xh","swap halfwords"}, 
  {"cmpf.s","compare floating short"}, 
  {"ldsr","load into system register"}, 
  {"cmp","compare"}, 
  {"stsr","store from system register"}, 
  {"mpyhw","multiply halfword signed"}, 
  {"andi","and immediate"}, 
  {"andnbsu","and not bit string upward"}, 
  {"xori","exclusive or immediate"}, 
  {"xb","swap low bytes"}, 
  {"cli","clear interrupt disable flag"}, 
  {"bgt","branch if greater than (signed)"}, 
  {"movhi","add high halfword"}, 
  {"jmp","jump register"}, 
  {"mov","move"}, 
  {"caxi","compare and exchange interlocked"}, 
  {"halt","halt cpu"}, 
  {"shr","shift right"}, 
  {"movea","add immediate"}, 
  {"xornbsu","exclusive or not bit string upward"}, 
  {"divu","divide unsigned"}, 
  {"be","branch if zero/equal"}, 
  {"ld.b","load byte"}, 
  {"jal","jump and link"}, 
  {"shl","shift left"}, 
  {"notbsu","not bit string upward"}, 
  {"ori","or immediate"}, 
  {"add","add"}, 
  {"addi","add immediate"}, 
  {"or","or"}, 
  {"subf.s","subtract floating short"}, 
  {"bn","branch if negative"}, 
  {"bl","branch if carry/less than"}, 
  {"ld.h","load halfword"}, 
  {"bnh","branch if not higher (unsigned)"}, 
  {"bh","branch if higher (unsigned)"}, 
  {"cvt.sw","convert floating short to word"}, 
  {"bv","branch if overflow"}, 
  {"bnl","branch if not carry/less than"}, 
  {"xorbsu","exclusive or bit string upward"}, 
  {"jr","jump relative"}, 
  {"mulu","multiply unsigned"}, 
  {"sch0bsu","search bit 0 upward"}, 
  {"orbsu","or bit string upward"}, 
  {"ld.w","load word"}, 
  {"br","branch always"}, 
  {"in.h","input halfword"}, 
  {"out.b","output byte"}, 
  {"ornbsu","or not bit string immediate"}, 
  {"bp","branch if positive"}, 
  {"setf","set flag condition"}, 
  {"bne","branch if not zero/equal"}, 
  {"addf.s","add floating short"}, 
  {"out.h","output halfword"}, 
  {"and","and"}, 
  {"in.b","input byte"}, 
  {"divf.s","divide floating short"}, 
  {"sch0bsd","search bit 0 downward"}, 
  {"out.w","output word"}, 
  {"mul","multiply signed"}, 
  {"sch1bsu","search bit 1 upward"}, 
  {"reti","return from trap/irq"}, 
  {"st.h","store halfword"}, 
  {"movbsu","move bit string upward"}, 
  {"rev","reverse bits"}, 
  {"sub","subtract"}, 
  {NULL, NULL}
};
// 0x367e2160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_v810_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_v810_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_v810(x,y) gperf_v810_hash(x)
const unsigned int gperf_v810_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_v810 = {
  .name = "v810",
  .get = &gperf_v810_get,
  .hash = &gperf_v810_hash,
  .foreach = &gperf_v810_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_v810.get)("foo");
	printf ("%s\n", s);
}
#endif
