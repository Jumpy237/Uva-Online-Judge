#include <bits/stdc++.h>

using namespace std;

int main()
{
	//size of farmyard, number of animals, eco-frienliness value
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int f;
		long long a,b,c,sum = 0;
		scanf("%d",&f);
		for(int i = 0; i < f; ++i)
		{
			
			scanf("%lld %ld %lld",&a,&b,&c);
			//no need for b. 
			sum += a * c;
		}
		printf("%lld\n",sum);
	}

}