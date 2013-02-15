CPP JSON Initializer
=

Overview
=

The goal of this program is to create a quick boilerplate solution to solving c++ problems. I'm hoping with this that I can get a basic TDD program up and running in minutes without having to worry about compilation errors, Makefile debugging etc. 

I'm also planning to implement a basic config library integration to allow for the loading of json data via Jansson library.

Libraries
=

Jansson = Json Encoder / Decoder etc
Google Test = Google Testing Library
Google Mock = Google Mock Objects Library
Google Sparsehash Libary = Google Dictionary Library for C++


Compilation
=

Using CMAKE for the first time. This program should be easily forkable so that I can very quickly start programs off with a running config setup. 

Directory Structure
-

	Makefile
	output

	src/
		modules
		classes
		main.cpp
		Makefile
	test/
		modules
		classes
		main.cpp
		Makefile


Development Stages
=

-	Set up JSON Parsing
-	Set up Config Structure
-	Set up Google Test Library

