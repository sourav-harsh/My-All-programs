#include<iostream>
using namespace std;

// Normal form of euclid alogoritm
int euclid_algo(int a, int b)
{
    int dividend=a>=b?a:b;
    int divisor=a<=b?a:b;
    while (divisor!=0)
    {
        int remainder=dividend%divisor;
        dividend=divisor;
        divisor=remainder;
    }
    return dividend;
}

// Standard form of euclid algoritm using recursive
int euclid_algo_recursive(int a, int b){
    return b==0?a:euclid_algo_recursive(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<euclid_algo_recursive(a,b)<<endl;
    return 0;
}