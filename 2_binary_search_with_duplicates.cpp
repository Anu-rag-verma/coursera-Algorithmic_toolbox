#include<iostream>
using namespace std;

int search(long int* arr,int start,int last,long int k){
    int mid=(start+last)/2;
    if(arr[mid]==k){
        while(mid>0 && arr[mid-1]==k ){
            mid--;
        }
    return mid;
    }
    else if(start>=last){
        return -1;
    }
    else if(k>arr[mid]){
    search(arr,mid+1,last,k);    
    }
    else if(k<arr[mid]){
        search(arr,start,mid-1,k);
    }   
}

int main(){
    int n;
    cin>>n;
    long int arr[n];
    int i=0; 
    while(i<n){
        cin>>arr[i];
        i++;
    }
    int k;
    cin>>k;
    long int check[k];
    i=0;
    while(i<k){
        cin>>check[i];
        cout<<search(arr,0,n-1,check[i])<<" ";
        i++;
    }
    return 0;
}