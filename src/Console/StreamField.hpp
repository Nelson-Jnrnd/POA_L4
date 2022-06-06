//
// Created by NelsonWork on 06.06.2022.
//

#ifndef POA_L4_STREAMFIELD_HPP
#define POA_L4_STREAMFIELD_HPP


#include <vector>
#include "../GameEnvironment/Field.h"
#include "HumanoidDisplayer.hpp"

/**
 * Represent a Field that can be displayed in a output stream.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class StreamField : public Field {
    static const char EMPTY_CELL;
    static const char HORIZONTAL_BORDER;
    static const char VERTICAL_BORDER;
    static const char EDGE_BORDER;

    /**
     * Displayer used to display Humanoids.
     */
    HumanoidDisplayer _displayer;

    /**
     * The char matrix that represents the Field.
     */
    std::vector<std::vector<char>> _field;

    /**
     * The output stream used to display the Field.
     */
    std::ostream &_output;

    /**
     * Prints the horizontal border of the Field.
     */
    void printHorizontalBorder() const;
public:
    /**
     * Constructs a StreamField with the given width and height.
     * @param stream The output stream used to display the Field.
     * @param width The width of the Field.
     * @param height The height of the Field.
     */
    StreamField(std::ostream &stream, std::size_t width, std::size_t height);

    /**
     * Prints the field on the output stream.
     */
    void print() const;

    /**
     * Updates the position of the Humanoids in the field.
     */
    void update();
};


#endif //POA_L4_STREAMFIELD_HPP
