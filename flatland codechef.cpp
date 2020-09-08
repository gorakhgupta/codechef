#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[36]={0};
	for(int i=1;i<36;i++)
	a[i]=i*i;
	int t;
	cin>>t;
	while(t--)
	{
	       int n;
	       cin>>n;
	       int cnt=0;
	       while(n!=0){
	       for(int i=1;i<36;i++)
	       {
	              if(a[i]<=n && a[i+1]>n)
	              {
	                     cnt++;
	                     n=n-a[i];
	              }
	       }
	       }
	       cout<<cnt<<endl;
	}
	return 0;
}
