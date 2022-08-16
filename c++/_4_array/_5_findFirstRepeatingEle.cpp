//Q. Given an array arr[] of size N. The task is to find the first repeating element in
//   the array of integers i.e. an element that occurs more than once and whose index of
//   first occurrence is smallest.
//  Example: Input: 1 5 3 4 3 5 6
//           Output: 2   (1 based index)
//
//  Explanation: 5 is appearing twice and its first appearance is at index 2 which is
//               less than 3 whose first occurring indec is 3.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    const int N = 10000;
    int idx[N];
    for (int i = 0; i <N; i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(idx[arr[i]]!= -1)
        {
            minidx=min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(minidx!=INT_MAX){
        cout<<minidx+1<<endl;
    }
    else{
        cout<<"-1";
    }
    return 0;
}