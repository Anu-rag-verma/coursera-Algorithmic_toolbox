#include<iostream>
#include <iomanip>
using namespace std;

void selectionsort(double arr[],double vw[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]<arr[j]){
                double temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                temp=vw[j];
                vw[j]=vw[i];
                vw[i]=temp;
            }
        }
    }
}

int main(){
    int n,w;
    double vi,wi;
    cin>>n>>w;
    double arr[n];
    double vw[n];
    int i=0;
    while(i<n){
        cin>>vi>>wi;
        arr[i]=vi/wi;
        vw[i]=wi;
        i++;
    }
    selectionsort(arr,vw,n);
    double value=0.0;
    double weight=0.0;
    int k=0;
    while(weight<w){
        weight=weight+vw[k];
        if(weight<=w){
            value=value+(vw[k]*arr[k]);
        }
        else if(weight>w){
            if(k==0)value=value+arr[k]*w;
            else  value=value+(arr[k]*(w-weight));
        }    
        k++;
    }
    std::cout << std::fixed << std::setprecision(4) << value <<endl;
    return 0;
}