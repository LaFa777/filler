#include "range.hpp"

Range::Range(unsigned int stop):
    stop(stop), curr(start)
{
}

Range::Range(unsigned int start, unsigned int stop):
    start(start), stop(stop), curr(start)
{
}

Range::Range(unsigned int start, unsigned int stop, unsigned int step):
    start(start), stop(stop), step(step), curr(start)
{
}

uint_fast32_t Range::next()
{
    return ++curr;
}

bool Range::is_contain(unsigned int number)
{
    return ((start <= number) && (number <= stop));
}
