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
    void populate(Field& field, int nbHumans, int nbVampires, int nbBuffy);
public:
    Simulation() = default;

    bool simulate(int width, int height, int nbHumans, int nbVampires, int nbBuffy);

    void simulate(int width, int height, int nbHumans, int nbVampires, int nbBuffy, int nbSimulations);

    bool graphicSimulate(std::ostream& output, int width, int height, int nbHumans, int nbVampires, int nbBuffy);

};


#endif //POA_L4_SIMULATION_HPP
