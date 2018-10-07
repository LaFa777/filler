#ifndef TIMEPARSER_HPP
#define TIMEPARSER_HPP

#include <iomanip>
#include <sstream>

class TimeParser
{
public:
    TimeParser();
    std::tm parse(const char* str);
};

#endif // TIMEPARSER_HPP
