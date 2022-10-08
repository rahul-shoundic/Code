#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,d[5000],i,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    count=0;
	    for(i=0;i<n;i++)
	    {
	    cin>>d[i];
	    if(d[i]>=1000)
	    count++;
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}
