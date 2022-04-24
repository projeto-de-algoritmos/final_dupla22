#include<iostream>
using namespace std;

int main()
{
	int sigma = 0,n;
	cin >> n;
	for(int i = 0; i < n;i++)
	{
		int tmp;
		cin >> tmp;
		sigma += tmp & 1;
	}
	cout << min(sigma,n-sigma) << endl;
	return 0;
}
/*
 * https://codeforces.com/contest/1213/problem/A
 * */
