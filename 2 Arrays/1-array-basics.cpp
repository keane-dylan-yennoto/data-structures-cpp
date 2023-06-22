#include <iostream>

using namespace std;

int main() {


    // C++ of array basics

    // simple integer array
    int array1[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++) {
        cout << array1[i];
    }  

    cout << endl; 


    // 2-dimension char array
    char fruits[5][11] = {
                        "banana",
                        "apple",
                        "watermelon",
                        "strawberry",
                        "peach"
    };

    /* length of 11 is needed not twelve since the characters "watermelon" 
    is actually stored as "w a t e r m e l o n \0" where \0  is the NULL characcter where it is used to mark the end of a string
    */
   
    for (int i = 0; i < 5; i++) {
            cout << fruits[i] << endl;   
        }
    

    return 0;
}
