#include "timer.hpp"

void Timer::start()
{
    start_time = std::clock();
}

void Timer::stop()
{
    stop_time = std::clock();
}

double Timer::passed()
{
    return ( stop_time - start_time ) / static_cast<double>(CLOCKS_PER_SEC);
}
