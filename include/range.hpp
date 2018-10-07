#ifndef RANGE_HPP
#define RANGE_HPP

#include <cinttypes>

class Range
{
private:
    uint_fast32_t start = 0;
    uint_fast32_t stop;
    uint_fast32_t step = 1;
    uint_fast32_t curr;
public:
    Range(unsigned int stop);
    Range(unsigned int start, unsigned int stop);
    Range(unsigned int start, unsigned int stop, unsigned int step);

    // временно, пока я не понял как работаю итераторы :(
    uint_fast32_t next();

    bool is_contain(unsigned int number);
};

#endif // RANGE_HPP
