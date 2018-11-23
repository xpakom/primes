/*GENERADOR DE NÚMEROS PRIMOS por Francisco Muñoz Gómez*/

#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	cout << "init" << endl;
	vector<unsigned long long  int> primos;
	unsigned long long int contador;
	int divisores;
	ofstream n;
	n.open("primos.txt",ios::out);
	primos.push_back(1);
	n << 1 << " ";
	primos.push_back(2);	
	n << 2 << " ";
	
	for (contador = 3;contador<ULLONG_MAX;contador++)
	{
		//cout << contador << " ";
		primos.push_back(contador);
		divisores = 0;	
		for (int i=0;i<primos.size();i++)
		{
			if(contador%primos[i] == 0)
				divisores++;
			if(divisores>2)
				break;
		}
		if (divisores<=2)
		{
			n << contador << " ";
			cout << contador << " ";
		}
		else
			primos.pop_back();	
	}
	n.close();
	return 0;
}

