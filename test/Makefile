# include program variables
include ../Makefile.variable

PROGRAM = test
# append testing only libraries
PACKAGES += googletest googlemock

# google test source location
GOOGLETEST = /Users/MorehouseJ09/Documents/general_development/public_code/googletest

# INCLUDE THE GOOGLE TEST DIRS
INCLUDE += -I${GOOGLETEST}/include
INCLUDE += -I${GOOGLETEST}

# DECLARE TEST DEPENDENCIES
TEST_DEPENDENCIES = libgtest.a module_tests.o modules.o *.cpp

# master test
all: $(TEST_DEPENDENCIES)

	$(COMPILER) $(COMPILERFLAGS) -o test.out $(TEST_DEPENDENCIES)

libgtest.a: 

	$(COMPILER) $(COMPILERFLAGS) -c ${GOOGLETEST}/src/gtest-all.cc
	ar -rv libgtest.a gtest-all.o


# modules directive -- we need to compile our source code to be able to test it!
modules.o: ../src/modules/*.cpp 
	
	$(COMPILER) -o modules.o -c $(COMPILERFLAGS) ../src/modules/*.cpp

# module tests
module_tests.o: modules/*.cpp

	$(COMPILER) -o module_tests.o -c $(COMPILERFLAGS) modules/*.cpp

# create a classes object
classes.o: classes/*.cpp classes/*.hpp

	$(COMPILER)	-o classes.o -c $(COMPILERFLAGS) classes/*.cpp

clean:
	-rm -rf *.o .*~ $(PROGRAM)

	