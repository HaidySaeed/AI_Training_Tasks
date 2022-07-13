

#include <iostream>
using namespace std;
#include <list>

void showList(list <int> g)
{
	list <int> ::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}
int main()
{
	list <int> l1;
	list <int> l2;

	for (int i = 0; i < 10; i++) {
		l1.push_back(i); //fill list 1 with multiples of 2
		l2.push_back(i * 3); //fill list 2 with multiples of 3
	}

	cout << "content of list 1 is " << endl;
	showList(l1);
	cout << endl;
	cout << "content of list 2 is " << endl;
	showList(l2);
	cout << endl;
     
	cout << "content After reverse at list 1";

	//reverse the first list
	l1.reverse();
	showList(l1);
	cout << endl;
	cout << "content After reverse at list 2";
	l1.reverse();
	showList(l2);
	cout << endl;

	cout << "content After Sort List 1";
	//sort the first list
	l1.sort();
	showList(l1);
	cout << endl;
	cout << "content After Sort List 2";
	//sort the first list
	l1.sort();
	showList(l2);
	cout << endl;

	//removing an element from both sides
	cout << "content After removing front element at list 2";
	l2.pop_front();
	showList(l2);
	cout << endl;
	cout << "content After removing back element at list 2";
	l2.pop_back();
	showList(l2);
	cout << endl;

	//adding an element from both sides
	cout << "content After adding back element at list 2";
	l2.push_back(10);
	showList(l2);
	cout << endl;
	cout << "content After adding front element at list 2";
	l2.push_front(20);
	showList(l2);
	cout << endl;

	


	return 0;
}




