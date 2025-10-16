#include<iostream>
using namespace std;
int add(int a, int b)
{
    cout<<"sum is "<<a+b<<endl;
}
void add(int a,int b,int c)
{
	cout<<"sum is "<<a+b+c<<endl;
}
int add(int a,int b,int c,int d)
{
	cout<<"sum is "<<a+b+c+d<<endl;
}
int main()
{
	add(10,20);
	add(10,20,30);
	add(10,20,30,40);
	return 0;
}
