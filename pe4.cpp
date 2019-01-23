#include <bits/stdc++.h>
using namespace std;
bool Palindrome(int n)
{
	int s = n;
	int a=0;
	while(s>0)
	{
		a = a*10 + s%10;
		s = s/10;
	}
	if(a == n)
		return true;
	return false;
}
int main()
{
	int max=0;
	for(int i=999; i>100; i--)
		for(int j=999; j>100; j--)
		{
			int s = i*j;
			if(Palindrome(s) && s>max)
				max = s;
		}
	cout<<max<<endl;
	return 0;
}