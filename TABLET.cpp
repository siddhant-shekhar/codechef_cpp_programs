#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,b,max=0;
	    cin>>n>>b;
	    while(n--){
	        int w,h,p,area;
	        cin>>w>>h>>p;
	        if(b>=p){
	            area=w*h;
	            if(area>=max){
	                max=area;
	            }
	        }
	    }
	    if(max!=0){
	        cout<<max<<endl;
	    }
	    else{
	        cout<<"no tablet"<<endl;
	    }
	}
	return 0;
}
