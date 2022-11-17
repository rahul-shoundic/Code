#include <iostream>
using namespace std;

int prime(int x)
{
    int i, flag=1;
    for(i=2;i<=(x/2);i++)
    {
        if(x%i==0)
        flag =0;
    }
    return flag;
}

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    int x=prime(a+b);
	    (x==1)?cout<<"Alice":cout<<"Bob";
	    cout<<endl;
	}
	return 0;
}
