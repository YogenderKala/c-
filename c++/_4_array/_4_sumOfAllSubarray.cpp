// Q. Find the sum of all subarray of a given array.
#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i <n; i++)
    {
        sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}