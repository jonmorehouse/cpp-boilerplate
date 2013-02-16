#ifndef CONFIG_TEST_HPP
#define CONFIG_TEST_HPP

// 
#include "modules/modules.hpp"
#include <gtest/gtest.h>

// save the config file name so for easy access can just use that
char * file = "/Users/MorehouseJ09/Documents/programs/cpp/cpp_boilerplate/config.json";

TEST(FileReader, ValidFile) {

		// make sure the file is read properly
		ASSERT_TRUE(Modules::getFileContents);
		ASSERT_GT(Modules::getFileContents(file).size(), 0);
}

// bad tests coming later
TEST(FileReader, BadFile) {
	
	

}


#endif