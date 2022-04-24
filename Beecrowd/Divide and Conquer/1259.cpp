#include<bits/stdc++.h>

using namespace std;
#define lli  long long int;
#define lu  size_t;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL); 
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
#define INF 10000000000

int main(void)
{
	vector<int> array;
	
	int n,s;
	cin >> s;
	n = s;
	while(s--)
	{
		int t;
		cin >> t;
		array.push_back(t);
	}
	
	sort(array.begin(),array.end());
	
	for(int a = 0; a < n;a++)
	{
		if(array[a] % 2 == 0)
		{
			cout << array[a] << endl;
		}
	}
	for(int a = n-1; a >= 0;a--)
	{
		if(array[a] % 2 == 1)
		{
			cout << array[a] << endl;
		}
	}
	
	return 0;
}


/*
 * https://www.beecrowd.com.br/judge/en/problems/view/1259
 * */
