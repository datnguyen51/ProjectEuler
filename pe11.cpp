#include <bits/stdc++.h>
using namespace std;
long int a[20][20];
long int Diagonally()
{
	long int mult;
	long int max = 0;
	for(int i=0; i<16; i++)
	{
		mult = 1;
		for(int j=0; j<4; j++)
		{
			mult =  mult * a[i+j][i+j];
			if(mult>max)
				max = mult;
		}
	}
	for(int i=0; i<16; i++)
	{
		for(int j=18; j>=3; j--)
		{
			mult = 1;
			for(int k=0; k<4; k++)
			{
				mult =  mult * a[i+1][j-k];
				// if(mult>max)
					max = mult;
			}
		}
	}
	// for(int i=0; i<20; i++)
	// {
	// 	for(int j=1; j; j--)
	// 	{
	// 		mult = 1;
	// 		for(int k=0; k<4; k++)
	// 		{
	// 			mult =  mult * a[i+k][j-k];
	// 			if(mult>max)
	// 				max = mult;
	// 		}
	// 	}
	// }
	return max;
}
long int Row()
{
	long int mult;
	long int max=0;
	for(int i=0; i<20; i++)
	{
		for(int j=0; j<16; j++)
		{
			mult=1;
			for(int k=0; k<4; k++)
			{
				mult = mult * a[i][k+j];
				if(mult>max)
					max=mult;
			}
		}
	}
	return max;
}
long int Col()
{
	long int mult;
	long int max=0;
	for(int i=0; i<20; i++)
	{
		for(int j=0; j<16; j++)
		{
			mult=1;
			for(int k=0; k<4; k++)
			{
				mult = mult * a[k+j][i];
				if(mult>max)
					max=mult;
			}
		}
	}
	return max;
}
int main()
{
	for(int i=0; i<20; i++)
		for(int j=0; j<20; j++)
			cin>>a[i][j];
	cout<<Row()<<endl;
	cout<<Col()<<endl;
	cout<<Diagonally()<<endl;
	return 0;
}