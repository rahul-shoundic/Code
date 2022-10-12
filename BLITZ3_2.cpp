#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int t,n,a,b,tn;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a>>b;
	    tn=2*(180+n) -a-b;
	    cout<<tn<<endl;
	}
	return 0;
}
