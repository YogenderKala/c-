#include<iostream>
using namespace std;
void linearSearch(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            cout<<"Index of "<<key<<" is "<<i;
            return ;
        }
    }
   cout<<key<<" is not present in array";
   return ;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    linearSearch(arr,n,key);
    return 0;
}