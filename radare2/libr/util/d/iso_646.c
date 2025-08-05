// SDB-CGEN V2.0.2
// gcc -DMAIN=1 iso_646.c ; ./a.out > iso_646.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"0x34","4"}, 
  {"0x72","r"}, 
  {"0x35","5"}, 
  {"0x32","2"}, 
  {"0x73","s"}, 
  {"0x70","p"}, 
  {"0x33","3"}, 
  {"0x71","q"}, 
  {"0x30","0"}, 
  {"0x31","1"}, 
  {"0x76","v"}, 
  {"0x77","w"}, 
  {"0x74","t"}, 
  {"0x75","u"}, 
  {"0x0E","SO"}, 
  {"0x0D","CR"}, 
  {"0x4A","J"}, 
  {"0x0F","SI"}, 
  {"0x0A","LF"}, 
  {"0x4C","L"}, 
  {"0x4B","K"}, 
  {"0x0C","FF"}, 
  {"0x4E","N"}, 
  {"0x0B","VT"}, 
  {"0x4D","M"}, 
  {"0x4F","O"}, 
  {"0x49","I"}, 
  {"0x48","H"}, 
  {"0x09","HT"}, 
  {"0x08","BS"}, 
  {"0x05","ENQ"}, 
  {"0x04","EOT"}, 
  {"0x07","BEL"}, 
  {"0x41","A"}, 
  {"0x06","ACK"}, 
  {"0x01","SOH"}, 
  {"0x43","C"}, 
  {"0x00","NUL"}, 
  {"0x42","B"}, 
  {"0x03","ETX"}, 
  {"0x45","E"}, 
  {"0x02","STX"}, 
  {"0x44","D"}, 
  {"0x47","G"}, 
  {"0x46","F"}, 
  {"0x3F","?"}, 
  {"0x3D","="}, 
  {"0x3E",">"}, 
  {"0x3B",";"}, 
  {"0x3C","<"}, 
  {"0x7A","z"}, 
  {"0x3A",":"}, 
  {"0x7F","DEL"}, 
  {"0x58","X"}, 
  {"0x59","Y"}, 
  {"0x18","CAN"}, 
  {"0x19","EM"}, 
  {"0x14","DC4"}, 
  {"0x15","NAK"}, 
  {"0x16","SYN"}, 
  {"0x50","P"}, 
  {"0x17","ETB"}, 
  {"0x51","Q"}, 
  {"0x10","DLE"}, 
  {"0x52","R"}, 
  {"0x11","DC1"}, 
  {"0x53","S"}, 
  {"0x12","DC2"}, 
  {"0x54","T"}, 
  {"0x13","DC3"}, 
  {"0x55","U"}, 
  {"0x56","V"}, 
  {"0x57","W"}, 
  {"0x2F","/"}, 
  {"0x2E","."}, 
  {"0x2D","-"}, 
  {"0x6C","l"}, 
  {"0x2C",","}, 
  {"0x6B","k"}, 
  {"0x2B","+"}, 
  {"0x6A","j"}, 
  {"0x2A","*"}, 
  {"0x6F","o"}, 
  {"0x6E","n"}, 
  {"0x6D","m"}, 
  {"0x69","i"}, 
  {"0x68","h"}, 
  {"0x29",")"}, 
  {"0x28","("}, 
  {"0x27","'"}, 
  {"0x26","&"}, 
  {"0x25","%"}, 
  {"0x63","c"}, 
  {"0x62","b"}, 
  {"0x22","\""}, 
  {"0x61","a"}, 
  {"0x21","!"}, 
  {"0x20","SP"}, 
  {"0x67","g"}, 
  {"0x66","f"}, 
  {"0x65","e"}, 
  {"0x64","d"}, 
  {"0x1D","GS"}, 
  {"0x1E","RS"}, 
  {"0x1F","US"}, 
  {"0x5A","Z"}, 
  {"0x1A","SUB"}, 
  {"0x1B","ESC"}, 
  {"0x1C","FS"}, 
  {"0x5F","_"}, 
  {"0x78","x"}, 
  {"0x38","8"}, 
  {"0x79","y"}, 
  {"0x39","9"}, 
  {"0x36","6"}, 
  {"0x37","7"}, 
  {NULL, NULL}
};
// 0xddaa170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_iso_646_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_iso_646_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_iso_646(x,y) gperf_iso_646_hash(x)
const unsigned int gperf_iso_646_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_iso_646 = {
  .name = "iso_646",
  .get = &gperf_iso_646_get,
  .hash = &gperf_iso_646_hash,
  .foreach = &gperf_iso_646_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_iso_646.get)("foo");
	printf ("%s\n", s);
}
#endif
