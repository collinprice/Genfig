#include "genfig.h"
#include <fstream>
#include <sstream>
#include <cstdlib>

Genfig::Genfig(std::string filename) {
	init(filename, ':');
}

Genfig::Genfig(std::string filename, char delim) {
	init(filename, delim);
}

void Genfig::init(std::string filename, char delim) {
	std::ifstream ifile(filename.c_str());

	if (ifile.good()) {
		std::string line;
		while(std::getline(ifile, line)) {

			std::stringstream ss(line);
			std::string key;
			std::string value;

			std::getline(ss, key, delim);
			std::getline(ss, value);

			this->config[key] = value;
		}
	}
}

std::string Genfig::getString(std::string key) {
	return this->config[key];
}

int Genfig::getInt(std::string key) {
	return atoi(this->config[key].c_str());
}

double Genfig::getFloat(std::string key) {
	return atof(this->config[key].c_str());
}

bool Genfig::getBool(std::string key) {
	return this->config[key].compare("true");
}