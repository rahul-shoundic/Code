#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    x=(a*100)/10;
	    y=(b*100)/20;
	    if(x>y)
	      cout<<"FIRST"<<endl;
	    else if(x<y)
	       cout<<"SECOND"<<endl;
	    else
	      cout<<"ANY"<<endl;
	
	}
	return 0;
}
