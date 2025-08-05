// SDB-CGEN V2.0.2
// gcc -DMAIN=1 msp430.c ; ./a.out > msp430.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"clrn","clear negative bit"}, 
  {"adc.b","add carry to destination"}, 
  {"jeq","jump if equal/zero"}, 
  {"pop.b","pop byte from stack"}, 
  {"setc","set carry flag"}, 
  {"incd.b","increment destination twice"}, 
  {"jge","jump if greater or equal"}, 
  {"setn","set negative flag"}, 
  {"addc","add source and carry to destinatio"}, 
  {"clr.b","clear destination"}, 
  {"xor","exclusive or"}, 
  {"push","push value onto stac"}, 
  {"decd.b","decrement destination twice"}, 
  {"inv","invert bits in destination"}, 
  {"jnz","jump if not equal/zero"}, 
  {"rla.b","rotate left"}, 
  {"jmp","jump"}, 
  {"dadc.b","decimal add carry to destination"}, 
  {"eint","enable interrupts"}, 
  {"ret","return from subroutine"}, 
  {"dec","decrement destination"}, 
  {"tst.b","test destination"}, 
  {"call","subroutine call"}, 
  {"inc.b","increment destination"}, 
  {"br","branch to"}, 
  {"rlc.b","rotate left through carry"}, 
  {"sbc.b","subtract source and borrow"}, 
  {"dec.b","decrement destination"}, 
  {"setz","set zero flag"}, 
  {"incd","increment destination twice"}, 
  {"sub","subtract source from destination"}, 
  {"cmp","compare"}, 
  {"swpb","swap bytes"}, 
  {"subc","subtract source from destination (with carry)"}, 
  {"decd","decrement destination twice"}, 
  {"sbc","subtract source and borrow"}, 
  {"bic","bit clear"}, 
  {"mov","move source to destination"}, 
  {"reti","return from interrup"}, 
  {"jn","jump if negative"}, 
  {"rra","rotate right arithmetiс"}, 
  {"clrz","clear zero bit"}, 
  {"rlc","rotate left through carry"}, 
  {"jl","jump if less"}, 
  {"rrc","rotate right through carry"}, 
  {"rla","rotate left"}, 
  {"dint","disable interrupts"}, 
  {"sxt","sign extend byte to word"}, 
  {"and","logical and"}, 
  {"tst","test destination"}, 
  {"dadd","decimal add source to destination (with carry)"}, 
  {"inv.b","invert bits in destination"}, 
  {"bit","test bits of source and destination"}, 
  {"jc","jump if carry/higher or same"}, 
  {"bis","bit set"}, 
  {"dadc","decimal add carry to destination"}, 
  {"jnc","jump if no carry/lower"}, 
  {"nop","no operation"}, 
  {"adc","add constant"}, 
  {"pop","pop word from stack"}, 
  {"add","add source to destination"}, 
  {"clr","clear destination"}, 
  {"inc","increment destination"}, 
  {NULL, NULL}
};
// 0xc0c170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_msp430_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_msp430_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_msp430(x,y) gperf_msp430_hash(x)
const unsigned int gperf_msp430_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_msp430 = {
  .name = "msp430",
  .get = &gperf_msp430_get,
  .hash = &gperf_msp430_hash,
  .foreach = &gperf_msp430_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_msp430.get)("foo");
	printf ("%s\n", s);
}
#endif
