#include <bits/stdc++.h>
using namespace std;



//

// Gorakh Kumar gupta

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	       int n;
	       cin>>n;
	       int a[n],b[n];
	       for(int i=0;i<n;i++)
	       cin>>a[i];
	       for(int i=0;i<n;i++)
	       cin>>b[i];
	       sort(a,a+n);
	       sort(b,b+n);
	       int sum1=0,sum2=0;
	       for(int i=0;i<n-1;i++)
	       sum1=sum1+a[i];
	       for(int i=0;i<n-1;i++)
	       sum2=sum2+b[i];
	       if(sum1<sum2)
	       cout<<"Alice"<<endl;
	       else if(sum1>sum2)
	       cout<<"Bob"<<endl;
	       else
	       cout<<"Draw"<<endl;
	}
	return 0;
}
