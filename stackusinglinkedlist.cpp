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
        newNode->next = top; // add node connection to stack top
        top = newNode;
        cout << "Push value: " << value << endl; // add push output message
        return value;
    }

    // add pop fuction
    void pop()
    {
        // add empty stack checking in pop
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }

        // add temporary node in pop
        Node *temp = top;
        top = top->next;
        cout << "Popped value " << top->data << endl; // add pop output message
    }

    // add peek function
    void peek()
    {
        // add empty validation in peek
        if (top == NULL)
        {
            cout << "List is empty." << endl;
        }
        else
        {
            // add traversal for displaying stack
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    // add isEmpty function
    bool isEmpty()
    {
        return top == NULL;
    }
};
}
;