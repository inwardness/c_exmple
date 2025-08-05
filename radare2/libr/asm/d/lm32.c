// SDB-CGEN V2.0.2
// gcc -DMAIN=1 lm32.c ; ./a.out > lm32.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"cmpnei","compare not equal immediate"}, 
  {"xnori","xnor immediate"}, 
  {"shgotoff","store half word got offset"}, 
  {"calli","call immediate"}, 
  {"srui","shift right unsigned immediate"}, 
  {"mul","mulitply"}, 
  {"cmpne","compare not equal"}, 
  {"divu","unsigned divide"}, 
  {"sbgotoff","store byte got offset"}, 
  {"xor","xor"}, 
  {"swgotoff","store word got offset"}, 
  {"call","call"}, 
  {"bge","branch greater or equal"}, 
  {"mvui","move unsigned immediate"}, 
  {"ori","or immediate"}, 
  {"lhgotoff","load half word got offset"}, 
  {"mv","move"}, 
  {"bg","branch greater"}, 
  {"be","branch equal"}, 
  {"cmpei","compare equal immediate"}, 
  {"user","user defined instruction"}, 
  {"and","and"}, 
  {"wcsr","write control or status register"}, 
  {"orhii","or high immediate"}, 
  {"nori","nor immediate"}, 
  {"bgu","branch greater unsigned"}, 
  {"bne","branch not equal"}, 
  {"sw","store word"}, 
  {"cmpgu","compare greater than unsigned"}, 
  {"lbu","load byte unsigned"}, 
  {"mvhi","move high immediate"}, 
  {"sr","shift right"}, 
  {"andhii","and high immediate"}, 
  {"addgotoff","add got offset"}, 
  {"bi","branch immediate"}, 
  {"bret","return from breakpoint"}, 
  {"break","breakpoint"}, 
  {"lhugotoff","load half word got offset unsigned"}, 
  {"add","add"}, 
  {"sli","shift left immediate"}, 
  {"xori","xor immediate"}, 
  {"cmpgi","compare greater than immediate"}, 
  {"lhu","load halfword unsigned"}, 
  {"lbugprel","load byte unsigned gp relative"}, 
  {"bgeu","branch greater or equal unsigned"}, 
  {"addi","add immediate"}, 
  {"cmpge","compare greater or equal"}, 
  {"sb","store byte"}, 
  {"scall","system call"}, 
  {"lwgprel","load word gp relative"}, 
  {"lhgprel","load halfword gp relative"}, 
  {"lhugprel","load halfword unsigned gp relative"}, 
  {"sl","shift left"}, 
  {"xnor","xnor"}, 
  {"lbgprel","load byte gp relative"}, 
  {"sh","store halfword"}, 
  {"lbgotoff","load byte got offset"}, 
  {"swgprel","store word gp relative"}, 
  {"cmpg","compare greater than"}, 
  {"sri","shift right immediate"}, 
  {"rcsr","read control or status register"}, 
  {"andi","and immediate"}, 
  {"cmpe","compare equal"}, 
  {"cmpgeui","compare greater or equal unsigned immediate"}, 
  {"cmpgeu","compare greater or equal unsigned"}, 
  {"sru","shift right unsigned"}, 
  {"orhigotoffi","or high got offset immediate"}, 
  {"lh","load halfword"}, 
  {"sbgprel","store byte gp relative"}, 
  {"ret","return"}, 
  {"lwgotrel","load word got relative"}, 
  {"muli","multiply immediate"}, 
  {"cmpgei","compare greater or equal immediate"}, 
  {"lbugotoff","load byte got offset unsigned"}, 
  {"sexth","sign extend half-word"}, 
  {"lb","load byte"}, 
  {"cmpgui","compare greater than unsigned immediate"}, 
  {"sextb","sign extend byte"}, 
  {"sub","subtract"}, 
  {"modu","unsigned modulus"}, 
  {"mvi","move immediate"}, 
  {"shgprel","store halfword gp relative"}, 
  {"b","branch"}, 
  {"eret","return from exception"}, 
  {"mva","move address"}, 
  {"lw","load word"}, 
  {"not","not"}, 
  {"or","or"}, 
  {"nop","nop"}, 
  {"nor","nor"}, 
  {"lwgotoff","load word got offset"}, 
  {NULL, NULL}
};
// 0x30e6c160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_lm32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_lm32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_lm32(x,y) gperf_lm32_hash(x)
const unsigned int gperf_lm32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_lm32 = {
  .name = "lm32",
  .get = &gperf_lm32_get,
  .hash = &gperf_lm32_hash,
  .foreach = &gperf_lm32_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_lm32.get)("foo");
	printf ("%s\n", s);
}
#endif
