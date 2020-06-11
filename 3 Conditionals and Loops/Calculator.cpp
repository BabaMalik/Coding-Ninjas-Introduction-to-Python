#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	while(n!=6)
	{
		switch(n){
			case 1: cin>>a>>b;
				cout<<a+b;
				break;
			case 2: cin>>a>>b;
				cout<<a-b;
				break;
			case 3: cin>>a>>b;
				cout<<a*b;
				break;
			case 4: cin>>a>>b;
				cout<<a/b;
				break;
			case 5: cin>>a>>b;
				cout<<a%b;
				break;
			default : cout<<"Invalid Operation";
		}
		cin>>n;
	}
}
