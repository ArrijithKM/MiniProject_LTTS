/**
 * @file test_tour.c
 * @author Arrijith KM (arrijithkm@gmail.com)
 * @brief Unit test function file
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "header.h"
#include "unity_internals.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME    "tour"

state status = out;

/* Prototypes for all the test functions */
void test_corona(void);
void test_corona1(void);
void test_corona3(void);
void test_corona4(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_corona);
  RUN_TEST(test_corona1);
  RUN_TEST(test_corona3);
  RUN_TEST(test_corona4);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_corona(void) {
  TEST_ASSERT_EQUAL(0, corona("AS"));
  
}
void test_corona1(void) {
  TEST_ASSERT_EQUAL(1, corona("LL"));
  
}

void test_corona3(void) {
  TEST_ASSERT_EQUAL(0, corona("SHM"));
  
}
void test_corona4(void) {
  TEST_ASSERT_EQUAL(0, corona("ND"));
  
}



