//Q. To calculate nCr.
//where nCr = n!/((n-r)!*r!)
#include<iostream>
using namespace std;
int factorial(int n){
    int temp=1;
    for (int i = 1; i <=n; i++)
    {
        temp=temp*i;
    }
    return temp;
}
int main(){
    int n,r;
    cin>>n>>r;
   int answer = factorial(n)/(factorial(n-r)*factorial(r)) ;
   cout<<answer;
    return 0;
}