#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if((y*100)/x >=50)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
