#include <bits/stdc++.h>
using namespace std;
int sumOfsquare(int n)
{
	int sum=0;
	for(int i=1; i<=n; i++)
		sum+=i*i;
	return sum;
}
int squareOfsum(int n)
{
	int sum=0;
	for(int i=1; i<=n; i++)
		sum+=i;
	return sum*sum;
}
int main()
{
	cout<<squareOfsum(100)-sumOfsquare(100)<<endl;
	return 0;
}