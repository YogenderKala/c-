// Q find a continious subarray which adds to a given sum .

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i=0,j=0,st=-1,end=-1,currSum=0;
    while(j<n && currSum+arr[j]<=target){
        currSum+=arr[j];
        j++;
    }
    if(currSum==target){
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
    }
    while()
    return 0;
}