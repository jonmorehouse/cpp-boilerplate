# include program variables
include ../Makefile.variable


PROGRAM = test
# append testing only libraries
PACKAGES += googletest googlemock

# master test
all: modules.o *.cpp
	
	$(COMPILER) -o $(PROGRAM) modules.o *.cpp $(COMPILERFLAGS)

# modules directive
modules.o: modules/*.cpp modules/*.hpp

	$(COMPILER) -o modules.o -c $(COMPILERFLAGS) modules/*.cpp

# create a classes object
classes.o: classes/*.cpp classes/*.hpp

	$(COMPILER)	-o classes.o -c $(COMPILERFLAGS) classes/*.cpp

clean:
	-rm -rf *.o .*~ $(PROGRAM)

	