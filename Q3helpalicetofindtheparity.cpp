#include <iostream>
using namespace std;
int main() {
	int L;
	int R;
	cin>>L;
	cin>>R;
	int X=0;
	int i;
	for(i=L;i<=R;i++)
	{
		X=X^i;
	}
	if(X%2==0)
	{
		cout<<" even";
	}
	else
	{
		cout<<" odd";
	}
	return 0;
}
