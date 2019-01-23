#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
	for(int i=2; i<=20; i++)
		if(n%i!=0)
			return false;
	return true;
}
int main()
{
	int n=2050;
	while(n>0)
	{
		if(check(n))
			break;
		else
			n++;
	}
	cout<<n<<endl;
	return 0;
}