#ifndef MAPS_H
#define MAPS_H

const int NUM_MAPS = 10;
const int ROWS = 10;
const int COLS = 10;

struct FloodFillStart {
    int row;
    int col;
};


const char maps[NUM_MAPS][ROWS][COLS] = {
    {
        {'X', 'X', '.', '.', 'X', 'X', '.', '.', 'X', 'X'},
        {'X', 'X', '.', '.', 'X', 'X', '.', '.', 'X', 'X'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'X', 'X', '.', '.', 'X', 'X', '.', '.', 'X', 'X'},
        {'X', 'X', '.', '.', 'X', 'X', '.', '.', 'X', 'X'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'X', 'X', '.', '.', 'X', 'X', '.', '.', 'X', 'X'},
        {'X', 'X', '.', '.', 'X', 'X', '.', '.', 'X', 'X'}
    },
    {
        {'.', '.', '.', '.', '.', 'X', 'X', 'X', '.', '.'},
        {'.', 'X', 'X', 'X', '.', '.', '.', '.', 'X', 'X'},
        {'.', 'X', 'X', 'X', '.', '.', '.', '.', 'X', 'X'},
        {'.', '.', '.', '.', '.', 'X', 'X', 'X', '.', '.'},
        {'X', 'X', 'X', 'X', 'X', 'X', '.', '.', '.', '.'},
        {'X', 'X', 'X', 'X', 'X', 'X', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', 'X', 'X', 'X', '.', '.'},
        {'.', 'X', 'X', 'X', '.', '.', '.', '.', 'X', 'X'},
        {'.', 'X', 'X', 'X', '.', '.', '.', '.', 'X', 'X'},
        {'.', '.', '.', '.', '.', 'X', 'X', 'X', '.', '.'}
    },
    {
        {'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X', '.'},
        {'.', 'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X', '.'},
        {'.', 'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X', '.'},
        {'.', 'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X', '.'},
        {'.', 'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X', '.'},
        {'.', 'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X'}
    },
    {
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
        {'X', '.', 'X', 'X', 'X', 'X', 'X', 'X', '.', 'X'},
        {'X', '.', 'X', '.', '.', '.', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', 'X', 'X', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', 'X', 'X', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', '.', '.', '.', 'X', '.', 'X'},
        {'X', '.', 'X', 'X', 'X', 'X', 'X', 'X', '.', 'X'},
        {'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'}
    },
    {
        {'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
        {'.', 'X', '.', '.', '.', '.', '.', '.', 'X', '.'},
        {'.', '.', 'X', '.', '.', '.', '.', 'X', '.', '.'},
        {'.', '.', '.', 'X', '.', '.', 'X', '.', '.', '.'},
        {'.', '.', '.', '.', 'X', 'X', '.', '.', '.', '.'},
        {'.', '.', '.', '.', 'X', 'X', '.', '.', '.', '.'},
        {'.', '.', '.', 'X', '.', '.', 'X', '.', '.', '.'},
        {'.', '.', 'X', '.', '.', '.', '.', 'X', '.', '.'},
        {'.', 'X', '.', '.', '.', '.', '.', '.', 'X', '.'},
        {'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'}
    },
    {
        {'.', '.', '.', 'X', 'X', 'X', 'X', 'X', 'X', '.'},
        {'.', '.', '.', 'X', '.', '.', '.', '.', 'X', '.'},
        {'.', '.', '.', 'X', '.', 'X', 'X', '.', 'X', '.'},
        {'X', 'X', 'X', 'X', '.', 'X', 'X', '.', 'X', 'X'},
        {'X', '.', '.', '.', '.', 'X', 'X', '.', '.', 'X'},
        {'X', '.', 'X', 'X', '.', '.', '.', '.', '.', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'}
    },
    {
        {'X', 'X', 'X', 'X', '.', '.', 'X', 'X', 'X', 'X'},
        {'X', '.', '.', '.', 'X', 'X', '.', '.', '.', 'X'},
        {'X', '.', 'X', 'X', '.', '.', 'X', 'X', '.', 'X'},
        {'.', '.', 'X', 'X', 'X', 'X', 'X', 'X', '.', '.'},
        {'.', 'X', 'X', '.', '.', '.', '.', 'X', 'X', '.'},
        {'X', 'X', 'X', '.', 'X', 'X', '.', 'X', 'X', 'X'},
        {'.', 'X', '.', 'X', '.', '.', 'X', '.', 'X', '.'},
        {'X', '.', 'X', 'X', 'X', 'X', 'X', 'X', '.', 'X'},
        {'.', 'X', '.', '.', 'X', 'X', '.', '.', 'X', '.'},
        {'X', 'X', '.', 'X', '.', '.', 'X', '.', 'X', 'X'}
    },
    {
        {'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X', '.'},
        {'.', 'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X', '.'},
        {'.', 'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X', '.'},
        {'.', 'X', '.', 'X', '.', 'X', '.', 'X', '.', 'X'}
    },
    {
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
        {'X', '.', 'X', 'X', 'X', 'X', 'X', 'X', '.', 'X'},
        {'X', '.', 'X', '.', '.', '.', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', 'X', 'X', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', 'X', 'X', '.', 'X', '.', 'X'},
        {'X', '.', 'X', '.', '.', '.', '.', 'X', '.', 'X'},
        {'X', '.', 'X', 'X', 'X', 'X', 'X', 'X', '.', 'X'},
        {'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'}
    },
    {
        {'X', 'X', 'X', 'X', '.', '.', '.', 'X', 'X', 'X'},
        {'X', '.', '.', '.', 'X', '.', 'X', '.', '.', 'X'},
        {'X', '.', 'X', 'X', '.', 'X', '.', 'X', '.', 'X'},
        {'.', '.', '.', '.', 'X', '.', '.', '.', '.', '.'},
        {'.', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '.'},
        {'.', '.', '.', '.', 'X', '.', '.', '.', '.', '.'},
        {'X', '.', 'X', 'X', '.', 'X', '.', 'X', '.', 'X'},
        {'X', '.', '.', '.', 'X', '.', 'X', '.', '.', 'X'},
        {'X', 'X', 'X', 'X', '.', '.', '.', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', '.', '.', '.', 'X', 'X', 'X'}
    }
};

const FloodFillStart coords[NUM_MAPS] = {
    {2, 2},
    {0, 0},
    {0, 1},
    {1, 1},
    {9, 4},
    {1, 7},
    {4, 5},
    {5, 5},
    {6, 6},
    {7, 7}
};

#endif
