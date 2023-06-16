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

    }

    void pop() {
        if (empty()) { //step 1
            cout << "\nStack is empty. Cannot pop." << endl;    //1.a
            return; //1.b
        }