// Binary Search is searching algo used in a SORTED ARRAY by repeatedly
// dividing the search interval in half, and is much faster then the linear search.
// Time complexity -  O(log n) ;
#include<iostream>
using namespace std;
void binarySearch(int arr[],int n, int key){
 int start = 0, end = n;
while(start<=end)
  {
      int mid = (start+end)/2;
      if(arr[mid]==key){
          cout<<"Key found at index :"<<mid;
          return;
      }
      else if(arr[mid]>key){
          end=mid-1;
      }
      else{
          start=mid+1;
          }
  }
  cout<<"key not found";
 return ;
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array \n";
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to search :";
    cin>>key;
    binarySearch(arr,n,key);
return 0;
}