#include<iostream>
using namespace std;

int Sum(const int& a, const int& b)
{
	return a + b;
}

int Sub(const int& a, const int& b)
{
	return a - b;
}

int main()
{
	cout << "Sum : " << Sum(1, 2)<<endl;
	cout << "Sub: " << Sub(2, 1) << endl;
}