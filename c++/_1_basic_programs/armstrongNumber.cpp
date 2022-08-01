#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int originalNumber = n;
    while(n>0){
        int lastDigit = n%10;
        sum+= pow(lastDigit,3); //pow( ,3 ) to get cube of given number
        n= n/10;
    }
    if(originalNumber==sum){
        cout<<"Armstrong number";
    }else{
        cout<<"Not a armstrong number";
    }
    return 0 ;
}