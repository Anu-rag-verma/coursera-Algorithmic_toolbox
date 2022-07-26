#include<iostream>
using namespace std;
void sort(long arr[],int n){
    for(int i=1;i<n;i++){
        long current =arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=current;
   }
}

int main(){
    int n;
    cin>>n;
    long arr[n];
    long brr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    sort(arr,n);
    sort(brr,n);
    long sum=0;
    for(int i=0;i<n;i++){
        sum=sum+brr[i]*arr[i];
    }
    cout<<sum;
    return 0;
}