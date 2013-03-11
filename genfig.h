#include <string>
#include <map>

class Genfig {

	public:
		Genfig(std::string filename);
		Genfig(std::string filename, char delim);
		std::string getString(std::string key);
		int getInt(std::string key);
		double getFloat(std::string key);
		bool getBool(std::string key);

	private:
		void init(std::string filename, char delim);

		std::map<std::string, std::string> config;
};