#include <bits/stdc++.h>
using namespace std;
bool check(long int n)
{
	int count=0;
	for(long long int i=1; i<=sqrt(n); i++)
		if(n%i==0)
			count+=2;
	if(count >= 500)
		return true;
	return false;
}
int main()
{
	long long int n=0;
	for(long long int i=1; ;i++)
	{
		if(check(n))
			break;
		else
			n +=i ;
	}
	cout<<n<<endl;
	return 0;
}