#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,fact=0;
	cin>>n;
	for(int i=2;i<sqrt(n)+1;i++)
	{
		if(n%i==0)
		{
			fact++;
			cout<<"not prime"<<endl;
			
		}
		
	}
	if(fact==0)
	{
		cout<<"prime "<<n<<endl;
	}
}
