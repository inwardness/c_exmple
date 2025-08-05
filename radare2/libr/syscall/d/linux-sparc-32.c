// SDB-CGEN V2.0.2
// gcc -DMAIN=1 linux_sparc_32.c ; ./a.out > linux_sparc_32.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"0x10.10","unlink"}, 
  {"0x10.102","socketcall"}, 
  {"unlink","0x10,10,1,z"}, 
  {"rt_sigaction","0x10,174,3,"}, 
  {"0x10.30","utime"}, 
  {"0x10.33","access"}, 
  {"mprotect","0x10,125,3,"}, 
  {"0x10.120","clone"}, 
  {"creat","0x10,8,2,zx"}, 
  {"mmap","0x10,90,6,"}, 
  {"sigreturn","0x10,119,1,"}, 
  {"0x10.37","kill"}, 
  {"close","0x10,6,1,i"}, 
  {"0x10.125","mprotect"}, 
  {"signal","0x10,48,2,"}, 
  {"access","0x10,33,2,"}, 
  {"clone","0x10,120,4,"}, 
  {"_","0x10"}, 
  {"open","0x10,5,3,zxx"}, 
  {"brk","0x10,45,1,"}, 
  {"0x10.192","mmap2"}, 
  {"waitpid","0x10,7,3,ipx"}, 
  {"chdir","0x10,12,1,z"}, 
  {"sysctl","0x10,149,1,"}, 
  {"0x10.45","brk"}, 
  {"munmap","0x10,91,1,"}, 
  {"dup","0x10,41,2,"}, 
  {"write","0x10,4,3,izi"}, 
  {"socketcall","0x10,102,2,"}, 
  {"0x10.41","dup"}, 
  {"ptrace","0x10,26,4,"}, 
  {"0x10.174","rt_sigaction"}, 
  {"0x10.175","rt_sigprocmask"}, 
  {"ioctl","0x10,54,3,"}, 
  {"0x10.2","fork"}, 
  {"getpid","0x10,20,0,"}, 
  {"0x10.3","read"}, 
  {"0x10.48","signal"}, 
  {"0x10.1","exit"}, 
  {"0x10.6","close"}, 
  {"0x10.7","waitpid"}, 
  {"0x10.4","write"}, 
  {"utime","0x10,30,2,"}, 
  {"0x10.5","open"}, 
  {"rt_sigprocmask","0x10,175,3,"}, 
  {"0x10.20","getpid"}, 
  {"0x10.91","munmap"}, 
  {"fork","0x10,2,0,"}, 
  {"0x10.8","creat"}, 
  {"0x10.90","mmap"}, 
  {"link","0x10,9,2,zz"}, 
  {"0x10.9","link"}, 
  {"0x10.23","setuid"}, 
  {"read","0x10,3,3,ipi"}, 
  {"0x10.24","getuid"}, 
  {"exit","0x10,1,1,i"}, 
  {"0x10.119","sigreturn"}, 
  {"0x10.26","ptrace"}, 
  {"0x10.54","ioctl"}, 
  {"execve","0x10,11,3,zzz"}, 
  {"kill","0x10,37,2,"}, 
  {"setuid","0x10,23,1,i"}, 
  {"mmap2","0x10,192,6,"}, 
  {"getuid","0x10,24,0,"}, 
  {"0x10.12","chdir"}, 
  {"0x10.11","execve"}, 
  {"0x10.149","sysctl"}, 
  {NULL, NULL}
};
// 0x338ac170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_linux_sparc_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_linux_sparc_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_linux_sparc_32(x,y) gperf_linux_sparc_32_hash(x)
const unsigned int gperf_linux_sparc_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_linux_sparc_32 = {
  .name = "linux-sparc-32",
  .get = &gperf_linux_sparc_32_get,
  .hash = &gperf_linux_sparc_32_hash,
  .foreach = &gperf_linux_sparc_32_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_linux_sparc_32.get)("foo");
	printf ("%s\n", s);
}
#endif
