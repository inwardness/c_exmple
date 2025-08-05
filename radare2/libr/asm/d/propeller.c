// SDB-CGEN V2.0.2
// gcc -DMAIN=1 propeller.c ; ./a.out > propeller.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"ret","return to address"}, 
  {"subsx","subtract signed value plus c from another signed value"}, 
  {"coginit","re/start cog, id optional, to run propeller assembly or spin code"}, 
  {"clkset","set clock mode at run time"}, 
  {"wrbyte","write byte to main memory"}, 
  {"call","jump to address with intention to return to next instruction"}, 
  {"sumnc","sum signed value with another whose sign is inverted based on !c"}, 
  {"cmpsx","compare signed values plus c"}, 
  {"negnc","get value, or its additive inverse, based on !c"}, 
  {"rdword","read word of main memory"}, 
  {"neg","get negative of a number"}, 
  {"cogid","get current cog’s id"}, 
  {"sar","shift value arithmetically right by specified number of bits"}, 
  {"djnz","decrement value and jump to address if not zero"}, 
  {"jmpret","jump to address with intention to “return” to another address"}, 
  {"xor","bitwise xor values"}, 
  {"waitcnt","pause execution temporarily"}, 
  {"andn","bitwise and value with not of another"}, 
  {"rcr","rotate c right into value by specified number of bits"}, 
  {"cmp","compare unsigned values"}, 
  {"nop","no operation, elapse four clock cycles"}, 
  {"cmpx","compare unsigned values plus c"}, 
  {"lockret","return semaphore back for future “new semaphore” requests"}, 
  {"waitvid","pause execution until video generator can take pixel data"}, 
  {"cmps","compare signed values"}, 
  {"addsx","add signed values plus c"}, 
  {"tjz","test value and jump to address if zero"}, 
  {"muxnc","set discrete bits of value to state of !c"}, 
  {"subabs","subtract absolute value from another value"}, 
  {"sumnz","sum signed value with another whose sign is inverted based on !z"}, 
  {"maxs","limit maximum of signed value to another signed value"}, 
  {"tjnz","test value and jump to address if not zero"}, 
  {"negnz","get value, or its additive inverse, based on !z"}, 
  {"jmp","jump to address unconditionally"}, 
  {"mov","set register to a value"}, 
  {"muxc","set discrete bits of value to state of c"}, 
  {"rcl","rotate c left into value by specified number of bits"}, 
  {"muxnz","set discrete bits of value to state of !z"}, 
  {"sumc","sum signed value with another whose sign is inverted based on c"}, 
  {"rdbyte","read byte of main memory"}, 
  {"abs","get absolute value of a number"}, 
  {"mins","limit minimum of signed value to another signed value"}, 
  {"shr","shift value right by specified number of bits"}, 
  {"waitpeq","pause execution until i/o pin(s) match designated state(s)"}, 
  {"sumz","sum signed value with another whose sign is inverted based on z"}, 
  {"cogstop","start a cog by id"}, 
  {"subs","subtract signed values"}, 
  {"shl","shift value left by specified number of bits"}, 
  {"rdlong","read long of main memory"}, 
  {"movs","set register’s source field to a value"}, 
  {"add","add unsigned values"}, 
  {"negc","get value, or its additive inverse, based on c"}, 
  {"or","bitwise or values"}, 
  {"lockset","set semaphore to true and get its previous state"}, 
  {"hubop","perform a hub operation"}, 
  {"testn","bitwise and value with not of another to affect flags only"}, 
  {"subx","subtract unsigned value plus c from another unsigned value"}, 
  {"negz","get value, or its additive inverse, based on z"}, 
  {"adds","add signed values"}, 
  {"max","limit maximum of unsigned value to another unsigned value"}, 
  {"muxz","set discrete bits of value to state of z"}, 
  {"ror","rotate value right by specified number of bits"}, 
  {"addx","add unsigned values plus c"}, 
  {"movd","set register’s destination field to a value"}, 
  {"absneg","get the negative of a number’s absolute value"}, 
  {"min","limit minimum of unsigned value to another unsigned value"}, 
  {"movi","set register’s instruction field to a value"}, 
  {"test","bitwise and values to affect flags only"}, 
  {"rol","rotate value left by specified number of bits"}, 
  {"waitpne","pause execution until i/o pin(s) don’t match designated state(s)"}, 
  {"wrlong","write long to main memory"}, 
  {"lockclr","clear semaphore to false and get its previous state"}, 
  {"cmpsub","compare unsigned values, subtract second if it is lesser or equal"}, 
  {"and","bitwise and values"}, 
  {"wrword","write word to main memory"}, 
  {"locknew","check out new semaphore and get its id"}, 
  {"addabs","add absolute value to another value"}, 
  {"rev","reverse lsbs of value and zero-extend"}, 
  {"sub","subtract unsigned values"}, 
  {NULL, NULL}
};
// 0x995f170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_propeller_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_propeller_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_propeller(x,y) gperf_propeller_hash(x)
const unsigned int gperf_propeller_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_propeller = {
  .name = "propeller",
  .get = &gperf_propeller_get,
  .hash = &gperf_propeller_hash,
  .foreach = &gperf_propeller_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_propeller.get)("foo");
	printf ("%s\n", s);
}
#endif
