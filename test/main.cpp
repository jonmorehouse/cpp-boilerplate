#include <jansson.h>
#include <fstream>
#include <iostream>
#include <string>
#include <cerrno>

// include project libraries
#include "modules/modules.hpp"
#include "gtest/gtest.h"

// ::testing::InitGoogleTest

TEST(FactorialTest, Negative) {

	
	EXPECT_EQ(5, Modules::factorial(0));

}

int main(int argc, char ** argv) {

	::testing::InitGoogleTest(&argc, argv);
  	return RUN_ALL_TESTS();


}