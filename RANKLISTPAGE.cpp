#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,n;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    n=x/25;
	    if((x%25)==0)
	    cout<<n<<endl;
	    else
	    cout<<n+1<<endl;
	}
	return 0;
}
