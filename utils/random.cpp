#include "random.hpp"

Random::Random()
{
    this->generator = std::mt19937(static_cast<unsigned int>(std::chrono::high_resolution_clock::now().time_since_epoch().count()));
}

uint_fast32_t Random::generate_integer(uint_fast32_t begin, uint_fast32_t end)
{
    return std::uniform_int_distribution<uint_fast32_t>(begin, end - 1)(this->generator);
}
