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
    int n; 
       
    while(true)
    {
		 scanf("%d",&n);
		 
		 if(n == 0)
			break;
		 
		 deque<int> cards;
		 
		 for(int i = 1; i <= n; i++)
			  cards.push_back(i);
		 
		 printf("Discarded cards: ");
		 
		 while(cards.size() > 1)
		 {
			printf("%d%s",cards.front(),cards.size() != 2 ? ", " : "\n");
			cards.pop_front();
			cards.push_back(cards.front());
			cards.pop_front();
		 }
		 printf("Remaining card: %d\n",cards.front());
    }
    return 0;
}


/*
 *https://www.beecrowd.com.br/judge/en/problems/view/1110
 * */
