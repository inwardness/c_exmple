// SDB-CGEN V2.0.2
// gcc -DMAIN=1 tricore.c ; ./a.out > tricore.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"jnz","jump if not equal to zero"}, 
  {"st.d","store double word"}, 
  {"mov.aa","move address from address register"}, 
  {"cmov","conditional move"}, 
  {"jeq.a","jump if equal address"}, 
  {"st.a","store word from address register"}, 
  {"ld.b","load byte"}, 
  {"mul","multiply signed"}, 
  {"st.b","store byte"}, 
  {"ld.a","load word to address register"}, 
  {"jnz.t","jump if not equal to zero bit"}, 
  {"add.h","add packed half word"}, 
  {"ld.d","load double world"}, 
  {"xor","bitwise xor"}, 
  {"call","call indirect"}, 
  {"ld.h","load half word"}, 
  {"st.t","store bit"}, 
  {"add.b","add packed byte"}, 
  {"ld.hu","load half word unsigned"}, 
  {"muls.u","multiply unsigned with saturation"}, 
  {"st.w","store word"}, 
  {"mtcr","move to core register"}, 
  {"jlt.u","jump if less than unsigned"}, 
  {"add.a","add address"}, 
  {"st.q","store half word signed fraction"}, 
  {"jge.u","jump if greater than or equal unsigned"}, 
  {"movh","move high"}, 
  {"ld.q","load half word signed fraction"}, 
  {"jltz","jump if less than zero"}, 
  {"ld.w","load word"}, 
  {"addih.a","add immediate high to address"}, 
  {"jgtz","jump if greater than zero"}, 
  {"lea","load effective address"}, 
  {"jnz.a","jump if not equal to zero address"}, 
  {"and","bitwise and"}, 
  {"ld.bu","load byte unsigned"}, 
  {"jgez","jump if greater than equal to zero"}, 
  {"adds.u","add unsigned with saturation"}, 
  {"jz.t","jump if zero bit"}, 
  {"subc","subtract with carry"}, 
  {"mfcr","move from core register"}, 
  {"isync","synchronize instructions"}, 
  {"add","add"}, 
  {"st.da","store double world from address registers"}, 
  {"addc","add with carry"}, 
  {"jz.a","jump if zero address"}, 
  {"sub.h","subtract packed half word"}, 
  {"muls","multiply signed with saturation"}, 
  {"jal","jump and link absolute"}, 
  {"addi","add immediate"}, 
  {"jeq","jump if equal"}, 
  {"subs","subtract signed with saturation"}, 
  {"sub.b","subtract packed byte"}, 
  {"sub.a","subtract address"}, 
  {"adds","add values with signed saturation"}, 
  {"subx","subtract extended"}, 
  {"jge","jump if greater than or equal"}, 
  {"mov.u","move unsigned"}, 
  {"sh","shift"}, 
  {"addx","add extended"}, 
  {"ret","return from call"}, 
  {"jli","jump and link indirect"}, 
  {"jl","jump and link"}, 
  {"jne.a","jump if not equal address"}, 
  {"ji","jump indirect"}, 
  {"mov","move"}, 
  {"ldlcx","load lower context"}, 
  {"addih","add immediate high"}, 
  {"mov.d","move address to data register"}, 
  {"sha","arithmetic shift"}, 
  {"addsc.at","add bit scaled index to address"}, 
  {"ja","jump unsigned absolute"}, 
  {"mov.a","move value to address register"}, 
  {"jlt","jump if less than"}, 
  {"ld.da","load double word to address register"}, 
  {"subs.u","subtract unsigned with saturation"}, 
  {"subs.hu","subtract packed half word unsigned with saturation"}, 
  {"sub","subtract"}, 
  {"jne","jump if not equal"}, 
  {"jned","jump if not equal and decrement"}, 
  {"jz","jump if zero"}, 
  {"adds.hu","add unsigned packed half word with saturation"}, 
  {"movh.a","move high to address"}, 
  {"subs.h","subtract packed half word with saturation"}, 
  {"jlez","jump if less than or equal to zero"}, 
  {"jnei","jump if not equal and increment"}, 
  {"or","bitwise or"}, 
  {"addsc.a","add scaled index to address"}, 
  {"j","jump unconditional"}, 
  {"nop","nop operation"}, 
  {"st.h","store half word"}, 
  {NULL, NULL}
};
// 0x1e7ea170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_tricore_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_tricore_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_tricore(x,y) gperf_tricore_hash(x)
const unsigned int gperf_tricore_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_tricore = {
  .name = "tricore",
  .get = &gperf_tricore_get,
  .hash = &gperf_tricore_hash,
  .foreach = &gperf_tricore_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_tricore.get)("foo");
	printf ("%s\n", s);
}
#endif
