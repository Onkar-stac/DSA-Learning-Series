#include <iostream>
using namespace std;
int main()
{
	int n,t,rem=1,rev=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		while(t>0)
		{
			rem = t%10;
			rev = rev*10+rem;
			t=t/10;
		}
		cout<<rev<<endl;
		rev = 0;
	}
	return 0;
}
