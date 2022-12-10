#include "iostream"
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int a,b,arr[1000];
    cin>>b>>a;
    for(int i=0;i<b*a;i++)
    {
        cin>>arr[i];
    }
    sort((arr), arr + a*b);
    cout<<"Median is "<<arr[(a*b +1)/2];
}
