/*
g++ -o variants variants_UT.cpp -lboost_unit_test_framework
./variants --log_level=test_suite
*/

#define BOOST_TEST_MODULE enumtest
#include <boost/test/included/unit_test.hpp>
 
BOOST_AUTO_TEST_SUITE (enumtest) 
 
BOOST_AUTO_TEST_CASE (test1)
{
  typedef enum {red = 8, blue, green = 1, yellow, black } color;
  color c = green;
  BOOST_WARN(sizeof(green) > sizeof(char));
  BOOST_CHECK(c == 2); 
  BOOST_REQUIRE(yellow > red); 
  BOOST_CHECK(black != 4);
}
 
BOOST_AUTO_TEST_SUITE_END( )
