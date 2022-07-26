#include<iostream>
using namespace std;
int main(){
    long d;
    int m,n;
    cin>>d>>m>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tank=m;
    int count=0;
    long distance=0;
    int i=0;
    while(true){
        if(tank+distance>d){
            break;
        }
        while(tank+distance>=arr[i] && tank+distance<d){
            i++;
        }
        tank=m;
        if(i>1)  distance=arr[i-1];
        count++;
        if((tank+distance) < arr[i] && tank+distance<d){
            count=(-1);
            break;
        }
    }
    
    cout<<count;
    return 0;
}