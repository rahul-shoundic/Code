#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if(a==b || b==c || c==a)
	    cout<<"NO";
	    else
	    cout<<"YES";
	    cout<<endl;
	}
	return 0;
}
