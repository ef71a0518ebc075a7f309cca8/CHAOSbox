#include <iostream>
#include <fstream>
#include <thread>
#include <array>
#include <map>
#include <string>
#include <cmath>

#include "network.h"
#include "init.h"
#include "cryptic.h"

/*
CHAOS chat
by ef71a0518ebc075a7f309cca8
ver 0.1
ports: initial knock 445; second knock 165
*/


int main() {
	try {
		int fallback = 0;
		while (fallback == 0) {
			int initialization = init();
			if (initialization == 22) {
				std::cout << "CHAOS Initialization failed, goodbye\n";
				//failed initialization
				fallback = 1;
				return 0;
			}
			else if (initialization == 792349) {
				std::cout << "starting CHAOS...\n";
				//normal execution


			}
			else {
				std::cout << "UNKNOWN INITIALIZATION RETURN\nRETRYING INITIALIZATION\n";
				//unexpected initialization return
				continue;
			}
			fallback = 1;
		}
	}
	catch (...) {
		std::cout << "A CRITICAL ERROR HAS OCCURED\nREPORT THIS TO THE DEVELOPER\n";
		return 0;
	}
	//initialization finished, program execution below
}
