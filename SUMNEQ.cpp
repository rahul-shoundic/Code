#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,n,j,count=0;
	cin>>n;
	 if(n==1)
	 {
	    cout<<'0';
	    exit;
	 }
	 else{
	 
	for(i=1; i<n;i++)
	{
	    for(j=1; j<n; j++)
	    {
	       ;
	        if((i+j)==n)
	        count++;
	    }
	}
	cout<<count;
	 }
	return 0;
}
