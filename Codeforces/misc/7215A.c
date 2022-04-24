#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
	int n,contador = 0;
	string s;
	vector <int>v;
	cin >> n >> s;

	for(size_t a = 0; a <= s.size();a++)
	{
		if(s[a] == 'B')
			contador += 1;
		else
		{
			if(contador != 0)
			{
				v.push_back(contador);
				contador = 0;
			}
		}
	}
	cout << v.size() << endl;
	if(v.size())
	{
		vector<int>::iterator it = v.begin();
		while(it != v.end())
		{
			cout << *it << " ";
			++it;
		}
	}
	cout << endl;
		
	return 0;
}

/*
 * https://codeforces.com/contest/721/problem/A
 * */
