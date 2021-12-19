#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct Node
{
	string name;
	Node* p{};
};

Node* add(Node** top, int d, string name);
Node* del(Node** top);

int main()
{
	setlocale(0, "Ukrainian");
	string names[10] = {"Mark","Elisabeth","William","Jeffrey","Christopher","Jessica","Annis","Anna","Edward","Emma"};
	Node* pend = NULL;
	Node* pbeg = add(&pend, 1, names[0]);
	Node* pv = pbeg;

	for (int i = 0; i < 10; i++)
	{
		cout << "Пасажир  | " << names[i] << " -- прибув до мiжнародного аеропорту" << endl;
		add(&pend, i, names[i]);
	}

	cout << "            ___________________________________________________________________ " << endl;
	cout << "            | Flight  |   Departure   | Scheduled | Counter | Gate |  Status  | " << endl;
	cout << "            ------------------------------------------------------------------- " << endl;
	cout << "Прибув рейс | FV 9263 | KYIV - MOSCOW |   20:15   |   7-8   |   3  | Check-in | " << endl;
	cout << "            ------------------------------------------------------------------- " << endl;

	for (int i = 0; i < 8; i++)
	{
		cout << "Пройшов посадку на рейс FV 9263  --  " << pbeg -> name << endl;
		pbeg = pbeg->p;
	}
	cout << "\n\tВ аеропорту залишились:" << endl;
	pv = pbeg;
	while (pv)
	{
		cout << "\t\t"; cout << pv->name << endl;
		pv = pv->p;
	}
	return 0;
}

Node* add(Node** pend, int d, string name)
{
	Node* pv = new Node;
	pv->name = name;
	pv->p = NULL;
	if (*pend)
		(*pend)->p = pv;
	*pend = pv;
	return pv;	
}

Node* del(Node** pbeg) {
	Node* temp = *pbeg;
	Node* pv = *pbeg;
	*pbeg = (*pbeg)->p;
	delete pv;
	return temp;
}
