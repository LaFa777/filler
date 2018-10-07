#ifndef RANDOMTIMESTAMP_H
#define RANDOMTIMESTAMP_H

#include <cinttypes>

#include "../sparsepp/sparsepp/spp.h"

#include "../utils/timeparser.hpp"
#include "../utils/random.hpp"

class RandomTimestamp
{
private:
    uint_fast32_t start;
    uint_fast32_t stop;
    bool uniq = true;
    spp::sparse_hash_set<uint_fast32_t> container = spp::sparse_hash_set<uint_fast32_t>();
    Random random_generator = Random();
public:
    RandomTimestamp(const char* start, const char* stop, bool uniq = false);

    // временно, пока я не понял как работаю итераторы :(
    uint_fast32_t next();
};

#endif // RANDOMTIMESTAMP_H
