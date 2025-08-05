// SDB-CGEN V2.0.2
// gcc -DMAIN=1 i8080.c ; ./a.out > i8080.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"hlt","halt processor"}, 
  {"cccc","conditional subroutine call"}, 
  {"xthl","swap h:l with top word on stack"}, 
  {"rst","restart (call n*8)"}, 
  {"call","unconditional subroutine call"}, 
  {"ora","or  register with a"}, 
  {"ani","and immediate with a"}, 
  {"rccc","conditional return from subroutine"}, 
  {"lxi","load register pair immediate"}, 
  {"ral","rotate a left through carry"}, 
  {"sub","subtract register from a"}, 
  {"inr","increment register"}, 
  {"ei","enable interrupts"}, 
  {"cmc","compliment carry flag"}, 
  {"cma","compliment a"}, 
  {"ana","and register with a"}, 
  {"sui","subtract immediate from a"}, 
  {"jccc","conditional jump"}, 
  {"rrc","rotate a right"}, 
  {"nop","no operation"}, 
  {"inx","increment register pair"}, 
  {"lhld","load h:l from memory"}, 
  {"daa","decimal adjust accumulator"}, 
  {"pop","pop  register pair from the stack"}, 
  {"dad","add register pair to hl (16 bit add)"}, 
  {"cmp","compare register with a"}, 
  {"xchg","exchange values in D<->H E<->L"}, 
  {"xri","exclusiveor immediate with a"}, 
  {"pchl","jump to address in h:l"}, 
  {"mov","move register to register"}, 
  {"stax","store indirect through bc or de"}, 
  {"in","read input port into a"}, 
  {"dcr","decrement register"}, 
  {"ret","unconditional return from subroutine"}, 
  {"sbb","subtract register from a with borrow"}, 
  {"di","disable interrupts"}, 
  {"cpi","compare immediate with a"}, 
  {"push","push register pair on the stack"}, 
  {"stc","set carry flag"}, 
  {"xra","exclusive or register with a"}, 
  {"out","write a to output port"}, 
  {"sta","store a to memory"}, 
  {"rlc","rotate a left"}, 
  {"sbi","subtract immediate from a with borrow"}, 
  {"dcx","decrement register pair"}, 
  {"rar","rotate a right through carry"}, 
  {"lda","load a from memory"}, 
  {"sphl","set sp to content of h:l"}, 
  {"shld","store h:l to memory"}, 
  {"adc","add register to a with carry"}, 
  {"add","add register to a"}, 
  {"ldax","load indirect through bc or de"}, 
  {"mvi","move immediate to register"}, 
  {"aci","add immediate to a with carry"}, 
  {"ori","or  immediate with a"}, 
  {"jmp","unconditional jump"}, 
  {"adi","add immediate to a"}, 
  {NULL, NULL}
};
// 0xe0d170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_i8080_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_i8080_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_i8080(x,y) gperf_i8080_hash(x)
const unsigned int gperf_i8080_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_i8080 = {
  .name = "i8080",
  .get = &gperf_i8080_get,
  .hash = &gperf_i8080_hash,
  .foreach = &gperf_i8080_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_i8080.get)("foo");
	printf ("%s\n", s);
}
#endif
