#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
        bool var=true;
        for(int i=0;i<n/2;i++)
        {if(s[i]!=s[n/2+i])
        {
            var=false;
            break;
        }
        }
        if(var==false)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

	}
	return 0;
}
