#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <string>

namespace
{ // Avoid cluttering the global namespace.

  // A couple of simple C++ functions that we want to expose to Python.
  int greet(int x)
  {
    
    return x*x*x;
  }


  int square(int number) { return number * number; }
}

namespace python = boost::python;

// Python requires an exported function called init<module-name> in every
// extension module. This is where we build the module contents.
BOOST_PYTHON_MODULE(hello2)
{
    // Add regular functions to the module.
    python::def("greet", greet);
    python::def("square", square);
}
