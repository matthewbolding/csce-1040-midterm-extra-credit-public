#ifndef FILLABLEMAP_H
#define FILLABLEMAP_H

class FillableMap {
private:
    static const int ROWS = 10;
    static const int COLS = 10;
    char grid[ROWS][COLS];

    void floodFillUtil(int row, int col, char prevChar, char newChar);

public:
    FillableMap(int mapIndex);
    void displayGrid() const;
    void floodFill(int row, int col, char newChar);
};

#endif
