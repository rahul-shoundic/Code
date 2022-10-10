#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,d,n;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n;
	    while(n>0)
	    {
	        d=n%10;
	        n=n/10;
	        if(d==4)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
