#ifndef MODULES_HPP
#define MODULES_HPP

// include c++ specific libraries
#include <cerrno>
#include <string>
#include <fstream>
#include <jansson.h>

// prototypes
namespace Modules {

	std::string getFileContents(const char *);//get the files of a file into a string

	json_t * getConfig(const char *);//pass in a string of json to the getConfig and it will return a valid configuration hash back

	json_t * getConfigFromFile(const char *);//get the contents from a file 
}

#endif