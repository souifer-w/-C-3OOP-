
#include <iostream>
using namespace std;
class A
{
protected:
	int a1 =65;
public:
	
	void print()
	{


		cout << "a1 is  "  << a1<< endl;
	}



};

class B : public A
{


protected:
	int a2 = 12;

public:

	void print()
	{


		cout << "a1 is  " << a1 << "a2 is " << a2 << endl;
	}


};

class c :public B
{
protected:
	int a3 =  89;
	
public:

	void sh()
	{

		cout << "  a1 = " << a1 << "  a2 =   " << a2 << "  a3 =   " << a3 << endl;
	}



};
int main()
{
	c cc;
	cc.sh();
	return 0;
}

