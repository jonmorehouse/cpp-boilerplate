# -L = what directory to look in
# -l = which library to use
INCLUDE = 
LIBRARIES = 
PACKAGES = jansson

COMPILER = g++
COMPILERFLAGS = -O3 $(INCLUDE) $(pkg-config --libs --cflags $(PACKAGES))

PROGRAM = current
SOURCE = $(CURRENT_FILE).cpp
OBJECT = $(CURRENT_FILE).o

.cpp.o: 
	$(COMPILER) -c $(COMPILERFLAGS) $<

all: $(PROGRAM)

$(PROGRAM): 

	$(COMPILER) $(COMPILERFLAGS) -o $(PROGRAM) $(CURRENT_FILE) $(LIBRARIES)

clean:
	-rm -rf *.o *~ .*~ $(PROGRAM)
