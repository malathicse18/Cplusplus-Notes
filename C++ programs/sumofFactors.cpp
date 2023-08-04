# include<iostream>
using namespace std;

int main1()
{
	int n,i,sum=0;
	cout<<"Enter n value: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
			cout<<"Factor value of"<<i <<"is: "<<sum<<endl;
		}
	}
	return 0;
}
