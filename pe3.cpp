#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int n)
{
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return false;
	return true;
}
int main()
{
	long int n = 600851475143;
	// int n = 13195;
	int i=2;
	while(n > 0)
	{
		if(n==1)
			break;
		if(n%i==0 && IsPrime(i))
			n = n/i;
		else
			i++;
	}
	cout<<i<<endl;
	return 0;
}