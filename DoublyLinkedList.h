#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "FillableMap.h"
#include "Maps.h"

struct Node {
    FillableMap data;
    Node* prev;
    Node* next;
    Node(FillableMap obj) : data(obj), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    Node* getHead();
    void append(FillableMap obj);
};

#endif

