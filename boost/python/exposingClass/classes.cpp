#include <boost/python.hpp>
#include <boost/python/list.hpp>
#include <boost/python/extract.hpp>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
//using namespace boost::python;

struct World
{
    void set(string msg) { mMsg = msg; }
    void many(boost::python::list msgs) {
        long l = len(msgs);
        stringstream ss;
        for (long i = 0; i<l; ++i) {
            if (i>0) ss << ", ";
            string s = boost::python::extract<string>(msgs[i]);
            ss << s;
        }
        mMsg = ss.str();
    }
    std::string greet() { return mMsg; }
    std::string mMsg;
};

using namespace boost::python;

BOOST_PYTHON_MODULE(classes)
{
    class_<World>("World")
        .def("greet", &World::greet)
        .def("set", &World::set)
        .def("many", &World::many)
    ;
};
