#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>x>>y;
	    if(a==b)
	    cout<<"YES"<<endl;
	    else if(a<b && (a+x)>=b)
	    cout<<"YES"<<endl;
	    else if(a>b && (b+y)>=a)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
