#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin>>n;

    priority_queue<int, vector<int>, greater<int> > q; //greater-> palabra reservada que devuelve el numero mayor

    for(int i=1;i<=n;i++)
	{
        int x;
        cin>>x;
        q.push(x);
    }
	int total = 0;
	int costo = 0;
	
    while (q.size() > 1)
    {
        total = q.top();
        q.pop();
        total += q.top();
        q.pop();
        costo += total;
        q.push(total);
    }

    cout<<costo;

return 0;
}
