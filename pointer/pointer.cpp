#include <iostream>
using namespace std;

// int main()
// {
//     int *p = nullptr;
//     int arr[] = {1,2,3,4,5};
//     p = arr;
//     cout << "the 1st number is " << *p << '\n';
//     cout << "the 2th number is " << *(p++) << '\n';
//     cout << "the 3th number is " << *(p++) << '\n';
//     cout << "the 4th number is " << *(p++) << '\n';
//     cout << "the 5th number is " << *(p++) << '\n';
//     return 0;
// }

int main()
{
    int * p = nullptr;
    int a = 10;
    p = &a;
    cout << "the value is " << *p <<'\n';
    cout << "the address is " << p <<'\n';
    cout << "size of int is " << sizeof(int) << '\n';
    cout << "size of int pointer is " << sizeof(int *) << '\n';
    cout << "size of float pointer is " << sizeof(float *) << '\n';
}