// SDB-CGEN V2.0.2
// gcc -DMAIN=1 tms320.c ; ./a.out > tms320.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"SQA","square and add"}, 
  {"MAC","multiply and accumulate"}, 
  {"OR","bitwise or"}, 
  {"CALL","function call"}, 
  {"SFT","shift (left or right depending on sign of shift count)"}, 
  {"RET","return"}, 
  {"XTR","extract"}, 
  {"EXP","exponent"}, 
  {"MAX","maximum"}, 
  {"SUB","subtraction"}, 
  {"ROL","rotate left"}, 
  {"SET","assign the value to 1"}, 
  {"POP","pop from top of the stack"}, 
  {"SQS","square and subtract"}, 
  {"TST","test bit"}, 
  {"SQR","square"}, 
  {"ABS","absolute value"}, 
  {"MAS","multiply and subtract"}, 
  {"XOR","bitwise exclusive-or (xor)"}, 
  {"MAR","modify auxiliary register content"}, 
  {"XPA","expand"}, 
  {"MOV","move data"}, 
  {"B","branch"}, 
  {"ADD","addition"}, 
  {"CNT","count"}, 
  {"CLR","assign the value to 0"}, 
  {"MIN","minimum"}, 
  {"CMP","compare"}, 
  {"PSH","push to top of the stack"}, 
  {"MPY","multiply"}, 
  {"NEG","negate (2s complement)"}, 
  {"SAT","saturate"}, 
  {"RPT","repeat"}, 
  {"NOT","bitwise complement (1s complement)"}, 
  {"AND","bitwise and"}, 
  {"SWAP","swap register contents"}, 
  {"ROR","rotate right"}, 
  {NULL, NULL}
};
// 0x1c51c170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_tms320_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_tms320_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_tms320(x,y) gperf_tms320_hash(x)
const unsigned int gperf_tms320_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_tms320 = {
  .name = "tms320",
  .get = &gperf_tms320_get,
  .hash = &gperf_tms320_hash,
  .foreach = &gperf_tms320_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_tms320.get)("foo");
	printf ("%s\n", s);
}
#endif
