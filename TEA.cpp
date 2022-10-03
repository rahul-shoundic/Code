#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z,n;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>x>>y>>z; 
	    if(x<=y)
	    cout<<z<<endl;
	    else
	    {
	        n=0;
	        while(n<x)
	        {
	            n=n+y;
	            count++;
	        }
	        cout<<count*z<<endl;
	    }
	}
	return 0;
}
