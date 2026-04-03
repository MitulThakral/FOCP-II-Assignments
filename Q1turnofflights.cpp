#include <iostream>
using namespace std;
int operations(string &b,int mid)
{
	int n=b.size();
	int op=0;
	int i;
	for(i=0;i<n;)
	{
		if(b[i]=='1')
		{
			op++;
			i=i+mid;
		}
		else
		{
			i++;
		}
	}
	return op;
}
int main() {
	int n,k;
	cin>>n;
	cin>>k;
	string b;
	cin>>b;
	int s=1;
	int e=n;
	int ans=n;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		if(operations(b,mid)<=k)
		{
			ans=mid;
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	cout<<ans<<endl;
}
