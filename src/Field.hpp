#ifndef FIELD_HPP
#define FIELD_HPP
#include <vector>
#include "Chip.hpp"
#include "Player.hpp"

class Field {
public:
    Field(int row, int column);
    ~Field();
    bool putChip(int column, Player player);
    bool isColumnFull(int column);
    bool isFull();
    void show();


private:
    int row;
    int column;
    std::vector<std::vector<Chip>> grid;
};



#endif // FIELD_HPP