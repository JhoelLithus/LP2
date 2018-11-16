#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int size;
	int tren[1000];
    int i;

        cin >> size;

        while (true)
        {
            cin >> tren[0];
            if (tren[0] == 0)
            {
                cout << endl;
                break;
            }
            for (i = 1; i < size; i++)
            {
                cin >> tren[i];
            }

            int vagon = 1, post_vagon = 0;
            stack<int> station;
            while (vagon <= size)
            {
                station.push(vagon);

                while (!station.empty() && station.top() == tren[post_vagon])
                {
                    station.pop();
                    post_vagon++;
                    if (post_vagon >= size) break;
                }

                vagon++;
            }

            if (station.empty())
			{
				cout << "Yes" << endl;	
			} 
            else
			{
				cout << "No" << endl;
			}
        }
    

    return 0;
}
