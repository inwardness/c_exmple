// SDB-CGEN V2.0.2
// gcc -DMAIN=1 types_android.c ; ./a.out > types_android.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"enum.androidLogPriority.UNKNOWN","0x0"}, 
  {"enum.androidLogPriority.0x8","SILENT"}, 
  {"func.exit.arg.0","int,status"}, 
  {"func.__android_log_write.ret","int"}, 
  {"func.exit.args","1"}, 
  {"func.__android_log_write.arg.2","const char *,fmt"}, 
  {"func.__android_log_write.arg.1","const char *,tag"}, 
  {"func.__android_log_write.arg.0","androidLogPriority,prio"}, 
  {"func.abort.ret","void"}, 
  {"func.__android_log_print.ret","int"}, 
  {"func.abort.noreturn","true"}, 
  {"func.exit.ret","void"}, 
  {"xalloc_die","func"}, 
  {"androidLogPriority","enum"}, 
  {"func.__android_log_assert.args","3"}, 
  {"__android_log_write","func"}, 
  {"func.abort.args","0"}, 
  {"func.__stack_chk_fail.noreturn","true"}, 
  {"enum.androidLogPriority.DEBUG","0x3"}, 
  {"enum.androidLogPriority","UNKNOWN,DEFAULT,VERBOSE,DEBUG,INFO,WARN,ERROR,FATAL,SILENT"}, 
  {"enum.androidLogPriority.FATAL","0x7"}, 
  {"func.xalloc_die.ret","void"}, 
  {"func.__android_log_print.args","3"}, 
  {"__android_log_print","func"}, 
  {"enum.androidLogPriority.ERROR","0x6"}, 
  {"enum.androidLogPriority.INFO","0x4"}, 
  {"__android_log_assert","func"}, 
  {"enum.androidLogPriority.SILENT","0x8"}, 
  {"__android_log_vprint","func"}, 
  {"func.__android_log_vprint.arg.1","const char *,tag"}, 
  {"func.__android_log_vprint.arg.0","androidLogPriority,prio"}, 
  {"func.__android_log_vprint.arg.2","const char *,fmt"}, 
  {"func.exit.noreturn","true"}, 
  {"exit","func"}, 
  {"func.__android_log_assert.arg.0","const char *,cond"}, 
  {"func.__stack_chk_fail.ret","void"}, 
  {"func.__android_log_assert.arg.1","const char *,tag"}, 
  {"func.__android_log_write.args","3"}, 
  {"func.__android_log_assert.arg.2","const char *,fmt"}, 
  {"__stack_chk_fail","func"}, 
  {"func.__android_log_assert.ret","void"}, 
  {"enum.androidLogPriority.DEFAULT","0x1"}, 
  {"func.__android_log_print.arg.2","const char *,fmt"}, 
  {"func.__stack_chk_fail.args","0"}, 
  {"func.__android_log_vprint.ret","int"}, 
  {"enum.androidLogPriority.VERBOSE","0x2"}, 
  {"func.__android_log_print.arg.1","const char *,tag"}, 
  {"func.xalloc_die.noreturn","true"}, 
  {"func.__android_log_print.arg.0","androidLogPriority,prio"}, 
  {"func.__android_log_vprint.args","3"}, 
  {"enum.androidLogPriority.0x3","DEBUG"}, 
  {"enum.androidLogPriority.0x2","VERBOSE"}, 
  {"enum.androidLogPriority.0x1","DEFAULT"}, 
  {"enum.androidLogPriority.0x0","UNKNOWN"}, 
  {"enum.androidLogPriority.0x7","FATAL"}, 
  {"enum.androidLogPriority.0x6","ERROR"}, 
  {"abort","func"}, 
  {"enum.androidLogPriority.0x5","WARN"}, 
  {"enum.androidLogPriority.0x4","INFO"}, 
  {"func.xalloc_die.args","0"}, 
  {"enum.androidLogPriority.WARN","0x5"}, 
  {NULL, NULL}
};
// 0xc51d170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_types_android_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_types_android_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_types_android(x,y) gperf_types_android_hash(x)
const unsigned int gperf_types_android_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_types_android = {
  .name = "types-android",
  .get = &gperf_types_android_get,
  .hash = &gperf_types_android_hash,
  .foreach = &gperf_types_android_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_types_android.get)("foo");
	printf ("%s\n", s);
}
#endif
