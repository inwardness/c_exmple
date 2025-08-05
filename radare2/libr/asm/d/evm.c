// SDB-CGEN V2.0.2
// gcc -DMAIN=1 evm.c ; ./a.out > evm.h
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static const struct kv kvs[] = {
  {"jumpdest","mark valid jump destination"}, 
  {"selfdestruct","halt execution and register account for later deletion"}, 
  {"push12","push 12-byte value onto stack"}, 
  {"address","address of executing contract"}, 
  {"push13","push 13-byte value onto stack"}, 
  {"push10","push 10-byte value onto stack"}, 
  {"push11","push 11-byte value onto stack"}, 
  {"caller","address of msg sender"}, 
  {"push16","push 16-byte value onto stack"}, 
  {"dup15","clone 15th value on stack"}, 
  {"push17","push 17-byte value onto stack"}, 
  {"dup14","clone 14th value on stack"}, 
  {"push14","push 14-byte value onto stack"}, 
  {"push15","push 15-byte value onto stack"}, 
  {"dup16","clone 16th value on stack"}, 
  {"extcodehash","get hash of an account’s code"}, 
  {"dup11","clone 11th value on stack"}, 
  {"dup10","clone 10th value on stack"}, 
  {"dup13","clone 13th value on stack"}, 
  {"dup12","clone 12th value on stack"}, 
  {"codecopy","copy executing contract's bytecode"}, 
  {"jumpi","perform conditional jump"}, 
  {"call","takes 7 values from stack and make a call, push in stack result and stores in memory retuned call data"}, 
  {"callvalue","msg value, in wei"}, 
  {"xor","bitwise xor"}, 
  {"mstore","write a word to memory"}, 
  {"staticcall","static message-call into an account"}, 
  {"push29","push 29-byte value onto stack"}, 
  {"push28","push 28-byte value onto stack"}, 
  {"lt","uint256 less-than"}, 
  {"calldataload","read word from msg data at index idx"}, 
  {"gas","get the amount of available gas"}, 
  {"push21","push 21-byte value onto stack"}, 
  {"sload","read word from storage"}, 
  {"jump","perform unconditional jump"}, 
  {"push20","push 20-byte value onto stack"}, 
  {"and","bitwise and"}, 
  {"push23","push 23-byte value onto stack"}, 
  {"push22","push 22-byte value onto stack"}, 
  {"push25","push 25-byte value onto stack"}, 
  {"push24","push 24-byte value onto stack"}, 
  {"mstore8","write a single byte to memory"}, 
  {"sgt","int256 greater-than"}, 
  {"push27","push 27-byte value onto stack"}, 
  {"push26","push 26-byte value onto stack"}, 
  {"mul","(u)int256 multiplication modulo 2**256"}, 
  {"push9","push 9-byte value onto stack"}, 
  {"push8","push 8-byte value onto stack"}, 
  {"create2","create a new account with associated code at a predictable address"}, 
  {"addmod","(u)int256 addition modulo n"}, 
  {"push3","push 3-byte value onto stack"}, 
  {"push2","push 2-byte value onto stack"}, 
  {"push1","push 1-byte value onto stack"}, 
  {"revert","halt execution reverting state changes but returning data and remaining gas"}, 
  {"push7","push 7-byte value onto stack"}, 
  {"push6","push 6-byte value onto stack"}, 
  {"push5","push 5-byte value onto stack"}, 
  {"push4","push 4-byte value onto stack"}, 
  {"calldatacopy","copy msg data"}, 
  {"extcodesize","size of code at addr, in bytes"}, 
  {"delegatecall","takes 7 values from stack and makes a call to a reciever within self scope, push in stack result and stores in memory retuned call data"}, 
  {"extcodecopy","copy code from addr"}, 
  {"blockhash","get the hash of one of the 256 most recent complete blocks"}, 
  {"dup4","clone 4th value on stack"}, 
  {"dup5","clone 5th value on stack"}, 
  {"dup6","clone 6th value on stack"}, 
  {"dup7","clone 7th value on stack"}, 
  {"return","halt execution returning output data"}, 
  {"shr","logical shift right"}, 
  {"dup1","clone 1st value on stack"}, 
  {"dup2","clone 2nd value on stack"}, 
  {"dup3","clone 3rd value on stack"}, 
  {"shl","shift left"}, 
  {"pc","program counter"}, 
  {"dup8","clone 8th value on stack"}, 
  {"dup9","clone 9th value on stack"}, 
  {"or","bitwise or"}, 
  {"origin","address that originated the tx"}, 
  {"iszero","(u)int256 iszero"}, 
  {"difficulty","difficulty of current block"}, 
  {"invalid","designated invalid opcode"}, 
  {"push30","push 30-byte value onto stack"}, 
  {"push31","push 31-byte value onto stack"}, 
  {"push32","push 32-byte value onto stack"}, 
  {"selfbalance","balance of executing contract, in wei"}, 
  {"sar","arithmetic shift right"}, 
  {"mod","uint256 modulus"}, 
  {"mulmod","(u)int256 multiplication modulo n"}, 
  {"stop","halt execution"}, 
  {"slt","int256 less-than"}, 
  {"returndatacopy","copy returned data from last external call"}, 
  {"calldatasize","length of msg data, in bytes"}, 
  {"byte","retrieve single byte from word"}, 
  {"sub","(u)int256 addition modulo 2**256"}, 
  {"swap1","swap 1st and 2nd values on stack"}, 
  {"swap2","swap 1st and 3rd values on stack"}, 
  {"swap3","swap 1st and 4th values on stack"}, 
  {"basefee","base fee of current block"}, 
  {"div","uint256 division"}, 
  {"swap4","swap 1st and 5th values on stack"}, 
  {"swap5","swap 1st and 6th values on stack"}, 
  {"swap6","swap 1st and 7th values on stack"}, 
  {"eq","(u)int256 equality"}, 
  {"swap7","swap 1st and 8th values on stack"}, 
  {"swap8","swap 1st and 9th values on stack"}, 
  {"swap9","swap 1st and 10th values on stack"}, 
  {"swap11","swap 1st and 12th values on stack"}, 
  {"not","bitwise not"}, 
  {"swap10","swap 1st and 11th values on stack"}, 
  {"smod","int256 modulus"}, 
  {"swap13","swap 1st and 14th values on stack"}, 
  {"swap12","swap 1st and 13th values on stack"}, 
  {"sdiv","int256 division"}, 
  {"coinbase","address of miner of current block"}, 
  {"swap15","swap 1st and 16th values on stack"}, 
  {"swap14","swap 1st and 15th values on stack"}, 
  {"swap16","swap 1st and 17th values on stack"}, 
  {"timestamp","timestamp of current block"}, 
  {"exp","uint256 exponentiation modulo 2**256"}, 
  {"msize","size of memory in current execution context, in bytes"}, 
  {"gaslimit","gas limit of current block"}, 
  {"gasprice","gas price of tx, in wei per unit gas"}, 
  {"sstore","write word to storage"}, 
  {"balance","balance, in wei"}, 
  {"mload","read word from memory at offset ost"}, 
  {"signextend","sign extend x from (b+1) bytes to 32 bytes"}, 
  {"create","create a new account with associated code"}, 
  {"sha3","compute keccak-256 hash"}, 
  {"pop","remove item from top of stack and discard it"}, 
  {"callcode","takes 7 values from stack and makes a call to a reciever within self scope without sender values, push in stack result and stores in memory retuned call data"}, 
  {"number","number of current block"}, 
  {"gt","uint256 greater-than"}, 
  {"returndatasize","size of returned data from last external call, in bytes"}, 
  {"log1","append log record with 1 topic"}, 
  {"chainid","push current chain id onto stack"}, 
  {"log0","append log record with no topics"}, 
  {"log3","append log record with 3 topics"}, 
  {"log2","append log record with 2 topics"}, 
  {"codesize","length of executing contract's code, in bytes"}, 
  {"push18","push 18-byte value onto stack"}, 
  {"log4","append log record with 4 topics"}, 
  {"add","(u)int256 addition modulo 2**256"}, 
  {"push19","push 19-byte value onto stack"}, 
  {NULL, NULL}
};
// 0x20484160
// TODO
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_evm_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_evm_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_evm(x,y) gperf_evm_hash(x)
const unsigned int gperf_evm_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_evm = {
  .name = "evm",
  .get = &gperf_evm_get,
  .hash = &gperf_evm_hash,
  .foreach = &gperf_evm_foreach
};

#if MAIN
int main () {
	const char *s = ((char*(*)(char*))gperf_evm.get)("foo");
	printf ("%s\n", s);
}
#endif
