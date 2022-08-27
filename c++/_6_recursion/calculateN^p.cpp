//Calculate n raised to the power p using recursion
#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
   int cal= power(a,b-1);
   return a*cal;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<n<<" raised to power "<< p<<" is : "<<power(n,p);
}