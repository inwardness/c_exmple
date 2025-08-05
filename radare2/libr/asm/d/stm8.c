// SDB-CGEN V2.0.2
// gcc -DMAIN=1 stm8.c ; ./a.out > stm8.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"jrsge","signed greater or equal"}, 
  {"jrne","jump if not equal (Z=0)"}, 
  {"srlw","shift right logical word"}, 
  {"tnz","test for negative or zero"}, 
  {"neg","negate (logical 2 complement)"}, 
  {"push","push to stack"}, 
  {"wfi","wait for interrupt"}, 
  {"mul","unsigned multiplication"}, 
  {"jrule","jump unsigned lesser or equal"}, 
  {"btjt","conditional bit test and branch if true"}, 
  {"jrnh","jump if H=0"}, 
  {"divw","unsigned divide word"}, 
  {"ldw","load word"}, 
  {"bcpl","bit complement"}, 
  {"jrnm","jump if interrupts are not masked"}, 
  {"callr","call subroutine (relative)"}, 
  {"xor","exclusvie or"}, 
  {"call","call subroutine"}, 
  {"jril","jump if port pin is low (0)"}, 
  {"jpf","jump far"}, 
  {"rcf","reset carry flag"}, 
  {"cpw","compare word"}, 
  {"jrsgt","signed greater than"}, 
  {"jrih","jump if port pin is high (1)"}, 
  {"decw","decrement word"}, 
  {"jreq","jump if equal"}, 
  {"jrugt","jump unsigned greater than"}, 
  {"rrca","rotate word right with a"}, 
  {"exgw","exchange register word contents"}, 
  {"jrv","jump if overflow bit is set"}, 
  {"jrpl","jump if N=0"}, 
  {"btjf","conditional bit test and branch if false"}, 
  {"retf","return from far subroutine"}, 
  {"clrw","clear word"}, 
  {"rlcw","rotate word left with carry"}, 
  {"jrsle","signed lesser or equal"}, 
  {"pushw","push a word to stack"}, 
  {"div","unsigned division"}, 
  {"and","binary and operation"}, 
  {"jrm","jump if interrupts are masked"}, 
  {"rrcw","rotate word right with carry"}, 
  {"sim","set interrupt mask"}, 
  {"swap","swap nibbles"}, 
  {"jrh","jump if H=1"}, 
  {"bset","bit set"}, 
  {"exg","exchange register contents"}, 
  {"bres","bit reset"}, 
  {"rim","reset interrupt mask"}, 
  {"negw","negate word (logical 2 complement)"}, 
  {"break","software breakpoint"}, 
  {"jrf","never jump (nop?)"}, 
  {"adc","addition with carry"}, 
  {"tnzw","test word for negative or zero"}, 
  {"jra","jump relative always"}, 
  {"add","addition"}, 
  {"cpl","logical 1 complement"}, 
  {"jrc","jump if carry"}, 
  {"jrslt","signed lesser than"}, 
  {"sraw","shift right arithmetic word"}, 
  {"sll","shift left logical"}, 
  {"cplw","logical 1 complement word"}, 
  {"sbc","substraction with carry"}, 
  {"bcp","bit compare"}, 
  {"sra","shift right arithmetic"}, 
  {"addw","addition word"}, 
  {"scf","set carry flag"}, 
  {"subw","substract word"}, 
  {"sllw","shift left logical word"}, 
  {"srl","shift right logical"}, 
  {"trap","software interrupt"}, 
  {"ret","return from subroutine"}, 
  {"rlwa","rotate left word through a"}, 
  {"pop","pop from stack"}, 
  {"mov","move a byte from a source address to a destination address"}, 
  {"halt","stop oscillator"}, 
  {"bccm","copy carry bit to memory"}, 
  {"ccf","complement carry falg"}, 
  {"inc","increment"}, 
  {"cp","compare"}, 
  {"ld","load"}, 
  {"rvf","reset overflow flag"}, 
  {"clr","clear destination byte"}, 
  {"sub","substract"}, 
  {"iret","interrupt return"}, 
  {"dec","decrement"}, 
  {"jrnv","jump if overflow bit is not set V=0"}, 
  {"popw","pop a word from stack"}, 
  {"rlc","rotate left with carry"}, 
  {"jp","absolute jump"}, 
  {"rrwa","rotate right word through a"}, 
  {"int","interrupt"}, 
  {"callf","call far subroutine"}, 
  {"or","binary or"}, 
  {"ldf","far load"}, 
  {"rrc","rotate right with carry"}, 
  {"jrmi","jump if N=1"}, 
  {"nop","no operation"}, 
  {"swapw","swap words"}, 
  {"incw","increment word"}, 
  {"jrnc","jump if carry flag is not set"}, 
  {NULL, NULL}
};
// 0x1d94160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_stm8_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_stm8_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_stm8(x,y) gperf_stm8_hash(x)
const unsigned int gperf_stm8_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_stm8 = {
  .name = "stm8",
  .get = &gperf_stm8_get,
  .hash = &gperf_stm8_hash,
  .foreach = &gperf_stm8_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_stm8.get)("foo");
	printf ("%s\n", s);
}
#endif
