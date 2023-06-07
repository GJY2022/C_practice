#include<iostream>
#include<stdio.h>

using namespace std;
class Agg
{
private:
	int i = 0;
public:
	Agg()
	{
		cout << "Agg::Agg()" << endl;
	}
	~Agg()
	{
		cout << "Agg::~Agg()" << endl;
	}
};

class Bgg:Agg
{
private:
	int j = 0;
public:
	Bgg()
	{
		cout << "Bgg::Bgg()" << endl;
	}
	~Bgg()
	{
		cout << "Bgg::~Bgg()" << endl;
	}
};

int main(int argc, char* argv[])
{
	Bgg bgg;
	cout << 5 * -3 << endl;
	printf("%d\n", 5 * -3);
	getchar();
	return 0;
}