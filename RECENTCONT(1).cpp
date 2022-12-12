#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	string ch;
	cin>>t;
	while(t--)
	{
	    int s=0,l=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ch;
	        if(ch=="START38")
	         s++;
	        if(ch=="LTIME108")
	          l++;
    	}
	cout<<s<<" "<<l<<endl;
	}
	return 0;
}
