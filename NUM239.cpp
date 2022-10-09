#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,l,r,n,i;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>l>>r;
	    for(i=l;i<=r;i++)
	    {
	        n=i%10;
	        if(n==2 || n==3 || n==9)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
