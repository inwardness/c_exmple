// SDB-CGEN V2.0.2
// gcc -DMAIN=1 avr.c ; ./a.out > avr.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"lat","load and toggle"}, 
  {"cln","clear negative flag"}, 
  {"tst","test for zero or minus"}, 
  {"brtc","branch if T flag is cleared"}, 
  {"pop","pop register from stack"}, 
  {"muls","multiply signed"}, 
  {"brlo","branch if lower (unsigned)"}, 
  {"clc","clear carry flag"}, 
  {"std","STD Z+q,Rr. store indirect with displacement"}, 
  {"brpl","branch if plus"}, 
  {"spm","store program memory"}, 
  {"st","ST -Z,Rr. store indirect and pre-decrement"}, 
  {"cpc","compare with carry"}, 
  {"jmp","jump"}, 
  {"brhc","branch if half carry flag is cleared"}, 
  {"sbrs","skip if bit in register is set"}, 
  {"adiw","add immediate to word"}, 
  {"clz","clear zero flag"}, 
  {"sbiw","subtract immediate from word"}, 
  {"sts","store direct to SRAM"}, 
  {"mul","multiply unsigned"}, 
  {"brts","branch if T flag is set"}, 
  {"cpi","compare with immediate"}, 
  {"sbis","skip if bit in I/O register is set"}, 
  {"mulsu","multiply signed with unsigned"}, 
  {"clr","clear register"}, 
  {"eijmp","extended indirect jump"}, 
  {"breq","branch if equal"}, 
  {"cls","clear signed flag"}, 
  {"inc","increment"}, 
  {"adc","add with carry"}, 
  {"clv","clear overflow flag"}, 
  {"add","add without carry"}, 
  {"clt","clear T flag"}, 
  {"brmi","branch if minus"}, 
  {"com","one's complement"}, 
  {"bld","bit load from T flag in SREG to a bit in register"}, 
  {"brid","branch if global interrupt is disabled"}, 
  {"call","long call to a subroutine"}, 
  {"lsr","logical shift right"}, 
  {"sbic","skip if bit in I/O register is cleared"}, 
  {"brie","branch if global interrupt is enabled"}, 
  {"eor","exclusive OR"}, 
  {"or","logical OR"}, 
  {"cp","compare"}, 
  {"asr","arithmetic shift right"}, 
  {"swap","swap nibbles"}, 
  {"cpse","compare, skip if equal"}, 
  {"icall","indirect call to subroutine"}, 
  {"push","push register on stack"}, 
  {"nop","no operation"}, 
  {"lsl","logical shift left"}, 
  {"ret","return from subroutine"}, 
  {"dec","decrement"}, 
  {"sleep","sleep mode"}, 
  {"brbs","branch if bit in SREG is set"}, 
  {"sbr","set bit(s) in register"}, 
  {"eicall","extended indirect call to subroutine"}, 
  {"ld","LD Rd,-Z. load indirect and pre-decrement"}, 
  {"brvc","branch if overflow flag is cleared"}, 
  {"bset","bit set in SREG"}, 
  {"fmuls","fractional multiply signed"}, 
  {"brbc","branch if bit in SREG is cleared"}, 
  {"ldi","LDI Rd,K. load immediate"}, 
  {"xch","exchange"}, 
  {"sbc","subtract with carry"}, 
  {"ldd","LDD Rd,Z+q. load indirect with displacement"}, 
  {"brne","branch if not equal"}, 
  {"lpm","LPM Rd,Z+. load program memory and post-increment"}, 
  {"cbi","clear bit in I/O register"}, 
  {"in","load an I/O location to register"}, 
  {"sbi","set bit in I/O register"}, 
  {"brvs","branch if overflow flag is set"}, 
  {"ses","set signed flag"}, 
  {"ser","set all bits in register"}, 
  {"wdr","watchdog reset"}, 
  {"brcs","branch if carry flag is set"}, 
  {"neg","two's complement"}, 
  {"sev","set overflow flag"}, 
  {"cbr","clear bit(s) in register"}, 
  {"set","set T flag"}, 
  {"sez","set zero flag"}, 
  {"and","logical AND"}, 
  {"mov","copy register"}, 
  {"lds","LDS Rd,K. load direct from SRAM"}, 
  {"sub","subtract without carry"}, 
  {"reti","return from interrupt"}, 
  {"sec","set carry flag"}, 
  {"ori","logical OR with immediate"}, 
  {"elpm","extended load programm memory"}, 
  {"brcc","branch if carry flag is cleared"}, 
  {"ijmp","indirect jump"}, 
  {"sbci","subtract immediate with carry"}, 
  {"break","break"}, 
  {"brsh","branch if same or higher (unsigned)"}, 
  {"brge","branch if greater or equal (signed)"}, 
  {"fmulsu","fractional multiply signed with unsigned"}, 
  {"sei","set global interrupt flag"}, 
  {"subi","subtract immediate"}, 
  {"bst","bit store from bit in register to T flag in SREG"}, 
  {"seh","set half carry flag"}, 
  {"lac","load and clear"}, 
  {"sen","set negative flag"}, 
  {"rjmp","relative jump"}, 
  {"ror","rotate right through carry"}, 
  {"rcall","relative call to subroutine"}, 
  {"fmul","fractional multiply unsigned"}, 
  {"movw","copy register word"}, 
  {"out","store register to an I/O location"}, 
  {"brhs","branch if half carry flag is set"}, 
  {"brlt","branch if less than (signed)"}, 
  {"rol","rotate left through carry"}, 
  {"sbrc","skip if bit in register is cleared"}, 
  {"clh","clear half carry flag"}, 
  {"las","load and set"}, 
  {"bclr","bit clear in SREG"}, 
  {"cli","clear global interrupt flag"}, 
  {"andi","logical AND with immediate"}, 
  {NULL, NULL}
};
// 0x1747160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_avr_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_avr_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_avr(x,y) gperf_avr_hash(x)
const unsigned int gperf_avr_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_avr = {
  .name = "avr",
  .get = &gperf_avr_get,
  .hash = &gperf_avr_hash,
  .foreach = &gperf_avr_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_avr.get)("foo");
	printf ("%s\n", s);
}
#endif
