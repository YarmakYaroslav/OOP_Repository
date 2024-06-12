#include <iostream>
#include <string>

using namespace std;

class X
{
	static int n;
	static string StudentName;

public:
	static int getN() { return n; }
	static string getClass() { return StudentName; }
	X() { n++; }
};

int X::n = 0;

string X::StudentName = "My Student";

int main()
{
	X Ivan, Igor, Alex;
	cout << X::getN() << " objects of Student \"" << X::getClass() << "\"" << endl;

	return 0;
}