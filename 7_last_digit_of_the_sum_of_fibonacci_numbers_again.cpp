//last digit of sum of fibonacci no
#include<iostream>
using namespace std;
int main(){
    long n,m;
    cin>>n>>m;
    int a=0;
    int b=0;
    int c=1;
    int sum=0;
    int k=n>m?n:m;
   for(int i=0;i<=k;i++)
    {
        if(i==n||i==m){
            sum=sum+a;
        }
        a=b+c;
        c=b;
        b=a;
        
    }
    if(sum>10){
        sum=sum%10;
    }
    cout<<sum;
return 0;
}