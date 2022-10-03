#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    if(z%x==0 && z%y==0)
	    cout<<"ANY\n"<<endl;
	    
	    else if(z%x==0)
	    cout<<"CHICKEN\n"<<endl;
	    
	    else if(z%y==0)
	    cout<<"DUCK\n"<<endl;
	    
	    else
	    cout<<"NONE\n"<<endl;
	}
	return 0;
}
