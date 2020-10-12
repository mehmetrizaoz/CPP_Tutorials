#include <string>
#include <sstream>

using namespace std;

struct Ctor{
    Ctor(string msg) : mMsg(msg) {}
    Ctor(double x,double y){
        stringstream os;
        os << x << ":" << y << ends;
        set(os.str());
    }
    void set(string msg) { mMsg = msg; }
    string greet() { return mMsg; }
    string mMsg;
};

#include <boost/python.hpp>
using namespace boost::python;

BOOST_PYTHON_MODULE(ctor)
{
    class_<Ctor>("Ctor", init<std::string>())
        .def(init<double, double>())
        .def("greet", &Ctor::greet)
        .def("set", &Ctor::set)
    ;

}

