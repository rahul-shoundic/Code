#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    (x>(10*y))?cout<<"YES":cout<<"NO";
	    cout<<endl;
	    
	}
	return 0;
}
