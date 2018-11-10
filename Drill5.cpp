#include "std_lib_facilities.h"

int main()
{
	try 
	{
		int SSz = 0;
		cout << ++SSz << ". " << "Success!\n";
		cout << ++SSz << ". " << "Success!\n";
		cout << ++SSz << ". " << "Success" << "!\n";
		cout << ++SSz << ". " << "Success" << "!\n";
		int res = 7; vector<int> v(10); v[5] = res; cout << ++SSz << ". " << "Success!\n";
		vector<int> v1(10); v1[5] = 7; if (v[5]==7) cout << ++SSz << ". " << "Success!\n";
		if (1) cout << ++SSz << ". " << "Success!\n"; else cout << ++SSz << ". " << "Fail!\n";
		bool c = false; if (!c) cout << ++SSz << ". " << "Success!\n"; else cout << ++SSz << ". " << "Fail!\n";
		string s = "ape"; bool c1 = "fool"<s; if (!c1) cout << ++SSz << ". " << "Success!\n";
		string s1 = "ape"; if (s1!="fool") cout << ++SSz << ". " << "Success!\n";
		string s2 = "ape"; if (s2!="fool") cout << ++SSz << ". " << "Success!\n";
		string s3 = "ape"; if (s3<"fool") cout << ++SSz << ". " << "Success!\n";
		vector<char> v2(5); for (int i=0; i<v2.size(); ++i) ; cout << ++SSz << ". " << "Success!\n";
		vector<char> v3(5); for (int i=0; i<v3.size(); ++i) ; cout << ++SSz << ". " << "Success!\n";
		string s4 = "Success!\n"; cout << ++SSz << ". " ; for (int i=0; i<s4.length(); ++i) cout << s4[i];
		if (true) cout << ++SSz << ". " << "Success!\n"; else cout <<  ++SSz << ". " << "Fail!\n";
		int x = 2000; int c2 = x; if (c2==2000) cout <<  ++SSz << ". " << "Success!\n";
		string s5 = "Success!\n"; cout <<  ++SSz << ". " ; for (int i=0; i<10; ++i) cout << s5[i];
		vector <int> v4(5); cout << ++SSz << ". " ; for (int i=0; i<v4.size(); ++i) ; cout << "Success!\n";
		int i=0; int j = 9; while (j<10) ++j; if (j>i) cout << ++SSz << ". " << "Success!\n";
		double x1 = 2; double d = 5/(x1); if (d!=2*x1+0.5) cout << ++SSz << ". " << "Success!\n";
		string s6 = "Success!\n"; cout << ++SSz << ". " ; for (int i=0; i<=10; ++i) cout << s6[i];
		int i1=0; int j1 = 9; while (j<10) ++j; if (j>i) cout << ++SSz << ". " << "Success!\n";
		double x2 = 4; double d1 = 5/(x2-2); if (d1!=2*x2+0.5) cout << ++SSz << ". " << "Success!\n";
		cout << ++SSz << ". " << "Success!\n";
		keep_window_open();
		return 0;
	}
	catch (exception& e) 
	{
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
		}
	catch (...) 
	{
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}