// SDB-CGEN V2.0.2
// gcc -DMAIN=1 types_linux.c ; ./a.out > types_linux.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"func.getsockopt.args","5"}, 
  {"func.__libc_init.noreturn","true"}, 
  {"atexit","func"}, 
  {"prctl","func"}, 
  {"func.__cxa_throw.ret","void"}, 
  {"func.waitpid.args","3"}, 
  {"__libc_start_main","func"}, 
  {"__stack_chk_fail","func"}, 
  {"func.__uClibc_main.arg.6","void *,stack_end"}, 
  {"func.getsockopt.arg.0","int,sockfd"}, 
  {"func.__uClibc_main.arg.5","func,rtld_fini"}, 
  {"func.getsockopt.arg.1","int,level"}, 
  {"func.__uClibc_main.arg.4","func,app_fini"}, 
  {"func.getsockopt.arg.2","int,optname"}, 
  {"func.__uClibc_main.arg.3","func,app_init"}, 
  {"func.getsockopt.arg.3","void *,optval"}, 
  {"func._exit.noreturn","true"}, 
  {"func.__uClibc_main.arg.2","char **,argv"}, 
  {"func.getsockopt.arg.4","socklen_t *,optlen"}, 
  {"func.__uClibc_main.arg.1","int,argc"}, 
  {"func.__uClibc_main.arg.0","func,main"}, 
  {"func.select.args","5"}, 
  {"wait","func"}, 
  {"waitid","func"}, 
  {"nanosleep","func"}, 
  {"func._exit.arg.0","int,status"}, 
  {"func.getsockname.ret","int"}, 
  {"func.__libc_init.ret","void"}, 
  {"func.__uClibc_main.args","7"}, 
  {"func.atexit.arg.0","func,function"}, 
  {"func.abort.noreturn","true"}, 
  {"getsockopt","func"}, 
  {"func.getsockopt.ret","int"}, 
  {"func.__uClibc_main.ret","int"}, 
  {"exit","func"}, 
  {"func.access.arg.1","int,mode"}, 
  {"func._Exit.args","1"}, 
  {"func.access.arg.0","const char *,path"}, 
  {"func.wait.ret","pid_t"}, 
  {"func.xalloc_die.ret","void"}, 
  {"_exit","func"}, 
  {"select","func"}, 
  {"__cxa_throw","func"}, 
  {"func.waitpid.arg.2","int,options"}, 
  {"func.waitpid.arg.1","int *,wstatus"}, 
  {"func.__uClibc_main.noreturn","true"}, 
  {"func.waitpid.arg.0","pid_t,pid"}, 
  {"func.exit.args","1"}, 
  {"func.abort.args","0"}, 
  {"__assert_fail","func"}, 
  {"waitpid","func"}, 
  {"access","func"}, 
  {"_Exit","func"}, 
  {"func.waitid.ret","int"}, 
  {"func.__cxa_throw.arg.2","void *,dest"}, 
  {"func.__libc_init.args","3"}, 
  {"func.__stack_chk_fail.args","0"}, 
  {"func.__stack_chk_fail.noreturn","true"}, 
  {"func.atexit.ret","int"}, 
  {"func.__cxa_throw.arg.0","void *,thrown_exception"}, 
  {"func.select.ret","int"}, 
  {"func.__cxa_throw.arg.1","struct std::type_info *,tinfo"}, 
  {"getsockname","func"}, 
  {"func.waitid.arg.3","int,options"}, 
  {"func.getsockname.arg.0","int,sockfd"}, 
  {"func.waitid.arg.2","siginfo_t *,infop"}, 
  {"func.__libc_start_main.noreturn","true"}, 
  {"func.getsockname.arg.1","struct sockaddr *,addr"}, 
  {"func.waitid.arg.1","id_t,id"}, 
  {"func.getsockname.arg.2","socklen_t *,addrlen"}, 
  {"func.waitid.arg.0","idtype_t,idtype"}, 
  {"func.nanosleep.args","2"}, 
  {"sigaction","func"}, 
  {"func.prctl.args","5"}, 
  {"func.setsockopt.arg.4","socklen_t,optlen"}, 
  {"__libc_init","func"}, 
  {"func.access.ret","int"}, 
  {"func.select.arg.1","fd_set *,readfds"}, 
  {"func.select.arg.0","int,nfds"}, 
  {"func.setsockopt.arg.0","int,sockfd"}, 
  {"func.select.arg.3","fd_set *,exceptfds"}, 
  {"func.setsockopt.arg.1","int,level"}, 
  {"func.setsockopt.ret","int"}, 
  {"func.select.arg.2","fd_set *,writefds"}, 
  {"func.setsockopt.arg.2","int,optname"}, 
  {"func.xalloc_die.noreturn","true"}, 
  {"func.setsockopt.arg.3","void *,optval"}, 
  {"func.select.arg.4","struct timeval *,timeout"}, 
  {"func.sigaction.arg.2","struct sigaction *,oldact"}, 
  {"func.exit.arg.0","int,status"}, 
  {"func.sigaction.arg.0","int,signum"}, 
  {"func.__assert_fail.arg.2","unsigned int,line"}, 
  {"func.sigaction.arg.1","const struct sigaction *,act"}, 
  {"func.__assert_fail.arg.3","const char *,function"}, 
  {"func.atexit.args","1"}, 
  {"func.__assert_fail.arg.0","const char *,assertion"}, 
  {"func._Exit.ret","void"}, 
  {"func.__assert_fail.arg.1","const char *,file"}, 
  {"func.__assert_fail.ret","void"}, 
  {"func.__libc_start_main.ret","int"}, 
  {"func.__stack_chk_fail.ret","void"}, 
  {"func.nanosleep.arg.0","const struct timespec *,req"}, 
  {"func.nanosleep.arg.1","struct timespec *,rem"}, 
  {"setsockopt","func"}, 
  {"func._exit.ret","void"}, 
  {"func.__libc_start_main.arg.6","void *,stack_end"}, 
  {"func._Exit.arg.0","int,status"}, 
  {"func.__libc_start_main.arg.4","func,fini"}, 
  {"func.__libc_start_main.arg.5","func,rtld_fini"}, 
  {"func.__libc_init_array.ret","void"}, 
  {"func.__libc_start_main.arg.2","char **,ubp_av"}, 
  {"func.__libc_start_main.arg.3","func,init"}, 
  {"func.__libc_start_main.arg.0","func,main"}, 
  {"func.__libc_start_main.arg.1","int,argc"}, 
  {"func.__assert_fail.args","4"}, 
  {"xalloc_die","func"}, 
  {"func.sigaction.ret","int"}, 
  {"__uClibc_main","func"}, 
  {"func.__libc_init_array.args","0"}, 
  {"func.exit.noreturn","true"}, 
  {"abort","func"}, 
  {"func.waitid.args","4"}, 
  {"func.sigaction.args","3"}, 
  {"func.nanosleep.ret","int"}, 
  {"func.setsockopt.args","5"}, 
  {"func.waitpid.ret","pid_t"}, 
  {"func.__libc_init.arg.0","int,argc"}, 
  {"func.getsockname.args","3"}, 
  {"func._Exit.noreturn","true"}, 
  {"func.__libc_init.arg.1","char **,argv"}, 
  {"func.__libc_init.arg.2","char **,envp"}, 
  {"func.wait.arg.0","int *,wstatus"}, 
  {"func.exit.ret","void"}, 
  {"func.abort.ret","void"}, 
  {"func.__libc_start_main.args","7"}, 
  {"func.xalloc_die.args","0"}, 
  {"func._exit.args","1"}, 
  {"func.access.args","2"}, 
  {"func.__cxa_throw.noreturn","true"}, 
  {"func.wait.args","1"}, 
  {"func.__assert_fail.noreturn","true"}, 
  {"__libc_init_array","func"}, 
  {"func.prctl.arg.0","int,option"}, 
  {"func.prctl.arg.1","unsigned long,v2"}, 
  {"func.prctl.arg.2","unsigned long,v3"}, 
  {"func.__cxa_throw.args","3"}, 
  {"func.prctl.arg.3","unsigned long,v4"}, 
  {"func.prctl.arg.4","unsigned long,v5"}, 
  {"func.prctl.ret","int"}, 
  {NULL, NULL}
};
// 0x16a61170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_types_linux_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_types_linux_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_types_linux(x,y) gperf_types_linux_hash(x)
const unsigned int gperf_types_linux_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_types_linux = {
  .name = "types-linux",
  .get = &gperf_types_linux_get,
  .hash = &gperf_types_linux_hash,
  .foreach = &gperf_types_linux_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_types_linux.get)("foo");
	printf ("%s\n", s);
}
#endif
