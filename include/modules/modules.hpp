#ifndef MODULES_HPP
#define MODULES_HPP

// include c++ specific libraries
#include <cerrno>
#include <string>
#include <fstream>
#include <jansson.h>

// prototypes
namespace Modules {

	std::string getFileContents(const char *);

	int factorial(int);

}

#endif