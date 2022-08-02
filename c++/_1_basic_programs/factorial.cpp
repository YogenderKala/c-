//Q. Find factorial of given number n;
#include<iostream>
using namespace std;
void factorial(int n){
    int temp=1;
    for (int i = 1; i <=n; i++)
    {
        temp=temp*i;
    }
    cout<<temp;
}
int main(){
    int n;
    cin>>n;
    factorial(n);
    return 0;
}