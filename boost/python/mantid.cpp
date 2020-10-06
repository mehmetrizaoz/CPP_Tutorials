/*
g++ -Wall -shared -fPIC -o mantid.so mantid.cpp -std=c++0x -lboost_python38 -I/usr/include/python3.8
*/

 // mantid.cpp
 #include <iostream>
 #include <boost/python.hpp>
 
 void sayHello()
 {
   std::cout << "Hello, Python!\n";
 }
 
 BOOST_PYTHON_MODULE(mantid)  // Name here must match the name of the final shared library, i.e. mantid.dll or mantid.so
 {
    using namespace boost::python;
    def("sayHello", &sayHello);
 }
