#include <bits/stdc++.h>
using namespace std;
int check(long int n)
{
	long int a = n;
	int count = 0;
	while(a!=1)
	{
		if(a%2==0)
		{
			a = a/2;
			count++;
		}
		else
		{
			a = a*3 + 1;
			count++;
		}
	}
	return count;
}
int main()
{
	int max = 0;
	for(int i=1; i<1000001; i++)
		if(check(i)>max)
			max = check(i);
	for(int i=1; i<1000001; i++)
		if(check(i) == max)
		{
			cout<<i<<endl;
			break;
		}
	return 0;
}