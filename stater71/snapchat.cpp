#include<bits/stdc++.h>

using namespace std;
int a[1001],b[1001];
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int ans=0,currstreak=0;
        for(int i=0;i<n;i++)
        {
            if((a[i]==0)||(b[i]==0))
            currstreak=0;
            else
            {
                currstreak++;
            }
            ans=max(currstreak,ans);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}