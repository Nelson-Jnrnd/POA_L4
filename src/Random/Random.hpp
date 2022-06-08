//
// Created by NelsonWork on 07.06.2022.
//

#ifndef POA_L4_RANDOM_HPP
#define POA_L4_RANDOM_HPP


#include <random>
/**
 * Randomizer Class
 * @version 1.0
 * @date 07.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Random {
    /**
     * Pseudo Random Number Generator.
     */
    std::mt19937 _rng;

    Random();
    Random(Random const&);
    void operator=(Random const&);
public:
    /**
     * Gets the singleton instance of the randomizer.
     * @return instance of the randomizer class.
     */
    static Random &getInstance();

    /**
     * Returns a random integer between the who specified values; Interval : [min, max[
     * @param min lower bound.
     * @param max upper bound.
     * @return a randomly generated int.
     */
    int getRandomInt(int min, int max);
    /**
     * Returns a random double between the who specified values; Interval : [min, max[
     * @param min lower bound.
     * @param max upper bound.
     * @return a randomly generated double.
     */
    double getRandomDouble(double min, double max);
};


#endif //POA_L4_RANDOM_HPP
