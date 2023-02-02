#include<bits/stdc++.h>

using namespace std;

int a[100001],b[100001],c[100001];
bool sortsec(const pair<int,int>&a,const pair<int,int>&b)
{
    return(a.second<b.second);
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,k;
        cin>>n>>k;
        vector <pair<int,int>>v;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for (int i =0;i<n;i++)
        v.push_back(make_pair(a[i],b[i]));
        map<int,int>m;
        sort(v.begin(),v.end(),sortsec);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(m[v[i].first]<=0)
            {
                sum+=v[i].second;
                m[v[i].first]++;
                k--;
            }
            if(k==0)
            break;
            
        }
        if(k==0)
        cout<<sum;
        else
        cout<<-1;
        cout<<endl;
    }
    
    return 0;
}