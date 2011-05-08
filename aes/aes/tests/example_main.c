#include "aes.h"
#include <cunit.h>

void test_SubBytes(void)
{
	int i;
	unsigned char expected[] = {
		0x63, 0x7c, 0x77, 0x7b,
        0xca, 0x82, 0xc9, 0x7d,
        0xb7, 0xfd, 0x93, 0x26,
        0x04, 0xc7, 0x23, 0xc3};

	unsigned char actual[] = {
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
	unsigned char expected[] = {
		0x00, 0x01, 0x02, 0x03,
		0x11, 0x12, 0x13, 0x10,
		0x22, 0x23, 0x20, 0x21,
		0x33, 0x30, 0x31, 0x32};

	unsigned char actual[] = {
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

void test_MixColumns_single_input_col2(void)
{
	int i;
	unsigned char expected[] = {
		0x00, 0x06, 0x00, 0x00,
		0x00, 0x04, 0x00, 0x00,
		0x00, 0x02, 0x00, 0x00,
		0x00, 0x02, 0x00, 0x00};

	unsigned char actual[] = {
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x02, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00};
	MixColumns(actual);

	for (i = 0; i < 4*4; i++)
	{
	  CU_ASSERT_INT_EQ(expected[i], actual[i]);
	}
}

void test_MixColumns_full_input_col2(void)
{
	int i;
	unsigned char expected[] = {
		0x00, 0x0f, 0x00, 0x00,
		0x00, 0x12, 0x00, 0x00,
		0x00, 0x15, 0x00, 0x00,
		0x00, 0x10, 0x00, 0x00};

	unsigned char actual[] = {
		0x00, 0x01, 0x00, 0x00,
		0x00, 0x02, 0x00, 0x00,
		0x00, 0x03, 0x00, 0x00,
		0x00, 0x04, 0x00, 0x00};
	MixColumns(actual);

	for (i = 0; i < 4*4; i++)
	{
	  CU_ASSERT_INT_EQ(expected[i], actual[i]);
	}
}

void test_MixColumns_full_input_low_values(void)
{
	int i;
	unsigned char expected[] = {
	     99, 15,  43,  71,
		102, 18,  46,  74,
		105, 21,  49,  77,
		100, 16,  44,  72};

	unsigned char actual[] = {
		 13,   1,   5,   9,
		 14,   2,   6,  10,
		 15,   3,   7,  11,
		 16,   4,   8,  12};
	MixColumns(actual);

	for (i = 0; i < 4*4; i++)
	{
	  CU_ASSERT_INT_EQ(expected[i], actual[i]);
	}
}

void test_gmix_column(void)
{
	int i;
	unsigned char expected[] = {198, 198, 198, 198};
	unsigned char actual[]   = {198, 198, 198, 198};
	gmix_column(actual);
	for (i = 0; i < 4; i++) CU_ASSERT_INT_EQ(expected[i], actual[i]);
}

void test_MixColumns_single_input_high_values(void)
{
	int i;
	unsigned char expected[] = {
		142,   0,   0,   0,
		 77,   0,   0,   0,
		161,   0,   0,   0,
		188,   0,   0,   0};

	unsigned char actual[] = {
	    219,   0,   0,   0,
		 19,   0,   0,   0,
		 83,   0,   0,   0,
		 69,   0,   0,   0};

	MixColumns(actual);

	for (i = 0; i < 4*4; i++)
	{
	  CU_ASSERT_INT_EQ(expected[i], actual[i]);
	}
}

int main(void)
{
  test_SubBytes();
  test_ShiftRows();
  //test_MixColumns_single_input_col2();
  //test_MixColumns_full_input_col2();
  //test_MixColumns_full_input_low_values();
  test_gmix_column();
  test_MixColumns_single_input_high_values();

  return 0;
}

