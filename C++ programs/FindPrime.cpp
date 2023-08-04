# include<iostream>
using namespace std;

int main2()
{
	int n,i,count=0;
	cout<<"Enter n value: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		
		}
	}
	if(count==2)
	
		cout<<n<<"It is a prime number";
	else
		cout<<n<<"Not a prime number";
		
	
	return 0;
}
