/*Sort the segments by their end points.
Select the point(or coordinate) corresponding to minimum end point of all segments.
Now, All the segments whose starting point are less than this selected point and whose ending points are greater than this selected point can be covered by this point.
Then print the minimum number of points.*/
#include<iostream>
using namespace std;

void sort(long long arr[],long long vw[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(vw[i]<vw[j]){
                float temp=arr[j];
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
    int n;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sort(a,b,n);
    
    long long ending=b[0];
    int count=0;
    int i=0;
    while(i<n){
        while(ending>=a[i]&&ending<=b[i]){
            i++;
        }
        ending=b[i];
        count++;
    }
    cout<<count;
    return 0;    
}