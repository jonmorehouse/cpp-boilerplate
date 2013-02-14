# force make on certain systems
.PHONY: all test clean

include Makefile.variable

# make the current program
all:
	cd src && $(MAKE)

# test suite running
test:

	cd test && $(MAKE)

# force clean on the entire project
clean:
	cd src && $(MAKE) clean
	cd ..
	cd test && $(MAKE) clean


