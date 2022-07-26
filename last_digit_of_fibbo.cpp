//last digit of large fibonacci no
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=0;
    int c=1;
    while(n>=0){
        a=c+b;
        if(a>=10)a=a%10;
        c=b;
        b=a;
        n--;
    }
    cout<<c;
    return 0;
}