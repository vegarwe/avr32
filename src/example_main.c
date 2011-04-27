// vegarwe@lappverket:~$ (cd ~/avr32aes/src; avr32-gcc -ggdb -o example_main.elf example_main.c; echo "press a key"; read l; avr32-gdb -x ../avr32-gdb_cmd.txt example_main.elf)
// root@lappverket:~#    (cd /home/vegarwe/avr32aes/src; avr32program program -e -v -f0,8Mb example_main.elf && avr32gdbproxy -f 0,8Mb –a)
//
// vegarwe@lappverket:~$ (cd /home/vegarwe/avr32aes; gcc -ggdb -o example_main src/example_main.c && gdb -x gdb_cmd.txt example_main)

#include "aes.h"
#include "cunit.h"

int main(void)
{
  test_SubBytes();
  test_ShiftRows();

  return 0;
}

void test_SubBytes(void)
{
	int i;
	int expected[] = {
		0x63, 0x7c, 0x77, 0x7b,
        0xca, 0x82, 0xc9, 0x7d,
        0xb7, 0xfd, 0x93, 0x26,
        0x04, 0xc7, 0x23, 0xc3};

	int actual[] = {
		0x00, 0x01, 0x02, 0x03,
		0x10, 0x11, 0x12, 0x13,
		0x20, 0x21, 0x22, 0x23,
		0x30, 0x31, 0x32, 0x33};
	SubBytes(actual);

	for (i = 0; i < 4*4; i++)
	{
	  CU_ASSERT_INT_EQ(expected[i], actual[i]);
	}
}

void test_ShiftRows(void)
{
	int i;
	int expected[] = {
		0x00, 0x01, 0x02, 0x03,
		0x11, 0x12, 0x13, 0x10,
		0x22, 0x23, 0x20, 0x21,
		0x33, 0x30, 0x31, 0x32};

	int actual[] = {
		0x00, 0x01, 0x02, 0x03,
		0x10, 0x11, 0x12, 0x13,
		0x20, 0x21, 0x22, 0x23,
		0x30, 0x31, 0x32, 0x33};
	ShiftRows(actual);

	for (i = 0; i < 4*4; i++)
	{
	  CU_ASSERT_INT_EQ(expected[i], actual[i]);
	}
}
