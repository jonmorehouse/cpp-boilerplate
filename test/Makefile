# include program variables
include ../Makefile.variable


PROGRAM = test
# append testing only libraries
PACKAGES += googletest googlemock

# master test
all: module_tests.o modules.o *.cpp
		
	$(COMPILER) -o $(PROGRAM) modules.o module_tests.o *.cpp $(COMPILERFLAGS)

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

	