#include <iostream>
using namespace std;

class Test
{
private:
	int data = 0;
public:
	Test()
	{

	}
	void cinData()
	{
		cout << "Add Test data:\t";
		cin >> data;
	}
	void printData()
	{
		cout << "Your test data:\t";
		cout << data << endl;
	}
	~Test()
	{

	}
};

int main()
{

	Test dataTest;
	dataTest.cinData();
	dataTest.printData();

	return 0;
}