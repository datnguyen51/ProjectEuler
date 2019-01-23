#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int a=1, b=2, sum=2;
	while(b<4000000)
	{
		int c = a+b;
		if(c%2==0)
			sum+=c;
		a=b;
		b=c;
	}
	cout<<sum<<endl;
	return 0;
}