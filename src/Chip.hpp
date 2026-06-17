#ifndef CHIP_HPP
#define CHIP_HPP
#include <string>

class Chip {
public:
    Chip(std::string color);
    ~Chip();
    void setColor(std::string color);
    std::string getColor();
    bool isEmpty();

    private:
    std::string color; // color can be x, o, or empty
}

#endif // CHIP_HPP