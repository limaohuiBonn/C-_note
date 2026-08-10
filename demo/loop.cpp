#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    for (int i=0; i<=num; i++)
    {
        if (i % 2 == 0)
        {
            cout << "this is even " << i << '\n';
        }
        else
        {
            cout << "this is odd " << i << '\n';
        }
    }
    return 0;
}