#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    long long x;
    cin>>n;
    vector<long long>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<2;i++){
        int flag=0;
        for(int j=1;j<n-i;j++){
            long long temp;
            if(v[flag]  >  v[j]){
            temp=v[flag];
            v[flag]=v[j];
            v[j]=temp;
            }
            flag++;
        }
    }  
    long long result;
    result=v[n-1]*v[n-2];
    cout<<result;
    return 0;
}