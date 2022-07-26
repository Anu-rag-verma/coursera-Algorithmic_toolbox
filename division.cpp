#include <iostream>
#include<stack>
using namespace std;

int main() {
	// your code goes here
    int n;
    
    stack<int>st;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        st.push(a);
    }
    while(!st.empty()){
        cout<<st.top()<<"a";
        st.pop();
    }
	return 0;
}
