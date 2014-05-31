#pragma once

#include <string>
#include <vector>

#define foreach(v, it) for(typeof((v).begin()) it = (v).begin(); it != (v).end(); it++)

const std::string NULL_FIELD = "null";

#ifdef __linux__
// linux system
const char BACKSPACE_CODE = 127;
const char ENTER_CODE = 10;
const char ESC_CODE = 27;
#elif _WIN32
// windows system
const char BACKSPACE_CODE = 8;
const char ENTER_CODE = 13;
const char ESC_CODE = 27;
#endif

char getChar();
bool isValid(char c);

std::string toLower(std::string str);
std::string toUpper(std::string str);

bool fieldIsNull(std::string field);
std::vector<std::string> getTokens(std::string str, std::string separator);
