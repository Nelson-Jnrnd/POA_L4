//
// Created by André on 02.06.2022.
//

#ifndef POA_L4_VAMPIRE_H
#define POA_L4_VAMPIRE_H


#include "Humanoid.h"

/**
 * Represent a Vampire
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Vampire : public Humanoid {
public:
    /**
     * Constructs a vampire at the given position.
     * @param position  The position of the vampire.
     */
    Vampire(const Position &position);

    void accept(HumanoidVisitor &visitor) override;
};


#endif //POA_L4_VAMPIRE_H
