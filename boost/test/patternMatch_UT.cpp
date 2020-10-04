/*
g++ -o patternMatch patternMatch_UT.cpp -lboost_unit_test_framework
./patternMatch --log_level=test_suite
*/
#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>
#include <boost/test/tools/output_test_stream.hpp>

using boost::test_tools::output_test_stream;

BOOST_AUTO_TEST_SUITE ( test ) 
 
BOOST_AUTO_TEST_CASE( test )
{
  output_test_stream output( "run.log", true );
  output << "5+6=11";
  BOOST_CHECK( output.match_pattern() );
}
 
BOOST_AUTO_TEST_SUITE_END( )
