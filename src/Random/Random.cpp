//
// Created by NelsonWork on 07.06.2022.
//

#include "Random.hpp"

Random::Random() {
    _rng = std::mt19937(std::random_device()());
}

Random &Random::getInstance() {
    static Random instance;
    return instance;
}

int Random::getRandomInt(int min, int max) {
    std::uniform_int_distribution<int> dist(min, max);
    return dist(_rng);
}

double Random::getRandomDouble(double min, double max) {
    std::uniform_real_distribution<double> dist(min, max);
    return dist(_rng);
}
