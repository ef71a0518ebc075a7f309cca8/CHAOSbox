#pragma once
#include <iostream>
#include <fstream>
#include <thread>
#include <array>
#include <map>
#include <string>
#include <cmath>

#include "network.h"
#include "cryptic.h"

int init() {
	try {
		std::cout << "Initializing CHAOS...\n";
		int crypt_check = crypticinit();
		if (crypt_check == 28346) {
			std::cout << "Cryptic functionality testing...\n";
			//cryptic functions validation to ensure program functionality goes here
		}
		else {
			std::cout << "Cryptic functionality not found";
			throw;
		}
		std::map<std::string, std::string> DEFAULTS =
		{
			{"HASH_ALGORITHM", "SHA3_512"},
			{"BLOCK_CYPHER_ALGORITHM", "AES256"},
			{"ID", "RANDOM_NUMBER"},
			{"SECURITY_PRIORITY", "5"},
			{"MIN_PORT", "60000"},
			{"MAX_PORT", "62000"}
		};
		std::map<std::string, std::string>::iterator ITEM_LINE;
		for (std::pair<std::string, std::string> ITEM_LINE : DEFAULTS) {
			//std::cout << ITEM_LINE.first << ":" << ITEM_LINE.second << std::endl;
		}
		try {
			std::ifstream CONFIG_F("CHAOS_CONF");
			CONFIG_F.exceptions(std::ifstream::failbit | std::ifstream::badbit);
		}
		catch(...) {
			std::cout << "NO CONFIG FOUND\nLoading defaults...\n";
		}
		return 792349;
	}
	catch(...) {
		return 22;
	}
}
