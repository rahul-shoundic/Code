#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x<3)
	    cout<<"LIGHT";
	    else if(x>=3 && x<7)
	    cout<<"MODERATE";
	    else
	    cout<<"HEAVY";
	    
	    cout<<endl;
	}
	return 0;
}
