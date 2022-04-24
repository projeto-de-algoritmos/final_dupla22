#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int q;
		set<int>s;
		cin >> q;
		for(int a = 0; a < q; a++)
		{
			int num;
			cin >> num;
			s.insert(num);
		}
		cout << s.size() << endl;
	}
	return 0;
}

/*
 * https://codeforces.com/contest/1325/problem/B
 * */
