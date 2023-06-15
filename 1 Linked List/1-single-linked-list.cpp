#include <iostream>


using namespace std;
// Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Linked list class
class LinkedList {
   
    Node* head;

    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Insert a new element at the beginning of the list
    void insert(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Display the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Inserting elements into the linked list
    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.insert(20);

    // Display the linked list
    list.display();

    return 0;
}
