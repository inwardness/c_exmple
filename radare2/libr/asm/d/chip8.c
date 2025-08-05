// SDB-CGEN V2.0.2
// gcc -DMAIN=1 chip8.c ; ./a.out > chip8.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"subn","subtract dest from src, store result in dest"}, 
  {"shr","shift right by one"}, 
  {"drw","draw sprite using given coordinates"}, 
  {"jp","jump"}, 
  {"scr","scroll right"}, 
  {"high","enter high-resolution mode"}, 
  {"skp","skip next instruction if specified key is pressed"}, 
  {"call","call subroutine"}, 
  {"shl","shift left by one"}, 
  {"rnd","set dest to (random number & src)"}, 
  {"ret","return from subroutine"}, 
  {"exit","stop interpreter"}, 
  {"ld","copy data from src to dest"}, 
  {"scd","scroll down"}, 
  {"and","logical and"}, 
  {"add","add src and dest, store result in dest"}, 
  {"sne","skip next instruction if not equal"}, 
  {"or","logical inclusive or"}, 
  {"xor","logical exclusive or"}, 
  {"se","skip next instruction if equal"}, 
  {"low","enter low-resolution mode"}, 
  {"sub","subtract src from dest, store result in dest"}, 
  {"sknp","skip next instruction if specified key is not pressed"}, 
  {"scl","scroll left"}, 
  {"cls","clear display"}, 
  {NULL, NULL}
};
// 0x1df45170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_chip8_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_chip8_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_chip8(x,y) gperf_chip8_hash(x)
const unsigned int gperf_chip8_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_chip8 = {
  .name = "chip8",
  .get = &gperf_chip8_get,
  .hash = &gperf_chip8_hash,
  .foreach = &gperf_chip8_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_chip8.get)("foo");
	printf ("%s\n", s);
}
#endif
