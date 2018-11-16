#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    int x;
    
    while(cin>>n)
	
   { 
   if(n==0)
   {
   		break;
   }
   		priority_queue<int, vector<int>, greater<int> > q; //greater-> palabra reservada que devuelve el numero mayor

    	for(int i=1;i<=n;i++)
		{
        
        	cin>>x;
        	q.push(x);
    	}
		int suma = 0;
		int costo = 0;
	
    	while (q.size() > 1)
    	{
       	 	suma = q.top();
        	q.pop();
        	suma += q.top();
        	q.pop();
        	costo += suma;
        	q.push(suma);
    	}

    	cout<<costo<<endl;
	}
return 0;
}
