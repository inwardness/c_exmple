// SDB-CGEN V2.0.2
// gcc -DMAIN=1 LH5801.c ; ./a.out > LH5801.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"adi","add immediate"}, 
  {"rie","reset interrupt enable"}, 
  {"spv","set pv"}, 
  {"ita","in to accumulator"}, 
  {"sta","store accumulator"}, 
  {"eai","exclusive or accumulator, immediate"}, 
  {"spu","set pu"}, 
  {"sjp","subroutine jump aka call"}, 
  {"atp","accumulator to port"}, 
  {"adr","add rreg"}, 
  {"att","accumulator to t (status register)"}, 
  {"sdp","set display"}, 
  {"bcc","conditional branch"}, 
  {"am1","accumulator to tm and 1"}, 
  {"ror","rotate right"}, 
  {"am0","accumulator to tm and 0"}, 
  {"drr","digit rotate right"}, 
  {"jmp","jump"}, 
  {"cdv","clear divider"}, 
  {"vcc","conditional vector subroutine jump"}, 
  {"bch","unconditional branch"}, 
  {"dec","decrement"}, 
  {"off","reset bf"}, 
  {"cpa","compare accumulator"}, 
  {"stx","store xreg"}, 
  {"sin","store and increment"}, 
  {"ldi","load immediate"}, 
  {"rol","rotate left"}, 
  {"vmj","vector subroutine jump, long format"}, 
  {"eor","exclusive or"}, 
  {"cpi","compare immediate"}, 
  {"lde","load and decrement"}, 
  {"rec","reset carry flag"}, 
  {"tin","transfer and increment"}, 
  {"sde","store and decrement"}, 
  {"sie","set interrupt enable"}, 
  {"lda","load accumulator"}, 
  {"bii","bit test immediate"}, 
  {"dca","decimal add"}, 
  {"lin","load and increment"}, 
  {"lop","loop"}, 
  {"rpv","reset pv"}, 
  {"ani","and immediate"}, 
  {"sbc","subtract with carry"}, 
  {"rpu","reset pu"}, 
  {"ldx","load xreg"}, 
  {"rti","return from interrupt"}, 
  {"sbi","subtract immediate"}, 
  {"drl","digit rotate left"}, 
  {"hlt","halt"}, 
  {"rtn","return from subroutine"}, 
  {"dcs","decimal subtract"}, 
  {"shr","shift right"}, 
  {"and","and accumulator"}, 
  {"aex","exchange accumulator"}, 
  {"tta","t status register to accumulator"}, 
  {"rdp","reset display"}, 
  {"bit","bit test"}, 
  {"shl","shift left"}, 
  {"ori","or immediate"}, 
  {"nop","no operation"}, 
  {"adc","add with carry"}, 
  {"pop","pop"}, 
  {"vej","vector subroutine jump, short format"}, 
  {"ora","or accumulator"}, 
  {"sec","set carry flag"}, 
  {"psh","push"}, 
  {"inc","increment"}, 
  {"cin","compare and increment"}, 
  {NULL, NULL}
};
// 0x31a43170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_LH5801_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_LH5801_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_LH5801(x,y) gperf_LH5801_hash(x)
const unsigned int gperf_LH5801_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_LH5801 = {
  .name = "LH5801",
  .get = &gperf_LH5801_get,
  .hash = &gperf_LH5801_hash,
  .foreach = &gperf_LH5801_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_LH5801.get)("foo");
	printf ("%s\n", s);
}
#endif
