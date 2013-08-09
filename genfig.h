#include <string>
#include <map>

class Genfig {

	public:
		Genfig(std::string filename);
		Genfig(std::string filename, char delim);
		std::string getString(std::string key);
		int getInt(std::string key);
		double getDouble(std::string key);
		bool getBool(std::string key);

		bool hasKey(std::string key);
		void writeToFile(std::string filename);

	private:
		std::map<std::string, std::string> config;
		char delimeter;

		void init(std::string filename, char delim);
		
};