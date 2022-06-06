#pragma once
#include "../utilities.hpp"
#include "../../../include/JSON/json.hpp"
#include <string>
#include <filesystem>

class LanguageHandler
{
public:
	static void loadDataFromFile(int lang);
};

extern nlohmann::json jWriter;
extern std::string JSON_VALUE_ERROR;