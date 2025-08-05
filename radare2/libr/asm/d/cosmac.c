// SDB-CGEN V2.0.2
// gcc -DMAIN=1 cosmac.c ; ./a.out > cosmac.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"sep","set program counter register"}, 
  {"sret","standard return to (R)"}, 
  {"ldn","load D with (R)"}, 
  {"dadd","decimal add"}, 
  {"dec","decrement"}, 
  {"plo","put low register"}, 
  {"rsxd","store register in memory"}, 
  {"irx","increment register X"}, 
  {"inc","increment"}, 
  {"ghi","get high register"}, 
  {"sex","set register as data pointer"}, 
  {"idl","idle or wait for interrupt or dma request"}, 
  {"dsm","decimal substract memory"}, 
  {"phi","put high register"}, 
  {"stpc","stop counter"}, 
  {NULL, NULL}
};
// 0x12b41170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_cosmac_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_cosmac_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_cosmac(x,y) gperf_cosmac_hash(x)
const unsigned int gperf_cosmac_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_cosmac = {
  .name = "cosmac",
  .get = &gperf_cosmac_get,
  .hash = &gperf_cosmac_hash,
  .foreach = &gperf_cosmac_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_cosmac.get)("foo");
	printf ("%s\n", s);
}
#endif
