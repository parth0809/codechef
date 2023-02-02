#include<bits/stdc++.h>

# define mod 1000000009;

using namespace std;

long long unsigned int d[1000001];
int main()
{
    int t;
    cin>>t;
    d[0]=1;
    d[1]=1;
    for(int i=2;i<1000001;i++)
    {
        d[i]=(i*(d[i]%1000000007))%1000000007;
    }
    while(t--)
    {
        long long sum=0;
        int n;
        cin>>n;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum=(sum+(d[x]%1000000007))%1000000007;
        }
        cout<<sum<<endl;
    }
    return 0;
}