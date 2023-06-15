#include <iostream>

using namespace std;

// Node class
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
};

// Circular doubly linked list class
class CircularDoublyLinkedList {
private:
    Node* head;

public:
    // Constructor
    CircularDoublyLinkedList() {
        head = nullptr;
    }

    // Insert a new element at the beginning of the list
    void insert(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
            Node* lastNode = head->prev;
            newNode->next = head;
            newNode->prev = lastNode;
            head->prev = newNode;
            lastNode->next = newNode;
            head = newNode;
        }
    }

    // Display the circular doubly linked list in forward direction
    void display() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        Node* current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << endl;
    }
};

int main() {
    CircularDoublyLinkedList list;

    // Inserting elements into the circular doubly linked list
    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.insert(20);

    // Display the circular doubly linked list
    list.display();

    return 0;
}
