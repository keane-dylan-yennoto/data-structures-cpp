#include <iostream>

using namespace std;
// Node class
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

// Linked list class
class LinkedList
{

public:
    Node *head;
    Node *tail;
    int counter;

    // Constructor
    LinkedList()
    {
        Node *newNode = new Node(0);
        head = newNode;
        tail = newNode;
        counter = 0;
    }

    // Insert a new element at the beginning of the list
    void insertBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insertEnd(int data)
    {
        Node *newNode = new Node(data);

        if (counter == 0)
        {
            head = newNode;
            tail = newNode;
            counter = 1;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
    }

    // Display the linked list
    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;

    list.insertEnd(5);
    list.insertEnd(15);
    list.insertEnd(25);
    list.insertEnd(35);

    // Display the linked list
    list.display();

    return 0;
}
