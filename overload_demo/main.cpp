#include <iostream>
#include "add.h"
using namespace std;

int main()
{
    int a = add(1,2);
    double b = add(1.2,2.3);
    cout << "the int sum is " << a <<'\n';
    cout << "the double sum is " << b <<'\n';
}