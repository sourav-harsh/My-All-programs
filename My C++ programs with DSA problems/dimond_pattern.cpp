#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int h = 1; h <= 2*i-1; h++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int h = 1; h <= 2*i-1; h++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}