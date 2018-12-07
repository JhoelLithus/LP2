# include <iostream>
//#include <set>
#include "linked_list.h"
#include "person.h"

using namespace std;

int main()
{
	linked_list<int> lli;
	lli.insert_back(31);
	lli.insert_back(11);
	lli.insert_back(62);
	
	lli.insert_front(3);
	lli.insert_front(1);
	lli.insert_front(6);
	lli.insert_front(2);
	lli.insert_front(7);

	for(linked_list<int>::iterator it = lli.begin(); it != lli.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}


