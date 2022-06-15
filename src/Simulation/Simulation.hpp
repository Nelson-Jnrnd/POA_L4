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
   /**
    * Method to add all humanoids to the field
    * @param field of simulation
    * @param nbHumans number of humans
    * @param nbVampires number of vampires
    * @param nbBuffy number of Buffy
    */
   static void populate(Field& field, int nbHumans, int nbVampires, int nbBuffy);
public:

   /**
    * Constructor
    */
   Simulation() = delete;

   /**
    * Method to simulate a single party
    * @param width of the field
    * @param height of the field
    * @param nbHumans number of humans
    * @param nbVampires number of vampires
    * @param nbBuffy number of Buffy
    * @return if Buffy killed all vampires before all humans die
    */
   static bool simulate(int width, int height, int nbHumans, int nbVampires, int nbBuffy);

   /**
    * Method to simulate a given number of simualtions
    * @param width of the field
    * @param height of the field
    * @param nbHumans number of humans
    * @param nbVampires number of vampires
    * @param nbBuffy number of Buffy
    * @param nbSimulations number of simulations
    */
   static void simulate(int width, int height, int nbHumans, int nbVampires, int nbBuffy, int nbSimulations);

   /**
    * Method to show graphicaly a simulation
    * @param output
    * @param width
    * @param height
    * @param nbHumans
    * @param nbVampires
    * @param nbBuffy
    * @return
    */
   static bool graphicSimulate(std::ostream& output, int width, int height, int nbHumans, int nbVampires, int nbBuffy);

   static bool stepByStepSimulation(std::ostream& output, int width, int height, int nbHumans, int nbVampires, int nbBuffy);
};


#endif //POA_L4_SIMULATION_HPP
