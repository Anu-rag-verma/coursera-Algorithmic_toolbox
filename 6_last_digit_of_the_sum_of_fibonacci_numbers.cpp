//last digit of sum of fibonacci no
#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int a=0;
    int b=0;
    int c=1;
    long   sum=0;
    while (n>=0)
    {
        sum=sum+a;
        a=b+c;
        if(a>=10)a=a%10;
        c=b;
        b=a;
        n--;
    }
    if(sum>=10)sum=sum%10;
    cout<<sum;
return 0;
}