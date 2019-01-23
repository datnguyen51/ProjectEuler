#include <bits/stdc++.h>
using namespace std;
bool check(int a, int b, int c)
{
	if(a*a + b*b == c*c)
		return true;
	return false;
}
int main()
{
	for(int i=1; i<1000; i++)
		for(int j=i+1; j<1000; j++)
			for(int k=j+1; k<1000; k++)
				if(i+j+k==1000 && check(i,j,k))
					cout<<i*j*k<<endl;

	return 0;
}