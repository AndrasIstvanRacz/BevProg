# include "my.h"
# include "std_lib_facilities.h"

int foo;

void print_foo()
{
cout << foo;
}
void print(int i)
{
cout << i;
}
void swap_v(int, int){
int temp;
int a;
int b;
temp=a;
a=b;
b=temp;
}
void swap_r(int&, int&){
int temp;
int a;
int b;
temp=a;
a=b;
b=temp;
}
void swap_cr(const int&, const int&){
int temp;
int a;
int b;
temp=a;
a=b;
b=temp;
}
