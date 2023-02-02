#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        int dis=abs(x-y);
        int ans=dis/k;
        int rem=dis%k;
        if(rem!=0)
        ans++;
        cout<<ans<<endl;
    }
    return 0;
}