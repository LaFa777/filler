#include "randomtimestamp.hpp"

#include <iostream>
using namespace std;

RandomTimestamp::RandomTimestamp(const char* start, const char* stop, bool uniq):
    uniq(uniq)
{
    auto parser = TimeParser();

    auto tm = parser.parse(start);
    this->start = static_cast<uint_fast32_t>(std::mktime(&tm));

    tm = parser.parse(stop);
    this->stop = static_cast<uint_fast32_t>(std::mktime(&tm));
}

uint_fast32_t RandomTimestamp::next()
{
    auto el = this->random_generator.generate_integer(this->start, this->stop);
    if(this->uniq)
    {
        if(this->container.contains(el))
        {
            return this->next();
        }
        this->container.insert(el);
    }

    return el;
}
