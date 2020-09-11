//Gorakh gupta
//with recursion and memoization


#include<bits/stdc++.h>
using namespace std;
int knapsacks(int wt[],int val[],int W,int n)
{

    int  t[n+1][W+1];
    memset(t,-1,sizeof(t));
    if(n==0 || W==0)
        return 0;
    if(t[n][W]!=-1)
        return(t[n][W]);
    if(wt[n-1]<=W)
        return t[n][W]=max(val[n-1]+knapsacks(wt,val,W-wt[n-1],n-1) ,knapsacks(wt,val,W,n-1)) ;
    else if(wt[n-1]>W)
        return t[n][W]=(knapsacks(wt,val,W,n-1) );
}
int main()
{

    int n;
    cin>>n;
    int wt[n];
    for(int i=0;i<n;i++)
        cin>>wt[i];
    int val[n];
    for(int i=0;i<n;i++)
        cin>>val[i];
    int W;
    cin>>W;
    cout<<knapsacks(wt,val,W,n)<<endl;
}
