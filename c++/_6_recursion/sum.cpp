// Add all elements till n using recusrion;
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
    return 0;
    }
    int preSum = sum(n-1);
    return n + preSum;
}
int main(){
    int n;
    cin>>n;
    cout<<"Sum till n is : "<<sum(n);
    return 0;
}