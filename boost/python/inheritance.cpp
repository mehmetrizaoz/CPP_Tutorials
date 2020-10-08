#include <iostream>
#include <string>

using namespace std;

class Base{
public:
    virtual string name() const { return "Base"; }
    virtual ~Base() {}
};

class Derived : public Base{
public:
    virtual string name() const { return "Derived"; }
};

void fb(Base *b){
    cout << b->name() << " called." << endl;
}

void fd(Derived *d){
    cout << "Derived " << d->name() << " called." << endl;
}

Base* factory(){
    return new Derived;
}

#include <boost/python.hpp>
using namespace boost::python;

BOOST_PYTHON_MODULE(inheritance)
{
    class_<Base, boost::noncopyable>("Base")
        .def("name", &Base::name)
    ;

    class_<Derived, bases<Base> >("Derived")
    ;

    def("fb", fb);
    def("fd", fd);
    def("factory", factory, return_value_policy<manage_new_object>());
}



