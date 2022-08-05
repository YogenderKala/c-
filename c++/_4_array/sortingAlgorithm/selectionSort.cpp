//Find min element in unsorted array and swap it with elemnt at beginning
// Time complexity : O(n^2)
#include<iostream>
using namespace std;
int main(){
    int n,min_index=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if(arr[j]<arr[min_index]){
               min_index=j;
           }
        }
        int temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
    }
    cout<<"After sorting :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}