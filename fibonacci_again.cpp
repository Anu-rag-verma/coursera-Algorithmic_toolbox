#include<iostream>
using namespace std;
int main(){
    long n,m;
    cin>>n>>m;
    long long a=0;
    long long b=0;
    long long c=1;
    while (m>0)
    {
        a=b+c;
        c=b;
        b=a;
        n--;
   
    }
   cout<<c;
return 0;
}