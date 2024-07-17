//高精度乘法

#include<iostream>
#include<string>
using namespace std;

string multiply(string a, int b)
{
	string c;
	int len = a.length();
	int carry = 0;//进位
	for (int i = 0; i < len || carry; i++)//有进位也要继续
	{
		if (i < len)carry += ((int)a[len-i-1]-48) * b;
		c += (carry % 10)+'0';
		carry /= 10;
	}
	reverse(c.begin(), c.end());
	return c;
}
int main()
{
	cout<<multiply("987", 2);
}
