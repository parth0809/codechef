#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<char>v;
	    for(int i=0;i<n;i++)
        {
            char s;cin>>s;
            v.push_back(s);
        }
        bool x=true;
	    if(n%2!=0)
	    cout<<"NO";
	    else
	    {
            sort(v.begin(),v.end());
            for(auto it=v.begin();it!=v.end();it+=2)
            {
                if(*it!=*(it+1))
                {cout<<"NO";
                x=false;
                break;
            }}
            if(x==true)
            cout<<"YES";
            cout<<endl;
	    }
    }
    return 0;
}