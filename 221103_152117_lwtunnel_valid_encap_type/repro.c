// autogenerated by syzkaller (https://github.com/google/syzkaller)

#define _GNU_SOURCE

#include <endian.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <unistd.h>

uint64_t r[1] = {0xffffffffffffffff};

int main(void)
{
  syscall(__NR_mmap, 0x1ffff000ul, 0x1000ul, 0ul, 0x32ul, -1, 0ul);
  syscall(__NR_mmap, 0x20000000ul, 0x1000000ul, 7ul, 0x32ul, -1, 0ul);
  syscall(__NR_mmap, 0x21000000ul, 0x1000ul, 0ul, 0x32ul, -1, 0ul);
  intptr_t res = 0;
  res = syscall(__NR_socket, 0x10ul, 3ul, 0);
  if (res != -1)
    r[0] = res;
  *(uint64_t*)0x20001840 = 0;
  *(uint32_t*)0x20001848 = 0;
  *(uint64_t*)0x20001850 = 0x20001800;
  *(uint64_t*)0x20001800 = 0x20000700;
  *(uint32_t*)0x20000700 = 0x24;
  *(uint16_t*)0x20000704 = 0x19;
  *(uint16_t*)0x20000706 = 1;
  *(uint32_t*)0x20000708 = 0;
  *(uint32_t*)0x2000070c = 0;
  *(uint8_t*)0x20000710 = 0xa;
  *(uint8_t*)0x20000711 = 0;
  *(uint8_t*)0x20000712 = 0;
  *(uint8_t*)0x20000713 = 0;
  *(uint8_t*)0x20000714 = 0;
  *(uint8_t*)0x20000715 = 0;
  *(uint8_t*)0x20000716 = 0;
  *(uint8_t*)0x20000717 = 0;
  *(uint32_t*)0x20000718 = 0;
  *(uint16_t*)0x2000071c = 6;
  *(uint16_t*)0x2000071e = 0x15;
  *(uint16_t*)0x20000720 = 0xa;
  *(uint64_t*)0x20001808 = 0x24;
  *(uint64_t*)0x20001858 = 1;
  *(uint64_t*)0x20001860 = 0;
  *(uint64_t*)0x20001868 = 0;
  *(uint32_t*)0x20001870 = 0;
  syscall(__NR_sendmsg, r[0], 0x20001840ul, 0ul);
  return 0;
}
