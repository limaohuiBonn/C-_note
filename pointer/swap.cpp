#include <iostream>
using namespace std;

// void swap(int *p1, int *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main()
{
    int a = 10;
    int b = 20;
    cout << "initial a is " << a << '\n';
    cout << "initial b is " << b << '\n';
    // swap(&a, &b);
    swap(a, b);
    cout << "swap a is " << a << '\n';
    cout << "swap b is " << b << '\n';
    return 0;
}