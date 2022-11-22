#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ((n%10)==0)?cout<<n/10:cout<<(n/10)+1;
	    cout<<endl;
	}
	return 0;
}
