#include <fstream>
#include <string>
#include <iostream>
using namespace std;
class Suhogruz
{
	string port;
	int cargo1{};
	string company;
	int cargo2{};

	void Set(string port, int cargo1, string company, int cargo2)
	{
		this->port = port;
		this->cargo1 = cargo1;
		this->company = company;
		this->cargo2 = cargo2;
	}	
	string GetName()
	{
		return port;
		return company;
	}
	int GetScores()
	{
		return cargo1;
		return cargo2;
	}
	void Print()
	{
		if (cargo1 > cargo2)
		{
			ofstream file("there.txt", ios::binary | ios::app);
			{
				file << "Пункт -- " << port << " -- Вантаж -- " << cargo1 << "(т.)" << " -- Компанiя -- " << company << " -- Водотонажнiсть судна -- " << cargo2 << "(т.)" << endl;
				file.close();
				cout << " Пункт --> " << port << " -- Вантаж --> " << cargo1 << "(т.)" << " -- Компанiя --> " << company << " -- Водотонажнiсть судна --> " << cargo2 << "(т.)" << endl;
			}
		}
	}
	friend int main();
};
int main()
{
	setlocale(LC_ALL, "Russian");
	int kilkist = 0;
	string str;
	ifstream in("in.txt");
	cout << "ATTENTION________________________________Судна з перенавантаженням!_______________________________________ATTENTION" << endl;
	if (in)
	{
		while (!in.eof())							
		{
			getline(in, str, '\n');				
			kilkist++;								
		}
		Suhogruz* P = new Suhogruz[kilkist];
		in.clear();								
		in.seekg(0);								
		for (int i = 0; i < kilkist; i++)
		{
			string port, company;
			int a, c;
			in >> port;							
			in >> a;								
			in >> company;							
			in >> c;								
			P[i].Set(port, a, company, c);				
		}
		{														
			for (int i = 0; i < kilkist - 1; i++)
				for (int j = i + 1; j < kilkist; j++)
					if (P[i].GetName() > P[j].GetName())
					{
						swap(P[i], P[j]);						
					}
			for (int i = 0; i < kilkist; i++)
				P[i].Print();									
			in.close();										
			delete[]P;												
		}
		cout << "ATTENTION________________________________Висока ймовiрнiсть потонути!_______________________________________ATTENTION" << endl;
	}
	else
	{
		cout << "File open error";
	}
	return 0;
}
