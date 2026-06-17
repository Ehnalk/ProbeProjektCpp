#ifndef CHIP_HPP
#define CHIP_HPP
#include <string>
#include "ChipColor.hpp"

class Chip {
public:
    Chip(ChipColor color);
    Chip();
    ~Chip();
    void setColor(ChipColor color);
    ChipColor getColor();
    bool isEmpty();

    private:
    ChipColor color; // color can be x, o, or empty
};

#endif // CHIP_HPP