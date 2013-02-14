#include "./modules.hpp"

// 
namespace Modules {

	std::string getFileContents(const char * filename) {

		std::ifstream in(filename, std::ios::in | std::ios::binary);

		if (in) {

			std::string contents;
			in.seekg(0, std::ios::end);//find the end of the file
			contents.resize(in.tellg());//resize the string to the proper length for this
			in.seekg(0, std::ios::beg);//go back to the beginning of the program
			in.read(&contents[0], contents.size());//read in the contents to the size of the string
			in.close();//close the file		
			return contents;
		}

		throw(errno);
	}
}