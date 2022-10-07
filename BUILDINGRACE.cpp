#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	float x,y;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>x>>y;
	    if((a/x)>(b/y))
	    cout<<"Chefina\n";
	    else if((a/x)<(b/y))
	    cout<<"Chef\n";
	    else
	    cout<<"Both\n";
	}
	return 0;
}
