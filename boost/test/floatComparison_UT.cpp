/*
g++ -o floatComparison floatComparison_UT.cpp -lboost_unit_test_framework
./floatComparison --log_level=test_suite
*/
#define BOOST_TEST_MODULE floatingTest
#include <boost/test/included/unit_test.hpp>
#include <cmath>
 
BOOST_AUTO_TEST_SUITE ( test ) 
 
BOOST_AUTO_TEST_CASE( test )
{
  float f1 = 567.0102;
  float result = sqrt(f1); // this could be my_sqrt; faster implementation
                                      // for some specific DSP like hardware
  BOOST_CHECK_CLOSE_FRACTION (f1, result * result, 0.0001);  
}
 
BOOST_AUTO_TEST_SUITE_END( )
