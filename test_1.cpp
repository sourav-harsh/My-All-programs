// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employees
{
public:
    string name;
    int salary;
    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollar" << endl;
    }
};
int main()
{
    cout << "Hello World\n";
    cout << "This is the first program in c++" << endl;
    Employees sour;
    sour.name = "Sourav kumar";
    sour.salary = 150;
    sour.printDetails();
    return 0;
}