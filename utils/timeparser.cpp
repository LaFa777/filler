#include "timeparser.hpp"

TimeParser::TimeParser()
{
}

std::tm TimeParser::parse(const char* str)
{
    std::tm tm = {};
    std::stringstream ss(str);
    ss >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");

    if(ss.fail())
        throw "fail parse error";

    return tm;
}
