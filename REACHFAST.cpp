#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,k;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>x>>y>>k;
	    if(x<y)
	    {
	        while(x<y)
	        {
	            x=x+k;
	            count++;
	        }
	        
	    }
	    else if(x>y)
	    {
	        while(x>y)
	        {
                y=y+k;
                count++;
	        }
	    }
	    else
	    count=0;
	    
	    cout<<count<<endl;
	    
	    
	    
	}
	return 0;
}
