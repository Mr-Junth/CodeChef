//Author@Junth Basnet
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int cashwithdrawl;
	float initialcash;
	cin>> cashwithdrawl;
	cin>>initialcash;
	if((initialcash>=(cashwithdrawl+0.50))&&((cashwithdrawl %5) == 0))
	{
		cout<<fixed <<setprecision(2) <<(initialcash-cashwithdrawl-0.50);
	}
	else
	{
		cout<<fixed <<setprecision(2)<<initialcash;
	}
	return 0;
} 