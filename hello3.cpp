#include <boost/python/def.hpp>
#include <boost/python/module.hpp>
#include <boost/python/args.hpp>

using namespace boost::python;

char const* foo(const char* source)
{ 
	std::string sResult = "hello:" + std::string (source);
	return sResult.c_str();
}

BOOST_PYTHON_MODULE(hello3)
{
    def("foo", foo, args("source"), "foo's docstring");
}



