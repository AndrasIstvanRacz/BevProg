#include"std_lib_facilities.h"
int main()
{
	int a;
	int b;	
	cout<<"Adja meg az a szamot:";	
	cin>>a;
	cout<<"Adja meg az b szamot:";
	cin>>b;
	if(a==0 || b==0)
	{
		cout<<"A csere 0 szam eseten nem vegrehajthato"<<"\n";
	}	
	else if(a>b) 	
	{		
		b=b*a;
		a=b/a;
		b=b/a;
		cout<<"a: "<< a <<"\n";
		cout<<"b: "<< b << "\n";
	}
	else if(a<=b) 	
	{		
		a=a*b;
		b=a/b;
		a=a/b;
		cout<<"a: "<< a <<"\n";
		cout<<"b: "<< b << "\n";
	}
}
}}}}}}
	
