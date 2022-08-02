///Q. Find the fibonacci series upto n terms.
// EXAMPLE - 0 1 1 2 3 5 8 13 21 34 (sum of two consicutive terms is next term)
#include<iostream>
using namespace std;
void fab(int n){
    int t1= 0,t2=1,next;
    for (int i = 1; i <=n; i++)
    {
        cout<<t1<<endl;
        next = t1+t2;
        t1=t2;
        t2=next;
    }
    return ;
}
int main(){
    int n ;
    cin>>n;
    fab(n);
    return 0;
}