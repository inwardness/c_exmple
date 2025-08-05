// SDB-CGEN V2.0.2
// gcc -DMAIN=1 6502.c ; ./a.out > 6502.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"plp","pull processor status from stack"}, 
  {"txs","transfer index x to stack pointer"}, 
  {"brk","force break"}, 
  {"dex","decrement index x by one"}, 
  {"sec","set carry flag"}, 
  {"dey","decrement index y by one"}, 
  {"ora","\""}, 
  {"clv","clear overflow flag"}, 
  {"stx","store index x in memory"}, 
  {"sty","store index y in memory"}, 
  {"tsx","transfer stack pointer to index x"}, 
  {"sed","set decimal mode"}, 
  {"bne","branch on result not zero"}, 
  {"sei","set interrupt disable status"}, 
  {"bpl","branch on result plus"}, 
  {"php","push processor status on stack"}, 
  {"pla","pull accumulator from stack"}, 
  {"tya","transfer index y to accumulator"}, 
  {"and","\""}, 
  {"nop","no operation"}, 
  {"inx","increment index x by one"}, 
  {"iny","increment index y by one"}, 
  {"cpx","compare memory and index x"}, 
  {"bvs","branch on overflow set"}, 
  {"cpy","compare memory and index y"}, 
  {"bit","test bits in memory with accumulator"}, 
  {"rti","return from interrupt"}, 
  {"pha","push accumulator on stack"}, 
  {"bcc","branch on carry clear"}, 
  {"cmp","compare memory and accumulator"}, 
  {"rts","return from subroutine"}, 
  {"tax","transfer accumulator to index x"}, 
  {"tay","transfer accumulator to index y"}, 
  {"sbc","subtract memory from accumulator with borrow"}, 
  {"bvc","branch on overflow clear"}, 
  {"lsr","shift right one bit (memory or accumulator)"}, 
  {"cli","clear interrupt disable bit"}, 
  {"dec","decrement memory by one"}, 
  {"sta","store accumulator in memory"}, 
  {"txa","transfer index x to accumulator"}, 
  {"lda","load accumulator with memory"}, 
  {"bcs","branch on carry set"}, 
  {"clc","clear carry flag"}, 
  {"ror","rotate one bit right (memory or accumulator)"}, 
  {"beq","branch on result zero"}, 
  {"asl","shift left one bit (memory or accumulator)"}, 
  {"jsr","jump to new location saving return address"}, 
  {"bmi","branch on result minus"}, 
  {"cld","clear decimal mode"}, 
  {"adc","add memory to accumulator with carry"}, 
  {"ldy","load index y with memory"}, 
  {"ldx","load index x with memory"}, 
  {"eor","\""}, 
  {"inc","increment memory by one"}, 
  {"rol","rotate one bit left (memory or accumulator)"}, 
  {"jmp","jump to new location"}, 
  {NULL, NULL}
};
// 0x7158160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_6502_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_6502_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_6502(x,y) gperf_6502_hash(x)
const unsigned int gperf_6502_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_6502 = {
  .name = "6502",
  .get = &gperf_6502_get,
  .hash = &gperf_6502_hash,
  .foreach = &gperf_6502_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_6502.get)("foo");
	printf ("%s\n", s);
}
#endif
