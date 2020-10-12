#include <sstream>
#include <string>

using namespace std;

class NumberLike{
public:
    NumberLike(int n = 0) : mN(n) {}
    
    NumberLike& operator+= (int i){
        mN += i;
        return *this;
    }
    
    string str() const{
        stringstream s;
        s << mN;
        return s.str();
    }
    
    string repr() const{
        stringstream s;
        s << "NumberLike("<< mN << ")";
        return s.str();
    }
private:
    int mN;
};

NumberLike operator+(NumberLike n, int i){ 
    n += i;
    return n;
};

#include <boost/python.hpp>
using namespace boost::python;


BOOST_PYTHON_MODULE(operators){
    class_<NumberLike>("NumberLike")
        .def(init< optional<int> >())
        .def(self + int())
        .def("__str__", &NumberLike::str)
        .def("__repr__", &NumberLike::repr)
    ;
}

