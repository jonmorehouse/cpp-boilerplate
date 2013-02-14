#include <jansson.h>
#include <fstream>
#include <iostream>
#include <string>
#include <cerrno>

// include project libraries
#include "modules/modules.hpp"

int main(int argc, char ** argv) {

	std::cout << "HELLO WORLD";

	try {

		std::cout << Modules::getFileContents("test.json");

	} catch (int error) {

		std::cout << error;
	}

	return 0; 

}