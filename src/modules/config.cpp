#include "modules/modules.hpp"
#include <string.h>
#include <jansson.h>

namespace Modules {

	json_t * getConfig(const char * inpu_t) {

		// initialize an error so that we can catch one if necessary
		const char * input = "{\"name\":\"Jon Morehouse\"}";
		json_t * json;
		json_error_t error;

		json = json_loads(input, 0, &error);
			
		return json;
	}

	json_t * getConfigFromFile(const char * filename) {



		
	}

}