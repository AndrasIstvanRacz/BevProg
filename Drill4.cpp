#include "std_lib_facilities.h"

int main()
{
	double number;
	string unit;
	bool L =true;
	vector<double> v;
	while(L)
	{
		cout << "Write a number: " ;
		cin >> number ;
		cout << "Type a unit (cm, m, in, ft): ";
		cin >> unit;

			while(unit!="cm" && unit!="m" && unit!="in" && unit!="ft")
			{
				cout << "Incorrect unit.\n";				
				cout << "Type a unit (cm, m, in, ft): ";
				cin >> unit;
			}
		
		if(unit=="m")
			v.push_back(number);
		else if(unit=="cm")
			v.push_back(number/100);
		else if(unit=="in")
			v.push_back((number*2.54)/100);
		else if(unit=="ft")
			v.push_back((number*12*2.54)/100);

		string Q;
		cout << "You want to give another number (y/n)? ";
		cin >> Q;
		if (Q=="n")
			L=false;
		else if (Q=="y")
			L=true;	
	}
	double n;
	for(int i=0; i<v.size(); i++)
	{
		n=n+v[i];
	}
	sort(v);
	cout << "The smallest value: " << v[0] << "\n" << "The largest value: " << v.back() << "\n";
	cout << "The sum of values: " << n <<"\n";
}
