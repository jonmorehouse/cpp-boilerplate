#include <jansson.h>
#include <fstream>
#include <iostream>
#include <string>
#include <cerrno>

// include project libraries
#include "modules/modules.hpp"
#include "modules/config_test.hpp"
#include <gtest/gtest.h>


int main(int argc, char ** argv) {

	::testing::InitGoogleTest(&argc, argv);
  	return RUN_ALL_TESTS();

  	
}