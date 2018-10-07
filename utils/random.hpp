#ifndef RANDOM_HPP
#define RANDOM_HPP

#include <random>
#include <chrono>

class Random
{
private:
    std::mt19937 generator;
public:
    Random();
    uint_fast32_t generate_integer(uint_fast32_t begin, uint_fast32_t end);
};

#endif // RANDOM_HPP
