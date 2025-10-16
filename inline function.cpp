#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	return (a+b);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"sum is "<<add(a,b);
}
