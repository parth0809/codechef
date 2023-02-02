#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
        int zero1=0,zero2=0,one1=0,one2=0;
        cin>>s1>>s2;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='0')
            zero1++;
            else
            one1++;
        }
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]=='0')
            zero2++;
            else
            one2++;
        }
        string s;
        int n=s1.size();
        int len=0;
        if((zero1+zero2)<=n)
        {
            for(int i=0;i<(zero1+zero2);i++)
            {
                cout<<"1";
            }
            for(int i=(zero1+zero2);i<n;i++)
            {
                cout<<"0";
            }
        }
        else
        {
                for(int i=0;i<(one1+one2);i++)
            {
                cout<<"1";
            }
            for(int i=(one1+one2);i<n;i++)
            {
                cout<<"0";
            }
        }
        cout<<endl;
	}
	return 0;
}
