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
	
	int n;
	cin >> n;
	cin.ignore();

    while (n--)
    {
		string str;
        int i = 0;
        int left = 0;
        int right = 0;

        getline(cin, str);

        while (str[i] != '\0')
        {

            if (str[i] == '<')
                left++;

            if (str[i] == '>' && left > right)
                right++;
            ++i;
        }
        
        if (left <= right)
			cout << left << endl;
        else
            cout << right << endl;
    }
	
	return 0;
}


/*
 *https://www.beecrowd.com.br/judge/en/problems/view/1069
 * */
