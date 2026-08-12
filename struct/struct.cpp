#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
};

void print_array_arr(Student* arr, int len)
{
    int i = 0;
    while (i < len)
    {
        cout << "Name: " << (*(arr+i)).name << ',' <<"Age: " << (*(arr+i)).age << '\n';
        i++; 
    };
}

void print_array_ptr(Student* ptr, int len)
{
    int i = 0;
    while (i < len)
    {
        cout << "Name: " << ptr->name << ',' <<"Age: " << ptr->age << '\n';
        ptr++;
        i++; 
    };
}

int main()
{
    Student Studentarr[3] = {
        {"Rourou",4},
        {"Rabbit",1},
        {"Dondey",1},
    };
    print_array_arr(Studentarr, 3);
    print_array_ptr(Studentarr, 3);
    return 0;
}