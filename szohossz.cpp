#include "iostream"
int main()
{
	int a=1;
	int n=0;
	while(a!=0)
	{
		n+=1;
		a=a<<1;
	}
	std::cout<<"Megoldas:"<<n<<"\n";
}
