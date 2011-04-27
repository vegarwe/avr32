// vegarwe@lappverket:~$ (cd ~/avr32aes/src; avr32-gcc -ggdb -o example_main.elf example_main.c; echo "press a key"; read l; avr32-gdb -x ../avr32-gdb_cmd.txt example_main.elf)
// root@lappverket:~#    (cd /home/vegarwe/avr32aes/src; avr32program program -e -v -f0,8Mb example_main.elf && avr32gdbproxy -f 0,8Mb –a)
//
// vegarwe@lappverket:~$ (cd /home/vegarwe/avr32aes/src; gcc -ggdb -o example_main example_main.c && gdb -x ../gdb_cmd.txt example_main)

#include "aes.h"
#include "cunit.h"

int main(void)
{
	int i,k;
	for (i = 0;; i++)
	{
		k = SubBytes(i % 256);
		if (k == 0xbc)
		{
			CU_FAIL( Found 0xbc );
		}
		if (k == 0xac)
		{
			CU_FAIL( Found 0xac );
		}
	}
	return 0;
}
