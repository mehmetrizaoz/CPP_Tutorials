/*
g++ -o ut_stringClass stringClass_UT.cpp -lboost_unit_test_framework
./ut_stringClass --log_level=test_suite
*/

#define BOOST_TEST_MODULE stringtest
#include <boost/test/included/unit_test.hpp>
#include "./str.h"

BOOST_AUTO_TEST_SUITE (s2) 
 
BOOST_AUTO_TEST_CASE (s2t1){
  mystring s;
  s.set_p1(5);
  s.set_p2(6);
  BOOST_CHECK(s.add() == 11);
  BOOST_CHECK(s.size() == 0); //will not executed
}
 
BOOST_AUTO_TEST_CASE (s2t2){
  mystring s;
  s.setbuffer("hello world");
  BOOST_REQUIRE_EQUAL ('h', s[0]); //stops suite if fails
}


BOOST_AUTO_TEST_SUITE_END( )


