//hashing
#include <bits/stdc++.h>
using namespace std;

void Majority(long int arr[], int size)
{
	unordered_map<long int,long int> major;
	for(int i = 0; i < size; i++)
		major[arr[i]]++;
	int count = 0;
	for(auto i : major)
	{
		if(i.second > size / 2)
		{
			count =1;
			cout <<1;
			break;
		}
	}
	if(count == 0)
		cout << 0;
}

int main()
{
	int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Majority(arr,n);
	return 0;
}