#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    if(x>y && x>z)
	        cout<<"Setter\n";
	    else if(y>z && y>x)
	    cout<<"TESTER\n";
	    else
	    cout<<"Editorialist\n";
	}
	return 0;
}
