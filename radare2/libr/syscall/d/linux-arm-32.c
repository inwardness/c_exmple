// SDB-CGEN V2.0.2
// gcc -DMAIN=1 linux_arm_32.c ; ./a.out > linux_arm_32.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"utime","0x900000,30,2,"}, 
  {"0x900000.221","fcntl64"}, 
  {"0x900000.120","clone"}, 
  {"0x900000.224","gettid"}, 
  {"0x900000.125","mprotect"}, 
  {"brk","0x900000,45,1,"}, 
  {"setuid","0x900000,23,1,i"}, 
  {"fork","0x900000,2,0,"}, 
  {"chdir","0x900000,12,1,z"}, 
  {"0x900000.13","time"}, 
  {"ptrace","0x900000,26,4,"}, 
  {"0x900000.12","chdir"}, 
  {"0x900000.11","execve"}, 
  {"0x900000.10","unlink"}, 
  {"unlink","0x900000,10,1,z"}, 
  {"0x900000.16","lchown"}, 
  {"0x900000.15","chmod"}, 
  {"0x900000.14","mknod"}, 
  {"gettid","0x900000,224,0,"}, 
  {"vfork","0x900000,1071,0,"}, 
  {"mmap2","0x900000,192,6,"}, 
  {"0x900000.8","creat"}, 
  {"sysctl","0x900000,149,1,"}, 
  {"0x900000.9","link"}, 
  {"0x900000.192","mmap2"}, 
  {"fstat64","0x900000,197,2,"}, 
  {"0x900000.1071","vfork"}, 
  {"0x900000.2","fork"}, 
  {"0x900000.197","fstat64"}, 
  {"exit_group","0x900000,252,1,"}, 
  {"0x900000.3","read"}, 
  {"0x900000.174","rt_sigaction"}, 
  {"0x900000.175","rt_sigprocmask"}, 
  {"0x900000.1","exit"}, 
  {"waitpid","0x900000,7,3,ipx"}, 
  {"0x900000.252","exit_group"}, 
  {"0x900000.6","close"}, 
  {"_","0x900000"}, 
  {"0x900000.7","waitpid"}, 
  {"0x900000.4","write"}, 
  {"0x900000.5","open"}, 
  {"0x900000.54","ioctl"}, 
  {"execve","0x900000,11,3,zzz"}, 
  {"set_thread_area","0x900000,243,2,"}, 
  {"0x900000.48","signal"}, 
  {"mmap","0x900000,90,6,"}, 
  {"ioctl","0x900000,54,3,"}, 
  {"access","0x900000,33,2,"}, 
  {"0x900000.45","brk"}, 
  {"lchown","0x900000,16,1,zii"}, 
  {"fcntl64","0x900000,221,3,"}, 
  {"socketcall","0x900000,102,2,"}, 
  {"0x900000.41","dup"}, 
  {"mprotect","0x900000,125,3,"}, 
  {"munmap","0x900000,91,1,"}, 
  {"close","0x900000,6,1,i"}, 
  {"0x900000.30","utime"}, 
  {"0x900000.33","access"}, 
  {"0x900000.244","get_thread_area"}, 
  {"open","0x900000,5,3,zxx"}, 
  {"kill","0x900000,37,2,"}, 
  {"getpid","0x900000,20,0,"}, 
  {"0x900000.37","kill"}, 
  {"getuid","0x900000,24,0,"}, 
  {"dup","0x900000,41,2,"}, 
  {"creat","0x900000,8,2,zx"}, 
  {"clone","0x900000,120,4,"}, 
  {"0x900000.102","socketcall"}, 
  {"0x900000.243","set_thread_area"}, 
  {"0x900000.20","getpid"}, 
  {"write","0x900000,4,3,izi"}, 
  {"0x900000.119","sigreturn"}, 
  {"0x900000.23","setuid"}, 
  {"0x900000.24","getuid"}, 
  {"rt_sigaction","0x900000,174,3,"}, 
  {"0x900000.91","munmap"}, 
  {"0x900000.90","mmap"}, 
  {"0x900000.26","ptrace"}, 
  {"rt_sigprocmask","0x900000,175,3,"}, 
  {"read","0x900000,3,3,ipi"}, 
  {"link","0x900000,9,2,zz"}, 
  {"mknod","0x900000,14,1,zxi"}, 
  {"0x900000.149","sysctl"}, 
  {"exit","0x900000,1,1,i"}, 
  {"sigreturn","0x900000,119,1,"}, 
  {"signal","0x900000,48,2,"}, 
  {"time","0x900000,13,1,p"}, 
  {"chmod","0x900000,15,1,zx"}, 
  {"get_thread_area","0x900000,244,2,"}, 
  {NULL, NULL}
};
// 0x8ade170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_linux_arm_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_linux_arm_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_linux_arm_32(x,y) gperf_linux_arm_32_hash(x)
const unsigned int gperf_linux_arm_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_linux_arm_32 = {
  .name = "linux-arm-32",
  .get = &gperf_linux_arm_32_get,
  .hash = &gperf_linux_arm_32_hash,
  .foreach = &gperf_linux_arm_32_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_linux_arm_32.get)("foo");
	printf ("%s\n", s);
}
#endif
