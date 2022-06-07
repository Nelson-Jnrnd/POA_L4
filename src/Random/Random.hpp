//
// Created by NelsonWork on 07.06.2022.
//

#ifndef POA_L4_RANDOM_HPP
#define POA_L4_RANDOM_HPP


#include <random>
/**
 * Represent a Random
 * @version 1.0
 * @date 07.06.2022
 * @author Nelson Jeanrenaud
 * @author 
 */
class Random {
    std::mt19937 _rng;
    Random();

    Random(Random const&);
    void operator=(Random const&);
public:
    static Random &getInstance();

    int getRandomInt(int min, int max);
    double getRandomDouble(double min, double max);
};


#endif //POA_L4_RANDOM_HPP
