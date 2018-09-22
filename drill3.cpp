#include "std_lib_facilities.h"

int main()
{
	cout << "Enter your name (followed by 'enter')\n";
	string your_name; 
	cin >> your_name; 
	cout << "Enter the name of the person you want to write to (followed by 'enter')\n";
	string first_name; 
	cin >> first_name; 
	cout << "Please enter the name of your friend you want to call you (followed by 'enter')\n";
	string friend_name;
	cin >> friend_name;
	char friend_sex='0';
	cout << "Please enter f if your friend female or m if your friend male (followed by 'enter')\n";
	cin >> friend_sex;
	int age;
	cout << "Enter your friend age (followed by 'enter')\n";
	cin >> age;
	if (age<=0 || age>=110)
	{
		simple_error("you're kidding!");
	}	
	
	
	if (friend_sex=='f')
	{
		cout << "\nDear " << first_name << ",\n\n";
		cout << "How are you? I am fine. I miss you.\n";
		cout << "Have you seen " << friend_name << " lately?\n";			
		cout << "If you see " << friend_name <<" please ask her to call me.\n";
	}
	else if (friend_sex=='m')
	{	
		cout << "\nDear " << first_name << ",\n\n";
		cout << "How are you? I am fine. I miss you.\n";
		cout << "Have you seen " << friend_name << " lately?\n";		
		cout << "If you see " << friend_name <<" please ask him to call me.\n";
	}
	else
	{
		cout << "\nAre you kiding me! I said f or m!\n";
		return 0;
	};
	cout <<	"I hear you just had a birthday and you are " << age << " years old.\n";
	if (age<12)
	{
		cout << "Next year you will be " << age+1 << ".\n";
	}
	else if (age==17)
	{
		cout << "Next year you will be able to vote.\n";
	}
	else if (age>70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}
	cout << "\nYour sincerely,\n\n" << your_name << "\n";
}

