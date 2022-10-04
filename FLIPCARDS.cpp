#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    if(n==x || x==0)
	    cout<<'0'<<endl;
	    else if(x<(n-x))
	    {
	        cout<<x<<endl;
	    }
	    else{
	        cout<<n-x<<endl;
	    }
	}
	return 0;
}
