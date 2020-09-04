//Gorakh kumar Gupta
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
	       int a[n],b[n];
	       for(int i=0;i<n;i++)
	       {
	              cin>>a[i];
	       }
	       sort(a,a+n);
	       for(int i=0;i<n;i++)
	       {
	              b[i]=abs(a[i]-a[(i+1)%n]);
	       }
	       sort(b,b+n);
	       cout<<b[0]<<endl;
	}
	return 0;
}
