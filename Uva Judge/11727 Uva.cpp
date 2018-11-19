#include <queue>
#include<algorithm>
#include <iostream>
#include <cstdio>
int main()
{
	int _cases,n,cont=0,num=0,a;
	scanf("%d", &_cases);
	while (_cases>0)
	{
		if (_cases == 0)
			break;
		cont++;
		std::priority_queue<int>pq;


		//Lee lo que venga despues de ingresar el tamaño y arma el queue
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &a);
			// el a es para ordenarlo teniendo el "mayor" al ultimo
			pq.push(a);
		}
		pq.pop();
		printf("Case %d: %d\n", cont, pq.top());
		_cases--;
	}
	return 0;
}
