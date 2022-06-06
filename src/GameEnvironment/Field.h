#ifndef POA_L4_FIELD_H
#define POA_L4_FIELD_H


#include <cstdio>
#include <memory>
#include <list>
#include "../Entities/Humanoid.h"

class Field {
    const std::size_t _WIDTH;
    const std::size_t _HEIGHT;
    std::list<std::unique_ptr<Humanoid>> _humanoids;

public:
    Field(std::size_t width, std::size_t height);

    std::size_t getWidth() const;
    std::size_t getHeight() const;

    void addHuman(std::size_t x, std::size_t y);
    void accept(HumanoidVisitor &visitor);

protected:
    const std::list<std::unique_ptr<Humanoid>> &getHumanoids() const;
};


#endif //POA_L4_FIELD_H
