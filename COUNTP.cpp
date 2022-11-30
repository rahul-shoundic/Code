#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    int even=0,odd=0,m;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	    cin>>m;
	    if(m%2==0)
	         even++;
	    else
	         odd++;
	    }
	    
	    if(odd%2==0  && odd!=0)
	    cout<<"YES\n";
	    
	    else
	    cout<<"NO\n";
	    
	}
	return 0;
}
