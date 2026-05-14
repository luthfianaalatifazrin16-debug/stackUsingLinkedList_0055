#include <iostream> //initial commit create Node class

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// stack class and top pointer
class stack
{
private:
    Node *top;

public:
    stack()
    {
        top = NULL;
    }
    int push(int value) // add push function declaration
    {
        // implement node creation inside push
        Node *newNode = new Node();
        newNode->data = value;
