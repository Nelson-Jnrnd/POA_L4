#ifndef POA_L4_SIMULATION_HPP
#define POA_L4_SIMULATION_HPP


#include "../Game/Field.hpp"

/**
 * Represent a Simulation
 * @version 1.0
 * @date 08.06.2022
 * @author Nelson Jeanrenaud
 * @author 
 */
class Simulation {
    Field _field;

public:
    Simulation(int width, int height);

    void simulate(int nbHumans, int nbVampires, int nbBuffy);
};


#endif //POA_L4_SIMULATION_HPP
