#include <iostream>

using namespace std;

int main()
{
    int a = 30;
    int* b = &a;
    //int** p = b;
    //int** q = *b;
    int** r = &b;

    cout << "The value of a is: "<< a << endl;
    cout << "The value of &a is "<< &a << endl;
    cout << "The value of b is: "<< b << endl;
    cout << "The value of *b is: "<< *b << endl;
    //cout << "The value of p is : "<< p << endl;
    //cout << "The value of *p is : "<< *p << endl;
    //cout << "The value of **p is : "<< **p << endl;
    //cout << "The value of **q is :" << **q << endl;
    cout << "The value of r is :" << r << endl; 
    cout << "The value of *r is :" << *r << endl;
    cout << "The value of **r is :" << **r << endl;
   

    return 0;

}
