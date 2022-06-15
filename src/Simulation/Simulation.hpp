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
    static void populate(Field& field, int nbHumans, int nbVampires, int nbBuffy);
    /**
     * Prints the different command for the game
     */
    static void printCommand(std::ostream& output, const Field& field);

public:
    Simulation() = delete;

    static bool simulate(int width, int height, int nbHumans, int nbVampires, int nbBuffy);

    static void simulate(std::ostream& output, int width, int height, int nbHumans, int nbVampires, int nbBuffy, int nbSimulations);

    static bool stepByStepSimulation(std::ostream& output, int width, int height, int nbHumans, int nbVampires, int nbBuffy);
};


#endif //POA_L4_SIMULATION_HPP
