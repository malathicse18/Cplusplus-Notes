# include<iostream>
using namespace std;

int main()
{
	int i,n,sum=0;
	cout<<"Enter n: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of"<<n<<"value is"<<sum;
	return 0;
}
