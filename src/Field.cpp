#include "Field.hpp"
#include "Player.hpp"

Field::Field(int row, int column)
    : row(row), column(column), grid(row, std::vector<Chip>(column)) {
}

bool Field::isColumnFull(int column) {
    for (int i = 0; i < row; i++) {
        if (grid[i][column].isEmpty()) {
            return false;
        }
    }
    return true;
}

bool Field::isFull() {
    for (int i = 0; i < column; i++) {
        if (!isColumnFull(i)) {
            return false;
        }
    }
    return true;
}

bool Field::putChip(int column, const Player& player) {
    if (isColumnFull(column)) {
        return false;
    }
    for (int i = row - 1; i >= 0; i--) {
        if (grid[i][column].isEmpty()) {
            grid[i][column].setColor(player.getColor()); // TODO CHANGE
            return true;
        }
    }
    return false;
}