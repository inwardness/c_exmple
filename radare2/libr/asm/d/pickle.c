// SDB-CGEN V2.0.2
// gcc -DMAIN=1 pickle.c ; ./a.out > pickle.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"unicode","Push a Python Unicode string object."}, 
  {"binint","Push a four-byte signed integer."}, 
  {"appends","Extend a list by a slice of stack objects."}, 
  {"next_buffer","Push an out-of-band buffer object."}, 
  {"tuple1","Build a one-tuple out of the topmost item on the stack."}, 
  {"persid","Push an object identified by a persistent ID."}, 
  {"list","Build a list out of the topmost stack slice, after markobject."}, 
  {"tuple3","Build a three-tuple out of the top three items on the stack."}, 
  {"tuple2","Build a two-tuple out of the top two items on the stack."}, 
  {"pop_mark","Pop all the stack objects at and above the topmost markobject."}, 
  {"global","Push a global object (module.attr) on the stack."}, 
  {"get","Read an object from the memo and push it on the stack."}, 
  {"none","Push None on the stack."}, 
  {"put","Store the stack top into the memo.  The stack is not popped."}, 
  {"long_binput","Store the stack top into the memo.  The stack is not popped."}, 
  {"empty_set","Push an empty set."}, 
  {"newtrue","Push True onto the stack."}, 
  {"binstring","Push a Python string object."}, 
  {"newobj","Build an object instance."}, 
  {"int","Push an integer or bool."}, 
  {"reduce","Push an object built from a callable and an argument tuple."}, 
  {"dict","Build a dict out of the topmost stack slice, after markobject."}, 
  {"stop","Stop the unpickling machine."}, 
  {"binint2","Push a two-byte unsigned integer."}, 
  {"empty_dict","Push an empty dict."}, 
  {"append","Append an object to a list."}, 
  {"binint1","Push a one-byte unsigned integer."}, 
  {"empty_tuple","Push an empty tuple."}, 
  {"float","Newline-terminated decimal float literal."}, 
  {"binunicode","Push a Python Unicode string object."}, 
  {"long4","Long integer using found-byte length."}, 
  {"obj","Build a class instance."}, 
  {"setitems","Add an arbitrary number of key+value pairs to an existing dict."}, 
  {"memoize","Store the stack top into the memo.  The stack is not popped."}, 
  {"binbytes","Push a Python bytes object."}, 
  {"long1","Long integer using one-byte length."}, 
  {"dup","Push the top stack item onto the stack again, duplicating it."}, 
  {"empty_list","Push an empty list."}, 
  {"binunicode8","Push a Python Unicode string object."}, 
  {"build","Finish building an object, via __setstate__ or dict update."}, 
  {"ext4","Extension code."}, 
  {"binfloat","Float stored in binary form, with 8 bytes of data."}, 
  {"tuple","Build a tuple out of the topmost stack slice, after markobject."}, 
  {"setitem","Add a key+value pair to an existing dict."}, 
  {"ext1","Extension code."}, 
  {"ext2","Extension code."}, 
  {"stack_global","Push a global object (module.attr) on the stack."}, 
  {"binget","Read an object from the memo and push it on the stack."}, 
  {"inst","Build a class instance."}, 
  {"frame","Indicate the beginning of a new frame."}, 
  {"short_binbytes","Push a Python bytes object."}, 
  {"frozenset","Build a frozenset out of the topmost slice, after markobject."}, 
  {"proto","Protocol version indicator."}, 
  {"long_binget","Read an object from the memo and push it on the stack."}, 
  {"short_binunicode","Push a Python Unicode string object."}, 
  {"short_binstring","Push a Python string object."}, 
  {"mark","Push markobject onto the stack."}, 
  {"binbytes8","Push a Python bytes object."}, 
  {"newobj_ex","Build an object instance."}, 
  {"binput","Store the stack top into the memo.  The stack is not popped."}, 
  {"long","Push a long integer."}, 
  {"bytearray8","Push a Python bytearray object."}, 
  {"string","Push a Python string object."}, 
  {"binpersid","Push an object identified by a persistent ID."}, 
  {"newfalse","Push False onto the stack."}, 
  {"additems","Add an arbitrary number of items to an existing set."}, 
  {"pop","Discard the top stack item, shrinking the stack by one item."}, 
  {"readonly_buffer","Make an out-of-band buffer object read-only."}, 
  {NULL, NULL}
};
// 0x2509b170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_pickle_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_pickle_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_pickle(x,y) gperf_pickle_hash(x)
const unsigned int gperf_pickle_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_pickle = {
  .name = "pickle",
  .get = &gperf_pickle_get,
  .hash = &gperf_pickle_hash,
  .foreach = &gperf_pickle_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_pickle.get)("foo");
	printf ("%s\n", s);
}
#endif
