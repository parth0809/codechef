#include<bits/stdc++.h>

using namespace std;
int gcdofarray(vector<int>&vec,int idx)
{
    if (idx == vec.size() - 1) {
        return vec[idx];
    }
    int a = vec[idx];
    int b = gcdofarray(vec, idx + 1);
    return __gcd(
        a, b);
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        vector<int>vec;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            vec.push_back(x);
        }
        int hcf=gcdofarray(vec,0);
        
    }
    return 0;
}