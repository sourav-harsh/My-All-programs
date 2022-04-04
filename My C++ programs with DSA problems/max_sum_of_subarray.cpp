#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    // kadane's Algorithm
    int currsum=0;
    int maxSum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum+=a[i];
        if (currsum<0)
        {
            currsum=0;
        }
        maxSum=max(maxSum,currsum);
    }
    cout<<maxSum<<endl; 
    return 0;
}