#include <iostream>
using namespace std;
	int gcd(int a, int b) {
	while(b != 0) {
		int gcd = a % b;
		a = b;
		b = gcd;
	}
	return a;
}
int main() {
	int t;
	cin>>t;
	int n;
	for(int i = 0; i < t; i++) {
		cin>>n;
		int count = 0;
		for(int i = 1; i * i <= n; i++) {
			if(n % i == 0) {
				int j = n / i;
				if(gcd(i, j) == 1) {
					if(i == j) count+= 1;
					else count+= 2;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
