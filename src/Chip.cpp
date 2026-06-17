#include "Chip.hpp"

Chip::Chip(std::string color) {
    setColor(color);
}

Chip::Chip() {
    color = "";
}

bool Chip::isEmpty() {
    return color == "";
}

void Chip::setColor(std::string color) {
    if (color == "x" || color == "o" || color == "") {
        this->color = color;
    } else {
        this->color = "";
    }
}