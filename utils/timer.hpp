#ifndef TIMER_HPP
#define TIMER_HPP

#include <chrono>

class Timer
{
private:
    std::clock_t start_time;
    std::clock_t stop_time;
public:
    void start();
    void stop();
    double passed();
};

#endif // TIMER_HPP
