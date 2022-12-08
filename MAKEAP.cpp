#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>c;
	   (((a+c)%2)==0)?cout<<(a+c)/2:cout<<"-1";
	   cout<<endl;
	}
	return 0;
}
