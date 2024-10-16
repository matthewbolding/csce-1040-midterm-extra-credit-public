#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "FillableMap.h"
#include "Maps.h"

struct Node {
    FillableMap map;
    FloodFillStart coord;
    Node* prev;
    Node* next;
    Node(FillableMap map, FloodFillStart coord) : map(map), coord(coord), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    Node* getHead();
    Node* getTail();
    void append(FillableMap map, FloodFillStart coord);
};

#endif

