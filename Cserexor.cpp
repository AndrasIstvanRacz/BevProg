#include"std_lib_facilities.h"
int main()
{
	int a;
	int b;	
	cout<<"Adja meg az a szamot:";	
	cin>>a;
	cout<<"Adja meg az b szamot:";
	cin>>b;
	a^=b;
	b^=a;
	a^=b;
	cout<<"a: "<< a <<"\n";
	cout<<"b: "<< b << "\n";
}
