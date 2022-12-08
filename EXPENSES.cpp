#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,in;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    in=pow(2,x);
	    while(n>0)
	    {
	        in=in-(in/2);
	        n--;
	    }
	    cout<<in<<endl;
	    
	}
	return 0;
}
