// SDB-CGEN V2.0.2
// gcc -DMAIN=1 bpf.c ; ./a.out > bpf.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"jeq","jump if equal"}, 
  {"ldxh","load half at address in register"}, 
  {"neg","integer negate (32-bit)"}, 
  {"be64","big-endian integer swap (64-bit)"}, 
  {"le64","little-endian integer swap (64-bit)"}, 
  {"jge","jump if greater-or-equal than (unsigned)"}, 
  {"sth","store half"}, 
  {"ldxdw","load doubleword at address in register"}, 
  {"xor","bitwise XOR (32-bit)"}, 
  {"or64","bitwise OR (64-bit)"}, 
  {"le32","little-endian integer swap (32-bit)"}, 
  {"mul64","multiply dst by src (64-bit)"}, 
  {"sub64","subtract src from dst (64-bit)"}, 
  {"stw","store word"}, 
  {"and64","bitwise AND (64-bit)"}, 
  {"jmp","jump"}, 
  {"rsh","right shift (32-bit)"}, 
  {"le16","little-endian integer swap (16-bit)"}, 
  {"jgt","jump if greater than (unsigned)"}, 
  {"mod64","integer modulo (64-bit)"}, 
  {"call","enter subroutine"}, 
  {"xor64","bitwise XOR (64-bit)"}, 
  {"ldh","load half from address"}, 
  {"div","integer divide (32-bit)"}, 
  {"rsh64","right shift (64-bit)"}, 
  {"mod","integer modulo (32-bit)"}, 
  {"mov64","move (64-bit)"}, 
  {"lsh64","left shift (64-bit)"}, 
  {"sub","subtract src from dst (32-bit)"}, 
  {"ldb","load byte"}, 
  {"lsh","left shift (32-bit)"}, 
  {"be16","big-endian integer swap (16-bit)"}, 
  {"lddw","move 64-bit immediate to register"}, 
  {"ldxw","load word at address in register"}, 
  {"jle","jump if less-or-equal than (unsigned)"}, 
  {"mov","move (32-bit)"}, 
  {"stxw","store word from register"}, 
  {"or","bitwise OR (32-bit)"}, 
  {"be32","big-endian integer swap (32-bit)"}, 
  {"stdw","store doubleword"}, 
  {"ldw","load word from address"}, 
  {"jslt","jump if less than (signed)"}, 
  {"stxh","store half from register"}, 
  {"jsgt","jump if greater than (signed)"}, 
  {"neg64","integer negate (64-bit)"}, 
  {"exit","exit subroutine"}, 
  {"and","bitwise AND (32-bit)"}, 
  {"mul","multiply dst by src (32-bit)"}, 
  {"stxb","store byte from register"}, 
  {"add64","add src to dst (64-bit)"}, 
  {"stxdw","store doubleword from register"}, 
  {"div64","integer divide (64-bit)"}, 
  {"jlt","jump if less than (unsigned)"}, 
  {"ldxb","load byte at address in register"}, 
  {"add","add src to dst (32-bit)"}, 
  {"jne","jump if not equal"}, 
  {"jsge","jump if greater-or-equal than (signed)"}, 
  {"jsle","jump if less-or-equal than (signed)"}, 
  {"stb","store byte"}, 
  {NULL, NULL}
};
// 0x12c47160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_bpf_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_bpf_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_bpf(x,y) gperf_bpf_hash(x)
const unsigned int gperf_bpf_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_bpf = {
  .name = "bpf",
  .get = &gperf_bpf_get,
  .hash = &gperf_bpf_hash,
  .foreach = &gperf_bpf_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_bpf.get)("foo");
	printf ("%s\n", s);
}
#endif
