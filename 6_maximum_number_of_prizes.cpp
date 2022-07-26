//ultimate we have to find n , and we can do it with binary 
// just do it
#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> vec;
    long long i=1;
    while(n>0){
        if(i==1||vec.back()<n){
        vec.push_back(i);
        n=n-i;
        i++;
        }
        else{
            n=n+vec.back();
            vec.pop_back();
            vec.push_back(n);
            break;
        }
    }
    cout<<vec.size()<<endl;
    for(long long i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}