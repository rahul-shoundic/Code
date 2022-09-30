#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>a>>b;
	    if(a<b)
	        cout<<"First\n";
	 
	    else if(a>b)
	       cout<<"second\n";
	       
	   else if(a==b)
	   cout<<"ANY\n";
	
	}
	return 0;
}
