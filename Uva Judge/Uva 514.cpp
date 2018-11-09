#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int tren[1000];
    int size;

    cin >> size;
    cout << endl;
    
    while(true)
    {
        cin >>tren[0];
        cout<<endl; 

        if(tren[0]!=0)
        {
        	for (int i=1; i < size; i++) 
			{
				cin >> tren[i];
			}
            int vagon = 1, pos_vagon = 0;
			stack<int> estacion;
			while (vagon <= size)
			{
				estacion.push(vagon);

				while (!estacion.empty() && estacion.top() == tren[pos_vagon])
				{
					estacion.pop();
					pos_vagon++;
					if (pos_vagon >= size)
					{
						break;
					}
				}
				vagon++;

			} 
			if (estacion.empty())
			{ 
				cout << "Yes" <<endl;
			}
			else 
			{
				cout << "No" <<endl;
			}
        }
        
        else
        {
            cout<<endl;
            break;
        }
        
    }
    
    return 0;
}
