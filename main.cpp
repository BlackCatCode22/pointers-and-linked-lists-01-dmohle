#include <iostream>

using namespace std;

int main()
{
    cout << "\n\n\n\n";
    cout << "Hello Pointers!!" << endl;

    // Create a char array
    char myChars[3];

    char myCharToFillArray = 'a';

    // Use a for loop to fill the array with a b c
    for (int i = 0; i < 3; i++) {
        myChars[i] = myCharToFillArray;
        myCharToFillArray++;
    }

    // Use a for loop to output the array
    for (int i = 0; i < 3; i++) {
        cout << "   " << myChars[i] << "\n\n";
    }

    char myChar = 'D';

    char* pMyZpointer;

    pMyZpointer = &myChar;

    // Dereference and output  pMyZpointer
    cout << " I expect to see a D : " << *pMyZpointer;


    char* pMyArrayPtr;

    pMyArrayPtr = myChars;

    // Output dereferenced
    cout << "\n Should be the first char in the array (a): " << *pMyArrayPtr;

    cout << "\n\n should be a memory address: "  << &pMyArrayPtr;

    // increment the array pointer
    pMyArrayPtr++;
    // Output dereferenced pointer
    cout << "\n Should be the second char in the array (b): " << *pMyArrayPtr;

    // increment the array pointer
    pMyArrayPtr++;
    // Output dereferenced pointer
    cout << "\n Should be the second char in the array (c): " << *pMyArrayPtr;

    // increment the array pointer
    pMyArrayPtr++;
    // Output dereferenced pointer
    cout << "\n Should be .......): " << *pMyArrayPtr;

    // output the pointer's value
//    cout << "should be an address " << pMyCharPtr;

    cout << "\n\n";

    // output the dereferenced pointer
//    cout << "should be the first character in the array: " << *pMyCharPtr;
    cout << "\n\n";

    // Dereference the pointer and output it
//    cout << " should be a z character: " << *pMyCharPtr;
    cout << "\n\n\n\n";


    return 0;
}
