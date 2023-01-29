#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    ((a+b)==c)?cout<<"YES":cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
