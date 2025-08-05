// SDB-CGEN V2.0.2
// gcc -DMAIN=1 ebcdic37.c ; ./a.out > ebcdic37.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"0x26","&"}, 
  {"0x25","%"}, 
  {"0x24","$"}, 
  {"0x23","#"}, 
  {"0x89","i"}, 
  {"0x22","\""}, 
  {"0x88","h"}, 
  {"0x21","!"}, 
  {"0xe8","Y"}, 
  {"0x5a","!"}, 
  {"0xe9","Z"}, 
  {"0x5b","$"}, 
  {"0x5c","*"}, 
  {"0x5d","*"}, 
  {"0x5e",";"}, 
  {"0xe0","\\"}, 
  {"0x48","ç"}, 
  {"0xe2","S"}, 
  {"0xe3","T"}, 
  {"0xe4","U"}, 
  {"0xe5","V"}, 
  {"0xe6","W"}, 
  {"0xe7","X"}, 
  {"0x40"," "}, 
  {"0x94","m"}, 
  {"0x95","n"}, 
  {"0x96","o"}, 
  {"0x97","p"}, 
  {"0x91","j"}, 
  {"0xa8","y"}, 
  {"0x92","k"}, 
  {"0xa9","z"}, 
  {"0x93","l"}, 
  {"0xa4","u"}, 
  {"0xa5","v"}, 
  {"0xa6","w"}, 
  {"0x98","q"}, 
  {"0xa7","x"}, 
  {"0x99","r"}, 
  {"0xa1","~"}, 
  {"0xf9","9"}, 
  {"0xa2","s"}, 
  {"0xf8","8"}, 
  {"0xa3","t"}, 
  {"0xf3","3"}, 
  {"0xf2","2"}, 
  {"0xf1","1"}, 
  {"0xf0","0"}, 
  {"0xf7","7"}, 
  {"0xf6","6"}, 
  {"0xf5","5"}, 
  {"0xf4","4"}, 
  {"0x50","&"}, 
  {"0x51","é"}, 
  {"0x8a","«"}, 
  {"0x8b","»"}, 
  {"0x6f","?"}, 
  {"0x6e",">"}, 
  {"0x6d","_"}, 
  {"0xb4","©"}, 
  {"0x15","\n"}, 
  {"0xd9","R"}, 
  {"0xd8","Q"}, 
  {"0x4c","<"}, 
  {"0x4b","."}, 
  {"0x4e","+"}, 
  {"0xaf","®"}, 
  {"0x4d","("}, 
  {"0x4f","|"}, 
  {"0x61","/"}, 
  {"0xd1","J"}, 
  {"0x60","-"}, 
  {"0xd0","}"}, 
  {"0xd3","L"}, 
  {"0x7b","#"}, 
  {"0xd2","K"}, 
  {"0x7c","@"}, 
  {"0xd5","N"}, 
  {"0xd4","M"}, 
  {"0x7a",":"}, 
  {"0xd7","P"}, 
  {"0x7f","\""}, 
  {"0xd6","O"}, 
  {"0x7d","'"}, 
  {"0xc8","H"}, 
  {"0x7e","="}, 
  {"0xc9","I"}, 
  {"0xc6","F"}, 
  {"0x85","e"}, 
  {"0xc7","G"}, 
  {"0xc4","D"}, 
  {"0x84","d"}, 
  {"0xc5","E"}, 
  {"0x87","g"}, 
  {"0xc2","B"}, 
  {"0x86","f"}, 
  {"0x0d","\r"}, 
  {"0xc3","C"}, 
  {"0x81","a"}, 
  {"0xc0","{"}, 
  {"0xc1","A"}, 
  {"0x83","c"}, 
  {"0x82","b"}, 
  {NULL, NULL}
};
// 0x2829d170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_ebcdic37_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_ebcdic37_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_ebcdic37(x,y) gperf_ebcdic37_hash(x)
const unsigned int gperf_ebcdic37_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_ebcdic37 = {
  .name = "ebcdic37",
  .get = &gperf_ebcdic37_get,
  .hash = &gperf_ebcdic37_hash,
  .foreach = &gperf_ebcdic37_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_ebcdic37.get)("foo");
	printf ("%s\n", s);
}
#endif
