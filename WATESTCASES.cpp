#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for (int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    string b;
	    cin>>b;
	    int max=100;
	    for (int i=0; i<n; i++){
	        if(b[i]=='0' && a[i]<=max){
	            max=a[i];
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
