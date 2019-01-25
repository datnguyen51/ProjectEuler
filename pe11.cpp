#include <bits/stdc++.h>
using namespace std;
long int a[20][20];
long int Diagonally()
{
	long int mult;
	long int max = 0;

	//cheo chinh
	for(int i=0; i<16; i++)
	{
		mult = 1;
		for(int j=0; j<4; j++)
			mult =  mult * a[i+j][i+j];
		if(mult>max)
			max = mult;
	}

	//cheo phu
	for(int i=19; i>2; i--)
	{
		mult = 1;
		for(int k=0; k<4; k++)
			mult =  mult * a[19-(i-k)][i-k];
		if(mult>max)
			max = mult;
	}

	//cheo duoi phai
	for(int i=1; i<17; i++)
		for(int j=19; j>2+i; j--)
		{
			mult = 1;
			for(int k=0; k<4; k++)
				mult =  mult * a[19-(j-k)+i][j-k];
			if(mult>max)
				max = mult;
		}

	//cheo tren trai
	for(int j=18; j>2; j--)
		for(int i=0; i<j-2; i++)
		{
			mult = 1;
			for(int k=0; k<4; k++)
				mult =  mult * a[k+i][j-i-k];
			if(mult>max)
				max = mult;
		}

	//cheo duoi trai
	for(int i=1; i<17; i++)
		for(int j=0; j<17-i; j++)
		{
			mult = 1;
			for(int k=0; k<4; k++)
				mult =  mult * a[k+i+j][j+k];
			if(mult>max)
				max = mult;
		}

	//chep tren phai
	for(int j=1; j<17; j++)
		for(int i=0; i<17-j; i++)
		{
			mult = 1;
			for(int k=0; k<4; k++)
				mult =  mult * a[k+i][j+k+i];
			if(mult>max)
				max = mult;
		}
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