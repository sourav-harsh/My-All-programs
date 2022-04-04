#include<iostream>
using namespace std;
// Time complexity is O(n^2)
// This is for unsorted array
bool unsortpairsum(int arr[],int n,int k)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (arr[i]+arr[j]==k)
            {
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
// Time complexity is O(n)
// This is for sorted array
bool pairsum(int arr[],int n,int k)
{
    int low=0;
    int high=n-1;
    while (low<high)
    {
        if(arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (arr[low]+arr[high]>k)
        {
            high--;
        }
        else
        low++;
    }
    return false;
}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    int n=sizeof(arr)/sizeof(int);
    if (pairsum(arr,n,k))
    {
        cout<<k <<" pairsum present in the array"<<endl;
    }
    else
    cout<<k <<" pairsum is not in the array"<<endl;
    
    return 0;  
}