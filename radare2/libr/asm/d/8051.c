// SDB-CGEN V2.0.2
// gcc -DMAIN=1 8051.c ; ./a.out > 8051.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"clr","clear"}, 
  {"jc","jump if carry is set"}, 
  {"jb","jump if bit set"}, 
  {"jmp","jump indirect"}, 
  {"addc","add with carry"}, 
  {"anl","logical and"}, 
  {"cjne","compare and jump if not equal"}, 
  {"xch","exchange"}, 
  {"xrl","logical exclusive-or"}, 
  {"jz","jump if accumulator zero"}, 
  {"cpl","complement"}, 
  {"mov","move"}, 
  {"sjmp","short jump (relative addr)"}, 
  {"ljmp","long jump"}, 
  {"subb","subtract with borrow"}, 
  {"inc","increment"}, 
  {"rr","rotate accumulator right"}, 
  {"push","push onto stack"}, 
  {"jbc","jump if bit is set and clear bit"}, 
  {"swap","swap nibbles within the accumulator"}, 
  {"ret","return from subroutine"}, 
  {"pop","pop from stack"}, 
  {"acall","absolute call"}, 
  {"mul","multiply accumulator and b register"}, 
  {"jnz","jump if accumulator not zero"}, 
  {"da","decimal-adjust accumulator after addition"}, 
  {"rrc","rotate accumulator right through carry"}, 
  {"orl","logical or"}, 
  {"rlc","rotate accumulator left through carry"}, 
  {"setb","set bit"}, 
  {"xchd","exchange low-order nibbles between accumulator and RAM location"}, 
  {"djnz","decrement and jump if not zero"}, 
  {"movx","move between external memory and accumulator"}, 
  {"reti","return from interrupt"}, 
  {"dec","decrement"}, 
  {"rl","rotate accumulator left"}, 
  {"lcall","long call"}, 
  {"nop","no operation"}, 
  {"movc","move from code or program memory to accumulator"}, 
  {"add","add"}, 
  {"jnc","jump if carry not set"}, 
  {"jnb","jump if bit not set"}, 
  {"div","divide accumulator by b register"}, 
  {"ajmp","absolute jump"}, 
  {NULL, NULL}
};
// 0x26ddb160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_8051_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_8051_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_8051(x,y) gperf_8051_hash(x)
const unsigned int gperf_8051_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_8051 = {
  .name = "8051",
  .get = &gperf_8051_get,
  .hash = &gperf_8051_hash,
  .foreach = &gperf_8051_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_8051.get)("foo");
	printf ("%s\n", s);
}
#endif
