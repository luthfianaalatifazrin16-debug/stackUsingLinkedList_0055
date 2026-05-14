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
