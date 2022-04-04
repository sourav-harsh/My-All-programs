#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for (int i = 1; i <= 2*n; i++)
    {
        for (int j = 1; j <= 2*n; j++)
        {
            for (int k = 0; k < i; k++)
            {
            if ((i+j)%2==0)
            {
                cout<<"*";
            }
            else
            cout<<" "; 
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}