// SDB-CGEN V2.0.2
// gcc -DMAIN=1 pic18c.c ; ./a.out > pic18c.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"addwf","add wreg and f"}, 
  {"decfsz","decrement f, skip if 0"}, 
  {"decf","decrement f"}, 
  {"subwfb","subtract wreg from f with borrow"}, 
  {"movlb","move literal to bsr<3:0>"}, 
  {"xorlw","exclusive or literal with wreg"}, 
  {"subfwb","subtract f from wreg with borrow"}, 
  {"cpfsgt","compare f with wreg, skip >"}, 
  {"subwfi","subtract wreg from f"}, 
  {"swapf","swap nibbles in f"}, 
  {"tstfsz","test f, skip if 0"}, 
  {"sublw","subtract wreg from literal"}, 
  {"call","call subroutine"}, 
  {"push","push top of return stack (tos)"}, 
  {"tblrd*","table read with pre-increment"}, 
  {"btfss","bit test f, skip if set"}, 
  {"iorwf","inclusive or wreg with f"}, 
  {"retfie","return from interrupt enable"}, 
  {"incfsz","increment f, skip if not 0"}, 
  {"daw","decimal adjust wreg"}, 
  {"bra","branch unconditionally"}, 
  {"tblwt*-","table write with post-decrement"}, 
  {"clrwdt","clear watchdog timer"}, 
  {"tblwt*+","table write with post-increment"}, 
  {"iorlw","inclusive or literal with wreg"}, 
  {"movff","move fs (source) to fd (destination)"}, 
  {"pop","pop top of return stack (tos)"}, 
  {"nop","no operation"}, 
  {"cpfseq","compare f with wreg, skip ="}, 
  {"rrncf","rotate right f (no carry)"}, 
  {"bov","branch if overflow"}, 
  {"conf","complement f"}, 
  {"addlw","add literal and wreg"}, 
  {"bnov","branch if not overflow"}, 
  {"sleep","go into standby mode"}, 
  {"bsf","bit set f"}, 
  {"addwfc","add wreg and carry bit to f"}, 
  {"bc","branch if carry"}, 
  {"tblwt*","table write"}, 
  {"xorwf","exclusive or wreg with f"}, 
  {"rrcf","rotate right f through carry"}, 
  {"bcf","bit clear f"}, 
  {"bn","branch if negative"}, 
  {"dcfsnz","decrement f, skip if not 0"}, 
  {"tblrd*+","table read with post-increment"}, 
  {"negf","negate f"}, 
  {"andlw","and literal with wreg"}, 
  {"movwf","move wreg to f"}, 
  {"mulwf","multiply wreg with f"}, 
  {"tblrd*-","table read with post-decrement"}, 
  {"bnn","branch if not negative"}, 
  {"andwf","and wreg with f"}, 
  {"goto","go to address"}, 
  {"return","return from subroutine"}, 
  {"reset","software device reset"}, 
  {"bnc","branch if not carry"}, 
  {"movlw","move literal to wreg"}, 
  {"mullw","multiply literal with wreg"}, 
  {"setf","set f"}, 
  {"movf","move f"}, 
  {"retlw","return with literal in wreg"}, 
  {"rcall","relative call"}, 
  {"incf","increment f, skip if 0"}, 
  {"lfsr","move literal (12-bit) to fsrx"}, 
  {"cpfslt","compare f with wreg, skip <"}, 
  {"bz","branch if zero"}, 
  {"tblwt+*","table write with pre-increment"}, 
  {"bnz","branch if not zero"}, 
  {"rlcf","rotate left f through carry"}, 
  {"btg","bit toggle f"}, 
  {"clrf","clear f"}, 
  {"rlncf","rotate left f (no carry)"}, 
  {"btfsc","bit test f, skip if clear"}, 
  {NULL, NULL}
};
// 0x7672170
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_pic18c_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_pic18c_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_pic18c(x,y) gperf_pic18c_hash(x)
const unsigned int gperf_pic18c_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_pic18c = {
  .name = "pic18c",
  .get = &gperf_pic18c_get,
  .hash = &gperf_pic18c_hash,
  .foreach = &gperf_pic18c_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_pic18c.get)("foo");
	printf ("%s\n", s);
}
#endif
