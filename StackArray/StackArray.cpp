#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
    string stack_array[5];
    int top;


public:
    //constructor
    StackArray() {
        top = -1;
    }

    void push() {
        cout << "\nEnter a element: ";
        int element;
        cin >> element;

        top++; //step 2
        stack_array[top] = element; //step 3
        cout << endl;
        cout << element << "ditambahkan(pushed)" << endl;