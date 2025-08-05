// SDB-CGEN V2.0.2
// gcc -DMAIN=1 freebsd_x86_32.c ; ./a.out > freebsd_x86_32.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"0x80.224","gettid"}, 
  {"readlink","0x80,58,1,"}, 
  {"read","0x80,3,3,"}, 
  {"0x80.29","recvfrom"}, 
  {"0x80.28","sendmsg"}, 
  {"break","0x80,17,1,"}, 
  {"clone","0x80,120,4,"}, 
  {"reboot","0x80,55,1,"}, 
  {"0x80.90","mmap"}, 
  {"chroot","0x80,61,1,"}, 
  {"0x80.91","munmap"}, 
  {"profil","0x80,44,4,/*"}, 
  {"accept","0x80,30,4,"}, 
  {"0x80.21","mount"}, 
  {"exit_group","0x80,252,1,"}, 
  {"0x80.20","getpid"}, 
  {"0x80.23","setuid"}, 
  {"0x80.22","unmount"}, 
  {"0x80.24","getuid"}, 
  {"0x80.27","recvmsg"}, 
  {"rt_sigprocmask","0x80,175,3,"}, 
  {"0x80.26","ptrace"}, 
  {"unmount","0x80,22,0,"}, 
  {"sigreturn","0x80,119,1,"}, 
  {"mprotect","0x80,125,3,"}, 
  {"0x80.192","mmap2"}, 
  {"0x80.175","rt_sigprocmask"}, 
  {"chflags","0x80,34,2,"}, 
  {"fork","0x80,2,0,"}, 
  {"0x80.174","rt_sigaction"}, 
  {"fstat64","0x80,197,2,"}, 
  {"0x80.197","fstat64"}, 
  {"0x80.102","socketcall"}, 
  {"pipe","0x80,42,1,"}, 
  {"rt_sigaction","0x80,174,3,"}, 
  {"execve","0x80,59,2,"}, 
  {"ktrace","0x80,45,4,"}, 
  {"mmap2","0x80,192,6,"}, 
  {"exit","0x80,1,1,"}, 
  {"ptrace","0x80,26,4,"}, 
  {"0x80.49","getlogin"}, 
  {"0x80.48","signal"}, 
  {"getepid","0x80,43,0,"}, 
  {"0x80.47","getgid"}, 
  {"0x80.45","ktrace"}, 
  {"0x80.30","accept"}, 
  {"0x80.44","profil"}, 
  {"fchflags","0x80,35,2,"}, 
  {"0x80.31","getpeername"}, 
  {"0x80.43","getepid"}, 
  {"gettid","0x80,224,0,"}, 
  {"0x80.32","getsockname"}, 
  {"0x80.42","pipe"}, 
  {"0x80.33","access"}, 
  {"0x80.41","dup"}, 
  {"0x80.34","chflags"}, 
  {"0x80.35","fchflags"}, 
  {"sysctl","0x80,149,1,"}, 
  {"0x80.36","sync"}, 
  {"0x80.37","kill"}, 
  {"chdir","0x80,12,1,"}, 
  {"0x80.244","get_thread_area"}, 
  {"0x80.243","set_thread_area"}, 
  {"getgid","0x80,47,0,"}, 
  {"socketcall","0x80,102,2,"}, 
  {"unlink","0x80,10,1,"}, 
  {"kill","0x80,37,2,"}, 
  {"0x80.9","link"}, 
  {"fchdir","0x80,13,1,"}, 
  {"access","0x80,33,2,"}, 
  {"0x80.8","old_creat"}, 
  {"0x80.58","readlink"}, 
  {"0x80.59","execve"}, 
  {"setlogin","0x80,50,1,/*"}, 
  {"link","0x80,9,2,"}, 
  {"0x80.56","revoke"}, 
  {"0x80.3","read"}, 
  {"0x80.57","symlink"}, 
  {"0x80.2","fork"}, 
  {"0x80.54","ioctl"}, 
  {"0x80.1","exit"}, 
  {"0x80.55","reboot"}, 
  {"0x80.0","syscall"}, 
  {"0x80.7","wait4"}, 
  {"getlogin","0x80,49,0,/*"}, 
  {"0x80.53","sigaltstack"}, 
  {"0x80.6","close"}, 
  {"getsockname","0x80,32,3,"}, 
  {"sendmsg","0x80,28,4,"}, 
  {"wait4","0x80,7,3,"}, 
  {"0x80.50","setlogin"}, 
  {"0x80.5","open"}, 
  {"0x80.51","acct"}, 
  {"sigaltstack","0x80,53,2,/*"}, 
  {"0x80.4","write"}, 
  {"old_fsstat","0x80,18,1,"}, 
  {"mknod","0x80,14,1,"}, 
  {"set_thread_area","0x80,243,2,"}, 
  {"symlink","0x80,57,2,"}, 
  {"0x80.252","exit_group"}, 
  {"getpid","0x80,20,0,"}, 
  {"0x80.18","old_fsstat"}, 
  {"close","0x80,6,1,"}, 
  {"0x80.19","old_lseek"}, 
  {"syscall","0x80,0,4,sysnum"}, 
  {"umask","0x80,60,1,"}, 
  {"munmap","0x80,91,1,"}, 
  {"0x80.12","chdir"}, 
  {"0x80.13","fchdir"}, 
  {"0x80.10","unlink"}, 
  {"0x80.11","old_execve"}, 
  {"0x80.16","chown"}, 
  {"0x80.17","break"}, 
  {"0x80.14","mknod"}, 
  {"0x80.15","chmod"}, 
  {"0x80.119","sigreturn"}, 
  {"chmod","0x80,15,1,"}, 
  {"signal","0x80,48,2,"}, 
  {"acct","0x80,51,1,/*"}, 
  {"getuid","0x80,24,0,"}, 
  {"getpeername","0x80,31,3,"}, 
  {"0x80.120","clone"}, 
  {"sync","0x80,36,0,"}, 
  {"write","0x80,4,3,"}, 
  {"setuid","0x80,23,1,"}, 
  {"0x80.125","mprotect"}, 
  {"old_lseek","0x80,19,1,"}, 
  {"mmap","0x80,90,6,"}, 
  {"revoke","0x80,56,1,/*"}, 
  {"old_execve","0x80,11,3,"}, 
  {"mount","0x80,21,0,"}, 
  {"open","0x80,5,3,"}, 
  {"dup","0x80,41,2,"}, 
  {"0x80.61","chroot"}, 
  {"0x80.60","umask"}, 
  {"_","0x80"}, 
  {"recvfrom","0x80,29,4,"}, 
  {"chown","0x80,16,1,"}, 
  {"old_creat","0x80,8,2,"}, 
  {"get_thread_area","0x80,244,2,"}, 
  {"recvmsg","0x80,27,4,"}, 
  {"fcntl64","0x80,221,3,"}, 
  {"ioctl","0x80,54,3,"}, 
  {"0x80.221","fcntl64"}, 
  {"0x80.149","sysctl"}, 
  {NULL, NULL}
};
// 0x2c54d170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_freebsd_x86_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_freebsd_x86_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_freebsd_x86_32(x,y) gperf_freebsd_x86_32_hash(x)
const unsigned int gperf_freebsd_x86_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_freebsd_x86_32 = {
  .name = "freebsd-x86-32",
  .get = &gperf_freebsd_x86_32_get,
  .hash = &gperf_freebsd_x86_32_hash,
  .foreach = &gperf_freebsd_x86_32_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_freebsd_x86_32.get)("foo");
	printf ("%s\n", s);
}
#endif
