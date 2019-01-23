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
	long long int n=2;
	int dem=0;
	while(n>0)
	{
		if(IsPrime(n))
			dem++;
		if(dem==10001)
			break;
		n++;
	}
	cout<<n<<endl;
	return 0;
}