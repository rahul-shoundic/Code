#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(y>x)
	    cout<<"PROFIT"<<endl;
	    else if(y==x)
	    cout<<"NEUTRAL"<<endl;
	    else
	    cout<<"LOSS"<<endl;
	}
	return 0;
}
