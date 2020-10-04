/*
g++ -o customPredicate customPredicate_UT.cpp -lboost_unit_test_framework
./customPredicate --log_level=test_suite
*/

#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>

using boost::test_tools::output_test_stream;

boost::test_tools::predicate_result validate_list(std::list<int>& L1)
{ 
  std::list<int>::iterator it1 = L1.begin( );
  for (; it1 != L1.end( ); ++it1) 
   { 
     if (*it1 <= 1) return false; 
   }
  return true;
}
 
BOOST_AUTO_TEST_SUITE (s1) 
BOOST_AUTO_TEST_CASE(s1t1)
{
    std::list<int> list1 = {11,2,4,111,3,9};//user_defined_func( );
    BOOST_CHECK( validate_list(list1) );
}
BOOST_AUTO_TEST_SUITE_END( )




