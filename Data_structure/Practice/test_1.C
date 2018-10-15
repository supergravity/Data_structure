#include <iostream>
using namespace std;

int main()
{
    int a = 10; 
    //int *b = &a; 
    int* b = &a;
    cout << "The value of the address of a is: "<< &a << endl; 
    cout << "The value of b is: "<< b << endl;   // This stores the address of a. 
    cout << "The value of &b is: "<< &b << endl; // The variable &b != b. &b stores the address of b .   
    cout << "The value of *b is: "<< *b << endl; // The variable *b stores the value where b pointer
    return 0;


}

