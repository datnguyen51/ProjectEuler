#include <bits/stdc++.h>
using namespace std;
int numb[1000];
int main()
{
	int sum = 0;
	for(int i=1; i<=20; i++)
		cin>>numb[i];
	for(int i=20; i<=90; i+=10)
	{
		for(int j=0; j<10; j++)
		{
			if((i+j)%10==0)
			{
				if((i+j)/10 == 8 || (i+j)/10 == 3 || (i+j)/10 == 4 || (i+j)/10 == 5)
					numb[i+j] = numb[(i+j)/10] + 1;
				else if((i+j)==20)
					numb[i+j] = numb[(i+j)/10] + 3;
				else
					numb[i+j] = numb[(i+j)/10] + 2;
			}
			else
				numb[i+j] = numb[i] + numb[j];
		}	
	}
	for(int i=100; i<=1000; i+=100)
	{
		if(i%1000==0)
				numb[i] = numb[i/1000] + 8;
		else
		{
			for(int j=0; j<100; j++)
			{
				if((i+j)%100==0)
					numb[i+j] = numb[(i+j)/100] + 7;
				else
					numb[i+j] = numb[i] + numb[j] + 3;
			} 
		}
	}
	cout<<"--------------"<<endl;
	for(int i=1; i<1001; i++)
		sum += numb[i];
	cout<<sum<<endl;
	return 0;
}