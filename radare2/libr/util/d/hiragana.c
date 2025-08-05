// SDB-CGEN V2.0.2
// gcc -DMAIN=1 hiragana.c ; ./a.out > hiragana.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"0xe381bc","bo"}, 
  {"0xe3828e","wa"}, 
  {"0xe381bd","po"}, 
  {"0xe3828d","ro"}, 
  {"0xe381be","ma"}, 
  {"0xe381bf","mi"}, 
  {"0xe3828f","WA"}, 
  {"0xe381b0","ba"}, 
  {"0xe381b1","pa"}, 
  {"0xe381b2","hi"}, 
  {"0xe3819c","ze"}, 
  {"0xe381b3","bi"}, 
  {"0xe3819b","se"}, 
  {"0xe381b4","pi"}, 
  {"0xe3819a","zu"}, 
  {"0xe381b5","hu"}, 
  {"0xe381b6","bu"}, 
  {"0xe381b7","pu"}, 
  {"0xe3819f","ta"}, 
  {"0xe381b8","he"}, 
  {"0xe3819e","zo"}, 
  {"0xe381b9","be"}, 
  {"0xe3819d","so"}, 
  {"0xe38289","ra"}, 
  {"0xe38288","YO"}, 
  {"0xe38290","wi"}, 
  {"0xe38291","we"}, 
  {"0xe38292","wo"}, 
  {"0xe38293","n"}, 
  {"0xe38281","me"}, 
  {"0xe38280","mu"}, 
  {"0xe381a3","tu"}, 
  {"0xe38283","ya"}, 
  {"0xe381a2","di"}, 
  {"0xe38282","mo"}, 
  {"0xe3818b","ka"}, 
  {"0xe381a1","ti"}, 
  {"0xe38285","yu"}, 
  {"0xe3818c","ga"}, 
  {"0xe381a0","da"}, 
  {"0xe38284","YA"}, 
  {"0xe381a7","de"}, 
  {"0xe38199","su"}, 
  {"0xe38287","yo"}, 
  {"0xe3818a","O"}, 
  {"0xe381a6","te"}, 
  {"0xe38198","zi"}, 
  {"0xe38286","YU"}, 
  {"0xe3818f","ku"}, 
  {"0xe381a5","tu"}, 
  {"0xe381a4","du"}, 
  {"0xe3818d","ki"}, 
  {"0xe3818e","gi"}, 
  {"0xe381a9","do"}, 
  {"0xe38193","ko"}, 
  {"0xe381a8","to"}, 
  {"0xe38192","ge"}, 
  {"0xe38191","ke"}, 
  {"0xe38190","gu"}, 
  {"0xe38197","si"}, 
  {"0xe38196","za"}, 
  {"0xe38195","sa"}, 
  {"0xe38194","go"}, 
  {"0xe38188","E"}, 
  {"0xe38189","o"}, 
  {"0xe381ac","nu"}, 
  {"0xe381ab","ni"}, 
  {"0xe381aa","na"}, 
  {"0xe38182","A"}, 
  {"0xe38183","i"}, 
  {"0xe381af","ha"}, 
  {"0xe38181","a"}, 
  {"0xe381ae","no"}, 
  {"0xe38186","U"}, 
  {"0xe3828a","ri"}, 
  {"0xe381ad","ne"}, 
  {"0xe38187","e"}, 
  {"0xe381ba","pe"}, 
  {"0xe38184","I"}, 
  {"0xe3828c","re"}, 
  {"0xe381bb","ho"}, 
  {"0xe38185","u"}, 
  {"0xe3828b","ru"}, 
  {NULL, NULL}
};
// 0x32d6e170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_hiragana_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_hiragana_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_hiragana(x,y) gperf_hiragana_hash(x)
const unsigned int gperf_hiragana_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_hiragana = {
  .name = "hiragana",
  .get = &gperf_hiragana_get,
  .hash = &gperf_hiragana_hash,
  .foreach = &gperf_hiragana_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_hiragana.get)("foo");
	printf ("%s\n", s);
}
#endif
