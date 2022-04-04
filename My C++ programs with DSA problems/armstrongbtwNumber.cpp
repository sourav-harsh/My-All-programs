#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num)
{
    int sum = 0;
    int original = num;
    while (num > 0)
    {
        int lastdigit = num % 10;
        sum += pow(lastdigit, 3);
        num = num / 10;
    }
    if (original == sum)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}