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
	       int a[26]={0};
	       vector<int>v;
	       
	       for(int i=0;i<n;i++)
	       {
	              string s;
	              cin>>s;
	              for(int i=0;i<s.length();i++)
	              {
	                     int index=s[i]-'a';
	                     a[index]++;
	              }
	       }
	       v.push_back(a[2]/2);
	        v.push_back(a[3]/1);
	         v.push_back(a[4]/2);
	          v.push_back(a[5]/1);
	           v.push_back(a[7]/1);
	            v.push_back(a[14]/1);
	            sort(v.begin(),v.end());
	            cout<<v[0]<<endl;
	}
	return 0;
}
