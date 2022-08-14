//Q.Given an array a[] of size n. For every i from 0 to n-1
// output max(a[o],a[1],a[2],....a[i]).
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,maximum=INT_MIN;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        maximum=max(maximum,arr[i]);
        cout<<maximum<<" ";
    }
    return 0;
}