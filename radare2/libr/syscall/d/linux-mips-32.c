// SDB-CGEN V2.0.2
// gcc -DMAIN=1 linux_mips_32.c ; ./a.out > linux_mips_32.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"utime","0xfa0,4030,2,"}, 
  {"0xfa0+224.4224","gettid"}, 
  {"0xfa0+125.4125","mprotect"}, 
  {"brk","0xfa0,4045,1,"}, 
  {"setuid","0xfa0,4023,1,i"}, 
  {"0xfa0.4033","access"}, 
  {"fork","0xfa0,4002,0,"}, 
  {"0xfa0.4030","utime"}, 
  {"0xfa0.4037","kill"}, 
  {"chdir","0xfa0,4012,1,z"}, 
  {"ptrace","0xfa0,4026,4,"}, 
  {"0xfa0+119.4119","sigreturn"}, 
  {"0xfa0.4023","setuid"}, 
  {"unlink","0xfa0,4010,1,z"}, 
  {"0xfa0.4020","getpid"}, 
  {"0xfa0.4026","ptrace"}, 
  {"0xfa0.4024","getuid"}, 
  {"gettid","0xfa0+224,4224,0,"}, 
  {"mmap2","0xfa0+192,4192,6,"}, 
  {"sysctl","0xfa0+149,4149,1,"}, 
  {"fstat64","0xfa0+197,4197,2,"}, 
  {"exit_group","0xfa0+252,4252,1,"}, 
  {"0xfa0+244.4244","get_thread_area"}, 
  {"waitpid","0xfa0,4007,3,ipx"}, 
  {"syscall","0xfa0,4000,1,i"}, 
  {"_","4000"}, 
  {"0xfa0+149.4149","sysctl"}, 
  {"0xfa0+221.4221","fcntl64"}, 
  {"0xfa0+252.4252","exit_group"}, 
  {"execve","0xfa0,4011,3,zzz"}, 
  {"set_thread_area","0xfa0+243,4243,2,"}, 
  {"0xfa0+175.4175","rt_sigprocmask"}, 
  {"mmap","0xfa0,4090,6,"}, 
  {"ioctl","0xfa0,4054,3,"}, 
  {"0xfa0.4011","execve"}, 
  {"access","0xfa0,4033,2,"}, 
  {"lchown","0xfa0,4016,1,zii"}, 
  {"0xfa0.4010","unlink"}, 
  {"0xfa0.4013","time"}, 
  {"0xfa0.4012","chdir"}, 
  {"fcntl64","0xfa0+221,4221,3,"}, 
  {"0xfa0.4015","chmod"}, 
  {"socketcall","0xfa0+102,4102,2,"}, 
  {"0xfa0.4014","mknod"}, 
  {"mprotect","0xfa0+125,4125,3,"}, 
  {"munmap","0xfa0,4091,1,"}, 
  {"0xfa0.4016","lchown"}, 
  {"0xfa0+197.4197","fstat64"}, 
  {"close","0xfa0,4006,1,i"}, 
  {"0xfa0.4000","syscall"}, 
  {"open","0xfa0,4005,3,zxx"}, 
  {"0xfa0.4001","exit"}, 
  {"kill","0xfa0,4037,2,"}, 
  {"0xfa0.4002","fork"}, 
  {"0xfa0.4003","read"}, 
  {"getpid","0xfa0,4020,0,"}, 
  {"getuid","0xfa0,4024,0,"}, 
  {"dup","0xfa0,4041,2,"}, 
  {"0xfa0.4004","write"}, 
  {"creat","0xfa0,4008,2,zx"}, 
  {"0xfa0.4005","open"}, 
  {"clone","0xfa0+120,4120,4,"}, 
  {"0xfa0.4006","close"}, 
  {"0xfa0+192.4192","mmap2"}, 
  {"0xfa0.4007","waitpid"}, 
  {"0xfa0.4008","creat"}, 
  {"0xfa0.4009","link"}, 
  {"write","0xfa0,4004,3,izi"}, 
  {"0xfa0.4054","ioctl"}, 
  {"rt_sigaction","0xfa0+174,4174,3,"}, 
  {"0xfa0+120.4120","clone"}, 
  {"0xfa0+174.4174","rt_sigaction"}, 
  {"rt_sigprocmask","0xfa0+175,4175,3,"}, 
  {"read","0xfa0,4003,3,ipi"}, 
  {"link","0xfa0,4009,2,zz"}, 
  {"mknod","0xfa0,4014,1,zxi"}, 
  {"0xfa0.4045","brk"}, 
  {"exit","0xfa0,4001,1,i"}, 
  {"sigreturn","0xfa0+119,4119,1,"}, 
  {"0xfa0+243.4243","set_thread_area"}, 
  {"0xfa0.4041","dup"}, 
  {"signal","0xfa0,4048,2,"}, 
  {"0xfa0+102.4102","socketcall"}, 
  {"time","0xfa0,4013,1,p"}, 
  {"0xfa0.4048","signal"}, 
  {"chmod","0xfa0,4015,1,zx"}, 
  {"0xfa0.4091","munmap"}, 
  {"get_thread_area","0xfa0+244,4244,2,"}, 
  {"0xfa0.4090","mmap"}, 
  {NULL, NULL}
};
// 0x8ca9170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_linux_mips_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_linux_mips_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_linux_mips_32(x,y) gperf_linux_mips_32_hash(x)
const unsigned int gperf_linux_mips_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_linux_mips_32 = {
  .name = "linux-mips-32",
  .get = &gperf_linux_mips_32_get,
  .hash = &gperf_linux_mips_32_hash,
  .foreach = &gperf_linux_mips_32_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_linux_mips_32.get)("foo");
	printf ("%s\n", s);
}
#endif
