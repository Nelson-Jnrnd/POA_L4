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
    std::unique_ptr<Field> _field;

public:
    Simulation(int width, int height);

    bool simulate(int nbHumans, int nbVampires, int nbBuffy);

    void simulate(int nbHumans, int nbVampires, int nbBuffy, int nbSimulations);
};


#endif //POA_L4_SIMULATION_HPP
