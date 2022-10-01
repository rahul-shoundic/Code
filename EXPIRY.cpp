#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	float n,m,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m>>k;
	    if((n/m)<=k)
	    cout<<"Yes\n"<<endl;
	    else
	    cout<<"No\n";
	    
	}
	return 0;
}
