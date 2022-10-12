#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=n-1;i>0;i--)
	    {
	        a[i]=a[i]-a[i-1];
	        
	    }
	    for(i=0;i<n;i++)
	    cin>>b[i];
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>=b[i])
	        count++;
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}
