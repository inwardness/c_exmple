// SDB-CGEN V2.0.2
// gcc -DMAIN=1 i4004.c ; ./a.out > i4004.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"cma","complement accumulator"}, 
  {"jms","jump to subroutine"}, 
  {"bbl","branch back and load"}, 
  {"ldm","load immediate"}, 
  {"rar","rotate right"}, 
  {"adm","add main memory"}, 
  {"xch","exchange register with accumulator"}, 
  {"isz","increment and skip"}, 
  {"ld","load content of register to accumulator"}, 
  {"rdm","read main memory"}, 
  {"inc","increment register"}, 
  {"rd3","read accumulator status char 3"}, 
  {"tcc","transfer carry and clear"}, 
  {"wr0","write accumulator to status char 0"}, 
  {"rd2","read accumulator status char 2"}, 
  {"wr1","write accumulator to status char 1"}, 
  {"src","send register control"}, 
  {"rd1","read accumulator status char 1"}, 
  {"wr2","write accumulator to status char 2"}, 
  {"rd0","read accumulator status char 0"}, 
  {"wr3","write accumulator to status char 3"}, 
  {"wmp","write accumulator to ram port"}, 
  {"iac","increment accumulator"}, 
  {"jun","jump uncoditional"}, 
  {"kbp","keybord process"}, 
  {"stc","set carry"}, 
  {"jin","jump indirect"}, 
  {"ral","rotate left"}, 
  {"fin","fetch indirect"}, 
  {"sbm","subtract main memory"}, 
  {"rdr","read rom port"}, 
  {"clb","clear both(accumulator and carry)"}, 
  {"fim","fetch immediate"}, 
  {"clc","clear carry"}, 
  {"jcn","jump conditional"}, 
  {"dcl","designate command line"}, 
  {"wrm","write accumulator to main memory"}, 
  {"sub","subtract content of register to accumulator with borrow"}, 
  {"nop","no operation"}, 
  {"daa","decimal adjust accumulator"}, 
  {"tcs","transfer carry subtract"}, 
  {"add","add content of register to accumulator with carry"}, 
  {"dac","decrement accumulator"}, 
  {"wrr","write accumulator to rom port"}, 
  {"cmc","complement carry"}, 
  {"wpm","write accumulator to ram port"}, 
  {NULL, NULL}
};
// 0xe7c7170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_i4004_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_i4004_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_i4004(x,y) gperf_i4004_hash(x)
const unsigned int gperf_i4004_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_i4004 = {
  .name = "i4004",
  .get = &gperf_i4004_get,
  .hash = &gperf_i4004_hash,
  .foreach = &gperf_i4004_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_i4004.get)("foo");
	printf ("%s\n", s);
}
#endif
