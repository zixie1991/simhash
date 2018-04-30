#include <boost/python.hpp>
#include "simhash/Simhasher.hpp"

namespace bp = boost::python;
using namespace simhash;
BOOST_PYTHON_MODULE(_simhash) {
  // Simhasher
  bp::class_<Simhasher>("Simhasher")
    .def(bp::init<string, string, string, string>())
    .def("make", &Simhasher::make)
    .def("isEqual", &Simhasher::isEqual);
}
