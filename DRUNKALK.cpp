#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,k,i;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>k;
	    for(i=1;i<=k;i++)
	    {
	        if((i%2)!=0)
	        count=count+3;
	        else
	        count--;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
