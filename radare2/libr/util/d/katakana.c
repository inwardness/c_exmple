// SDB-CGEN V2.0.2
// gcc -DMAIN=1 katakana.c ; ./a.out > katakana.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"0xe38399","be"}, 
  {"0xe382b3","ko"}, 
  {"0xe3838a","na"}, 
  {"0xe38398","he"}, 
  {"0xe382b2","ge"}, 
  {"0xe3838b","ni"}, 
  {"0xe382b1","ke"}, 
  {"0xe3838c","nu"}, 
  {"0xe382b0","gu"}, 
  {"0xe3838d","ne"}, 
  {"0xe382b7","si"}, 
  {"0xe3838e","no"}, 
  {"0xe382b6","za"}, 
  {"0xe3838f","ha"}, 
  {"0xe382b5","sa"}, 
  {"0xe382b4","go"}, 
  {"0xe38391","pa"}, 
  {"0xe38390","ba"}, 
  {"0xe382aa","O"}, 
  {"0xe38393","bi"}, 
  {"0xe382b9","su"}, 
  {"0xe382ab","ka"}, 
  {"0xe38392","hi"}, 
  {"0xe382b8","zi"}, 
  {"0xe382ac","ga"}, 
  {"0xe38395","hu"}, 
  {"0xe382ad","ki"}, 
  {"0xe38394","pi"}, 
  {"0xe382ae","gi"}, 
  {"0xe38397","pu"}, 
  {"0xe382af","ku"}, 
  {"0xe38396","bu"}, 
  {"0xe382a1","a"}, 
  {"0xe382a2","A"}, 
  {"0xe382a3","i"}, 
  {"0xe382a4","I"}, 
  {"0xe382a5","u"}, 
  {"0xe382a6","U"}, 
  {"0xe382a7","e"}, 
  {"0xe382a8","E"}, 
  {"0xe382a9","o"}, 
  {"0xe38388","to"}, 
  {"0xe38389","do"}, 
  {"0xe383a1","me"}, 
  {"0xe383a0","mu"}, 
  {"0xe38380","da"}, 
  {"0xe383a3","ya"}, 
  {"0xe3829b","\""}, 
  {"0xe38381","ti"}, 
  {"0xe383a2","mo"}, 
  {"0xe3829c","."}, 
  {"0xe38382","di"}, 
  {"0xe383a5","yu"}, 
  {"0xe38383","tu"}, 
  {"0xe383a4","YA"}, 
  {"0xe38384","du"}, 
  {"0xe383a7","yo"}, 
  {"0xe38385","tu"}, 
  {"0xe383a6","YU"}, 
  {"0xe383b2","wo"}, 
  {"0xe38386","te"}, 
  {"0xe383a9","ra"}, 
  {"0xe383b3","n"}, 
  {"0xe38387","de"}, 
  {"0xe383a8","YO"}, 
  {"0xe383b0","wi"}, 
  {"0xe383b1","we"}, 
  {"0xe383b6","ke"}, 
  {"0xe383b4","vu"}, 
  {"0xe383b5","ka"}, 
  {"0xe3839a","pe"}, 
  {"0xe3839c","bo"}, 
  {"0xe3839b","ho"}, 
  {"0xe3839e","ma"}, 
  {"0xe3839d","po"}, 
  {"0xe3839f","mi"}, 
  {"0xe383aa","ri"}, 
  {"0xe382bc","ze"}, 
  {"0xe382bb","se"}, 
  {"0xe383ac","re"}, 
  {"0xe382ba","zu"}, 
  {"0xe383ab","ru"}, 
  {"0xe383ae","wa"}, 
  {"0xe383ad","ro"}, 
  {"0xe382bf","ta"}, 
  {"0xe382be","zo"}, 
  {"0xe383af","WA"}, 
  {"0xe382bd","so"}, 
  {NULL, NULL}
};
// 0x2b22e170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_katakana_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_katakana_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_katakana(x,y) gperf_katakana_hash(x)
const unsigned int gperf_katakana_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_katakana = {
  .name = "katakana",
  .get = &gperf_katakana_get,
  .hash = &gperf_katakana_hash,
  .foreach = &gperf_katakana_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_katakana.get)("foo");
	printf ("%s\n", s);
}
#endif
