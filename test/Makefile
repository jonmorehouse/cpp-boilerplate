# include program variables
include ../Makefile.variable

PROGRAM = test
# append testing only libraries
PACKAGES += 

# google test source location
GOOGLETEST = /usr/local/src/googletest
GOOGLEMOCK = /usr/local/src/googlemock

# INCLUDE THE GOOGLE TEST DIRS
INCLUDE += -I${GOOGLETEST}/include -I${GOOGLETEST}
INCLUDE += -I${GOOGLEMOCK}/include -I${GOOGLEMOCK}

# DECLARE TEST DEPENDENCIES
TEST_DEPENDENCIES = googletest.a googlemock.a module_tests.o modules.o *.cpp

# master test
all: $(TEST_DEPENDENCIES)

	$(COMPILER) -o test.out $(COMPILERFLAGS) $(TEST_DEPENDENCIES)

googletest.a: 

	$(COMPILER) -o googletest.o $(COMPILERFLAGS) -c ${GOOGLETEST}/src/gtest-all.cc
	ar -rv googletest.a googletest.o

googlemock.a:

	$(COMPILER) -o googlemock.o $(COMPILERFLAGS) -c ${GOOGLEMOCK}/src/gmock-all.cc
	ar -rv googlemock.a googlemock.o

# modules directive -- we need to compile our source code to be able to test it!
modules.o: ../src/modules/*.cpp 
	
	$(COMPILER) -c $(COMPILERFLAGS) ../src/modules/modules.cpp

# module tests
module_tests.o: modules/*.cpp

	$(COMPILER) -o module_tests.o -c $(COMPILERFLAGS) modules/module_tests.cpp

# create a classes object
classes.o: classes/*.cpp classes/*.hpp

	$(COMPILER)	-o classes.o -c $(COMPILERFLAGS) classes/*.cpp

clean:
	-rm -rf *.o .*~ $(PROGRAM)

	