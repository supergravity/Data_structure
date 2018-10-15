#include <iostream>
#include <typeinfo>

using namespace std;

int main ()
{
    double a[3][11];
    for (int idx1 = 0;idx1 < 3;idx1++)
    {
        for (int idx2 = 0; idx2 < 11; idx2++)
        {
            a [idx1][idx2] = (idx1 + 1) * (idx2 + 1);
            cout << "The value of &a[" << idx1+1 << "]" << "["<<idx2+1<<"]"<<" is: "<<&a[idx1][idx2]<<endl;
        }
    }

    double** c = new double* []
    
    //std::cout << "type of a is " << typeid(a).name() << std::endl;
    //c = a;
    //a[10] == *(a+9)
    //std::cout << "my test : " << *(*(c+2)+9) << std::endl;
    //for(int idx1 = 0;idx1 < 3;idx1++)
    //{
    //    b[idx1] = a[idx1];
    //    cout << "The value of b[" <<idx1<<"]"<<" is: "<< b[idx1] << endl;
    //    cout << "The value of *b[" <<idx1<<"]"<<" is: "<< *b[idx1] << endl;
    //}
    //cout << "The value of b is: "<< b << endl;  
    return 0;

}
