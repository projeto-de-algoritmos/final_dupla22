#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a,b;
		cin >> a >> b;
		(a % b == 0) ? cout << 0 : cout <<  b - a % b;
		cout << endl;
	}
	return 0;
}
/*
 * https://codeforces.com/problemset/problem/1328/A
 * */
