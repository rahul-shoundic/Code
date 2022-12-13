#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int n1=n,d,rev=0;
	    while(n1>0)
	    {
	        d=n1%10;
	        rev=rev*10 +d;
	        n1=n1/10;
	    }
	    if(rev==n)
	    cout<<"wins";
	    else
	    cout<<"loses";
	    cout<<endl;
	}
	return 0;
}
