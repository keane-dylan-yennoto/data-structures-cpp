#include <iostream>

using namespace std;

int main()
{

    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // basic intialization [1,2,3,4,5,6,7,8,9,10]
    int arr2[10] = {1, 4, 15, 23, 43};              // partial intialization [1,4,15,23,43,0,0,0,0,0]
    int arr3[] = {1, 4, 15, 23, 43};                // intialization without size [1,4,15,23,43]
    int arr4[100] = {0};                            // initialization of All Zeros [0,0,0,...,0,0,0]

    // Traversal: Traverse through the elements of an array.

    // basic traversal using indexing
    for (int i = 0; i < 10; i++)
    {
        cout << arr1[i] << ' ';
    }
    cout << endl;

    // take a look at what happens when we traverse outside of the number of elements
    for (int i = 0; i < 15; i++)
    {
        cout << arr1[i] << ' ';
    }
    cout << endl;

    // traversal using pointers
    int *ptr = arr1;

    cout << ptr << endl;  // returns address of arr1[0]
    cout << *ptr << endl; // returns value of arr1[0]
    ptr++;                // ptr points to arr[0] if we add 1 it will move to arr[1]
    cout << *ptr << endl; // returns value of arr1[0]

    ptr = arr1; // set ptr to address of arr1[0] again
    for (int i = 0; i < 10; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    // Insertion: Inserting a new element in an array.

    return 0;
}

// Deletion: Deleting element from the array.

// Searching:  Search for an element in the array.

// Sorting: Maintaining the order of elements in the array.