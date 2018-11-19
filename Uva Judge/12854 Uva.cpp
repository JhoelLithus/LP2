#include <queue>
#include<algorithm>
#include <iostream>

int main(){
	int _a[5],_b[5],n;
	char result = 'Y';
	
		while (scanf("%d",&n)!=EOF)
		{
			result = 'Y';
			_a[0] = n;
		
			for (int cont = 1; cont < 5; cont++) {
				scanf("%d", &n);
				_a[cont] = n;

			}
			for (int cont = 0; cont < 5; cont++) {
				scanf("%d", &n);
				_b[cont] = n;

			}
			for (int cont = 0; cont < 5; cont++)
				if (_b[cont] == _a[cont]) {
					result = 'N';
					break;
				}
			std::cout << result << std::endl;
		}
		

	return 0;
}
