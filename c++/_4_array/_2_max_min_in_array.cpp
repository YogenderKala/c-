//Q. To find the maximum and minimum term in an array;
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxTerm=INT_MIN;
    int minTerm=INT_MAX;
    for (int i = 0; i <n; i++)
    {
        maxTerm=max(maxTerm,arr[i]);
        minTerm=min(minTerm,arr[i]);
    }
    cout<<maxTerm<<" "<<minTerm;
    return 0;
}
