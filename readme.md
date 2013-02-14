CPP JSON Initializer
=

Overview
-

The goal of this project is to create a base program that includes a basic configuration json encoding. The idea with this is that a config file can be set / passed to the program and this base code will encode the json into a configuration object that will always be available.

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

