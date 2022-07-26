#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1][2];
    arr[0][0]=-1;//no of operations
    arr[0][1]=0;//track
    
    
    for(int i=1;i<=n;i++){        
        int d3=n+2,d2=n+2,d=n+2;
                if(i%3==0)  d3=arr[i/3][0];
                if(i%2==0) d2=arr[i/2][0];
                d=arr[i-1][0];
                if(d2<=d3 && d2<=d){
                arr[i][0]=arr[i/2][0]+1;
                arr[i][1]=i/2;
                }    
                else if(d3<=d2 && d3<=d){
                arr[i][0]=arr[i/3][0]+1;
                arr[i][1]=i/3;
                }  
                else{   
                arr[i][0]= 1+ arr[i-1][0];
                arr[i][1]=i-1; 
                }
    }
    vector<int> v;
    int i=n;
    while(i>0){
        v.push_back(i);
        i=arr[i][1];
    }
    cout<<arr[n][0]<<endl; 
    for(int j=v.size()-1;j>0;j--){
        cout<<v[j]<<" ";
        
    }  
    cout<<n; 
    return 0;

}