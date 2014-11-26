#ifndef NODE_H
#define NODE_H

#include "item.h"

class Node
{
    public:
        Node(Item* c_item, Node* c_next);
        void setNext(Node* c_next);
        void setPrev(Node* c_prev);
        void setItem(Item* c_item);
        Node* getNext();
        Node* getPrev();
        Item* getItem();
    private:
        Item* item;
        Node* nextNode;
        Node* prevNode;

};

#endif // NODE_H




