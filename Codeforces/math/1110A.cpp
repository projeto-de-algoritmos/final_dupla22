#include<bits/stdc++.h>

using namespace std;

#define long_int long long int
long_int power(long_int ,long_int);

int main(void)
{	
	long_int b,n,k;
	b = 0;
	cin >> b >> k;
	for(size_t a = 1; a <= k; a++)
	{
		long_int tmp;
		cin >> tmp;
		n += tmp * power(b,(k-a)); 	
	}
	cout << (n&1  ? "odd\n" : "even\n");
	return EXIT_SUCCESS;
}
long_int power(long_int base,long_int exp)
{
	long_int ret = 1;
	while(exp)
	{
		if(exp & 1)
			ret *= base;
		base *= base;
		exp >>=1;
	}
	return ret;
}
/*
 * https://codeforces.com/contest/1110/problem/A
 * */
