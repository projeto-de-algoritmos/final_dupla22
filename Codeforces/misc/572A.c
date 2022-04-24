#include<stdio.h>
#include<stdlib.h>

#define ll long long int

int main(void)
{
	ll a,b,k,m;
	scanf("%lld%lld%lld%lld",&a,&b,&k,&m);
	ll *va = (ll *)calloc(a,sizeof(ll));
	ll *vb = (ll *)calloc(b,sizeof(ll));
		
	for(int i = 0; i < a;i++)
		scanf("%lld",&va[i]);
	for(int i = 0; i < b;i++)
		scanf("%lld",&vb[i]);
		
	va[k-1] < vb[b-m]?puts("YES"):puts("NO");
	
	free(vb);
	free(va);
	
	return EXIT_SUCCESS;
}

/*
 * https://codeforces.com/contest/572/problem/A
 * */
