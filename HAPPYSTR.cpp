#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string ch;
	int i,n,t,count;
	cin>>t;
	while(t--)
	{
	    cin>>ch;
	    count=0;
	
     for(i=0;i<ch.length();i++){
	        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' ){
	            count++;
	           
	        }
	        else{
	            if(count>2){
	                break;
	            }
	            else{
	                  count=0; 
	            }
	          
	        }
	    }
	    
	    if(count>2) cout<<"Happy" <<endl;
	    else cout << "Sad"<<endl;
	
	}
	return 0;
}
