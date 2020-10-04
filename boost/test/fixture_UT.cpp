/*
g++ -o fixture fixture_UT.cpp -lboost_unit_test_framework
./fixture --log_level=test_suite
*/

#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>
#include <iostream>
 
struct F {
    F() : i( 0 ) { std::cout << "setup" << std::endl; }
    ~F()          { std::cout << "teardown" << std::endl; }
 
    int i;
};
 
BOOST_AUTO_TEST_SUITE( test )
 
BOOST_FIXTURE_TEST_CASE( test_case1, F )
{
    BOOST_CHECK( i == 1 );
    ++i;
}
 
BOOST_AUTO_TEST_SUITE_END()
