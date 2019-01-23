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
	long int sum=0;
	for(int i=2; i<2000000; i++)
		if(IsPrime(i))
			sum+=i;
	cout<<sum<<endl;
	return 0;
}