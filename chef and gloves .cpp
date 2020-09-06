//Gorakh kumar gupta
//IIIT RANCHI





#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	       int n;
	       cin>>n;
	      long long  int a[n],g[n];
	       for(long long int i=0;i<n;i++)
	       cin>>a[i];
	       for(long long int i=0;i<n;i++)
	       cin>>g[i];
	       long long int x=0,y=0;
	       for(long long int i=0;i<n;i++)
	       {
	              if(a[i]>g[i])
	            {  x=1;
	            break;
	            }
	              
	       }
	       	       for(long long int i=0;i<n;i++)
	       {
	              if(a[i]>g[n-1-i])
	            {  y=1;
	            break;
	            }
	              
	       }
	       if(x==0 && y==0)
	       cout<<"both"<<endl;
	       else if(x==1 && y==1)
	       cout<<"none"<<endl;
	       else if(x==1 && y==0)
	       cout<<"back"<<endl;
	       else if(x==0 && y==1)
	       cout<<"front"<<endl;
	}
	return 0;
}
