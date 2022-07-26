// fibonacci no
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
        c=b;
        b=a;
        n--;
    }
    cout<<c;
    return 0;
}