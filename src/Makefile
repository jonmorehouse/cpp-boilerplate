.PHONY: all 

include ../Makefile.variable

# make directives
all: modules.o *.cpp

	$(COMPILER) -o $(PROGRAM) modules.o *.cpp $(COMPILERFLAGS)


# create a modules object
modules.o: modules/*.cpp 
	
	$(COMPILER) -o modules.o -c $(COMPILERFLAGS) modules/*.cpp

# create a classes object
classes.o: classes/*.cpp classes/*.hpp

	$(COMPILER)	-o classes.o -c $(COMPILERFLAGS) classes/*.cpp

clean:
	-rm -rf *.o .*~ $(PROGRAM)
	