#include <iostream>
using namespace std;

const int rows = 2;
const int columns = 5;

int matrix[rows][columns] = {
    {1,2,3,4,5},
    {6,7,8,9,10}
};

int main()
{
    for (int i =0; i<rows; i++)
    {
        for (int j =0; j<columns; j++)
        {
            cout << matrix[i][j] << '\n';
        }
    }
    return 0;
}