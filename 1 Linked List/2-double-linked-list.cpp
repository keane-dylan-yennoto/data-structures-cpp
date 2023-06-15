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

// Doubly linked list class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Constructor
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert a new element at the beginning of the list
    void insert(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Display the linked list in forward direction
    void displayForward() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Display the linked list in reverse direction
    void displayReverse() {
        Node* current = tail;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    // Inserting elements into the doubly linked list
    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.insert(20);

    // Display the doubly linked list in forward direction
    cout << "Forward direction: ";
    list.displayForward();

    // Display the doubly linked list in reverse direction
    cout << "Reverse direction: ";
    list.displayReverse();

    return 0;
}
