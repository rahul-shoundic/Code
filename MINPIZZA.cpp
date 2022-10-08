#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,n;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    float z=(float)(n*x)/4;
	    int y=(n*x)/4;
	    if(z==y)
	    cout<<y<<endl;
	    else
	    cout<<y+1<<endl;
	}
	return 0;
}
