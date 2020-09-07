#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
if(m<n)
    cout<<(n-m)<<endl;
else
{int cnt=0;

    while(n<m)
    {

        if(m%2==0)
        {

            m=m/2;
            cnt++;
        }
        else
        {
            m=m+1;
            cnt++;
        }
    }
    int ans=cnt+(n-m);
    cout<<ans<<endl;
}
}
