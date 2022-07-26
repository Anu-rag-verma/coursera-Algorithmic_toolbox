#include<iostream>
using namespace std;
int main(){
    long m;
    cin>>m;
    long count=0;
    count=count+m/10;
    m=m%10;
    count=count+m/5;
    m=m%5;
    count=count+m;
    cout<<count;
    return 0;
}