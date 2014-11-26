#include "node.h"

Node::Node(Item *c_item, Node *c_next)
{
    item = c_item;
    nextNode = c_next;
}

void Node::setNext(Node* c_next)
{
    nextNode = c_next;
}

void Node::setPrev(Node * c_prev)
{
    prevNode = c_prev;
}

void Node::setItem(Item* c_item)
{
    item = c_item;
}

Node* Node::getNext()
{
    return nextNode;
}

Node* Node::getPrev()
{
    return prevNode;
}

Item* Node::getItem()
{
    return item;
}

