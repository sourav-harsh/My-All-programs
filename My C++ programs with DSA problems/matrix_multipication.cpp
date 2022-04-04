#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    for (int i = 0; i <n1; i++)
        for (int h = 0; h < n2; h++)
            cin>>m1[i][h];

    for (int i = 0; i <n2; i++)
        for (int h = 0; h < n3; h++)
            cin>>m2[i][h];

    int ans[n1][n3];

    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n3; j++)
            ans[i][j]=0;
    
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n3; j++)
            for (int k = 0; k < n2; k++)
                ans[i][j]+=m1[i][k]*m2[k][j];
     
     
    for (int i = 0; i < n1; i++)
    {
        for (int h = 0; h < n3; h++)
            cout<<ans[i][h]<<" ";
        cout<<endl;
    }
    
    return 0;
}