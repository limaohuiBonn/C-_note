#include <iostream>
using namespace std;

int array[] = {1,2,3,4,5,6};
int length = sizeof(array) / sizeof(array[0]);

void inverse_element(int arr[], int len)
{
    int i = 0;
    int j = len-1;
    int temp;
    while (i<j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    inverse_element(array, length);
    for (int i=0; i<length; i++)
    {
        cout << array[i] << '\n';
    }
    return 0;
}