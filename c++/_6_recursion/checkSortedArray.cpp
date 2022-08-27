// to check if array is sorted or not
#include<iostream>
using namespace std;
bool checkSort(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restArr = checkSort(arr+1,n-1);
    return (arr[0]<arr[1] && restArr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<checkSort(arr,n);
}