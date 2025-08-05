// SDB-CGEN V2.0.2
// gcc -DMAIN=1 sm5xx.c ; ./a.out > sm5xx.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"adx","add immediate value to ACC, skip next on carry"}, 
  {"sds","set display enable"}, 
  {"lb","load BM/BL with 4-bit immediate value (partial)"}, 
  {"atf","output ACC to F"}, 
  {"rtn1","return 1"}, 
  {"inis","reset 1/100s counter (10ms)"}, 
  {"rtn0","return 0"}, 
  {"trs","indirect subroutine call"}, 
  {"idiv","reset divider and 1s counter"}, 
  {"dta","transfer 1/100s counter to ACC"}, 
  {"keta","input KE to ACC"}, 
  {"rtns","return from subroutine"}, 
  {"lblx","load BL with 4 bit immediate value"}, 
  {"rds","reset display enable"}, 
  {"lbl","load BL"}, 
  {"tg","skip next if gamma flag is set, reset it after"}, 
  {"nop","do nothing"}, 
  {"rtn","return"}, 
  {"lbmx","load BM with 4 bit immediate value"}, 
  {NULL, NULL}
};
// 0x23922170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_sm5xx_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_sm5xx_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_sm5xx(x,y) gperf_sm5xx_hash(x)
const unsigned int gperf_sm5xx_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_sm5xx = {
  .name = "sm5xx",
  .get = &gperf_sm5xx_get,
  .hash = &gperf_sm5xx_hash,
  .foreach = &gperf_sm5xx_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_sm5xx.get)("foo");
	printf ("%s\n", s);
}
#endif
