/*
 *  CUnit - A Unit testing framework library for C.
 *  Copyright (C) 2001  Anil Kumar
 *  Copyright (C) 2004  Anil Kumar, Jerry St.Clair
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _CUNIT_CUNIT_H
#define _CUNIT_CUNIT_H

/* Global type Definitions to be used for boolean operators. */
#ifndef BOOL
  #define BOOL int
#endif

#ifndef TRUE
  #define TRUE 1
#endif

#ifndef FALSE
  #define FALSE 0
#endif

// Record a failure without performing a logical test.
#define CU_FAIL(msg)                                { CU_assertImplementation(FALSE, __LINE__, ("CU_FAIL(" #msg ")"), __FILE__, "", FALSE); }
// Record a failure without performing a logical test, and abort test. 
#define CU_FAIL_FATAL(msg)                          { CU_assertImplementation(FALSE, __LINE__, ("CU_FAIL_FATAL(" #msg ")"), __FILE__, "", TRUE); }
// Asserts that value is TRUE. 
#define CU_ASSERT_TRUE(value)                       { CU_assertImplementation((value), __LINE__, ("CU_ASSERT_TRUE(" #value ")"), __FILE__, "", FALSE); }
// Asserts that value is TRUE. 
#define CU_ASSERT_TRUE_FATAL(value)                 { CU_assertImplementation((value), __LINE__, ("CU_ASSERT_TRUE_FATAL(" #value ")"), __FILE__, "", TRUE); }
// Asserts that value is FALSE. 
#define CU_ASSERT_FALSE(value)                      { CU_assertImplementation(!(value), __LINE__, ("CU_ASSERT_FALSE(" #value ")"), __FILE__, "", FALSE); }
// Asserts that value is FALSE. 
#define CU_ASSERT_FALSE_FATAL(value)                { CU_assertImplementation(!(value), __LINE__, ("CU_ASSERT_FALSE_FATAL(" #value ")"), __FILE__, "", TRUE); }
// Asserts that actual == expected. 
#define CU_ASSERT_EQUAL(actual, expected)           { CU_assertImplementation(((actual) == (expected)), __LINE__, ("CU_ASSERT_EQUAL(" #actual "," #expected ")"), __FILE__, "", FALSE); }
// Asserts that actual == expected. 
#define CU_ASSERT_EQUAL_FATAL(actual, expected)     { CU_assertImplementation(((actual) == (expected)), __LINE__, ("CU_ASSERT_EQUAL_FATAL(" #actual "," #expected ")"), __FILE__, "", TRUE); }
// Asserts that actual != expected. 
#define CU_ASSERT_NOT_EQUAL(actual, expected)       { CU_assertImplementation(((actual) != (expected)), __LINE__, ("CU_ASSERT_NOT_EQUAL(" #actual "," #expected ")"), __FILE__, "", FALSE); }
// Asserts that actual != expected. 
#define CU_ASSERT_NOT_EQUAL_FATAL(actual, expected) { CU_assertImplementation(((actual) != (expected)), __LINE__, ("CU_ASSERT_NOT_EQUAL_FATAL(" #actual "," #expected ")"), __FILE__, "", TRUE); }
// Asserts that pointers actual == expected. 
#define CU_ASSERT_PTR_EQUAL(actual, expected)       { CU_assertImplementation(((void*)(actual) == (void*)(expected)), __LINE__, ("CU_ASSERT_PTR_EQUAL(" #actual "," #expected ")"), __FILE__, "", FALSE); 

/** Assertion implementation function.
 *
 *  All CUnit assertions reduce to a call to this function. It should only be called during an active test run (checked by assertion). This means that CUnit assertions should only be used in registered test functions during a test run.
 *
 *  Parameters:
 *  bValue		Value of the assertion (TRUE or FALSE).
 *  uiLine		Line number of failed test statement.
 *  strCondition			String containing logical test that failed.
 *  strFile	Source file where test statement failed.
 *  strFunction	Function where test statement failed.
 *  bFatal		TRUE to abort test (via longjmp()), FALSE to continue test.
 *  Returns:
 *  As a convenience, returns the value of the assertion.
 */
BOOL CU_assertImplementation( BOOL bValue, unsigned int uiLine, char strCondition[], char strFile[], char strFunction[], BOOL bFatal)
{
  if (bFatal == TRUE)
  {
	for (;;) {}
  }
  return bValue;
}

// Asserts that actual == expected. 
#define CU_ASSERT_INT_EQ(expected, actual) { CU_assertIntEqualImplementation((expected), (actual), __LINE__, ("CU_ASSERT_EQUAL(" #expected "," #actual ")"), __FILE__, "", FALSE); }
BOOL CU_assertIntEqualImplementation(int expected, int actual, unsigned int uiLine, char strCondition[], char strFile[], char strFunction[], BOOL bFatal)
{
  BOOL bValue = actual == expected;
  if (bFatal == TRUE)
  {
	for (;;) {}
  }
  return bValue;
}


#endif  /*  _CUNIT_CUNIT_H  */
