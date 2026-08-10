#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int arr[] = {0,1,2,3};
    cout << "the address of a is " << &a << '\n';
    cout << "the address of arr is " << &arr << '\n';

    cout << "the first array number is " << *arr << '\n';
    cout << "the next array number is " << *(arr+1) << '\n';

    return 0;
}