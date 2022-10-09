#include <iostream>
using namespace std;
#include<string.h>
#include<cstring>

int main() {
	// your code goes here
	int t,n,i;
	char ss[10] ="START38", sl[10]="LTIME108",s[9];
	cin>>t;
	while(t--)
	{
	    int cs=0,cl=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	       cin>>s;
	       if(strcmp(ss,s)==0)
	       cs++;
	       else
	       cl++;
	    }
	    cout<<cs<<" "<<cl<<endl;
	    
	}
	return 0;
}
