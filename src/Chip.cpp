#include "Chip.hpp"

Chip::Chip(ChipColor color) {
    setColor(color);
}

Chip::Chip() {
    color = ChipColor::Empty;
}

bool Chip::isEmpty() {
    return color == ChipColor::Empty;
}

void Chip::setColor(ChipColor color) {
    this->color = color;
}