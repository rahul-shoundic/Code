#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i,n,k;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n>>k;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	      cin>>arr[i];
	      if(arr[i]>k)
	      count++;
	    } 
	    
	    cout<<count<<endl;
	}
	return 0;
}
