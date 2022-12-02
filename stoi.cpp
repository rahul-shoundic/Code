#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int bnToDl(string n)
{
    string num = n;
    int dec_value = 0;
 
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}
 
int main()
{
    int t,s,x,b,y,i;
    cin>>t;
    while(t--)
    {
        int max=0;
        cin>>s;
        char bin[s];
        cin>>bin;

        x = bnToDl(bin);
        for(y=1;y<=s;y++)
        {
            b=(x/(pow(2,y)));
            int max1= x xor b;
            if(max1>max)
            { i=y;       
              max=max1;
            }
        }
        cout<<i<<endl;
    }
    return 0;
} 