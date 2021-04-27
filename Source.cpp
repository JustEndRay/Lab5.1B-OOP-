#include <iostream>
#include "LongLong.h"

#include <exception>;
#include <stdexcept>;

int main()
{
	bool init;
	LongLong A, B;
	do
	{
		try
		{
			init = true;
			cin >> A;
		}
		catch (bad_exception& e)
		{
			init = false;
			cerr << e.what();
		}
	} while (!init);
	cout << A << endl;
	cin >> B;
	cout << B;

	if (A > B) { cout << "A>B" << endl; }
	else { cout << "A!>B" << endl; }
	if (A < B) { cout << "A<B" << endl; }
	else { cout << "A!<B" << endl; }
	if (A == B) { cout << "A=B" << endl; }
	else { cout << "A!=B" << endl; }
	++A; cout << "++a " << endl << A;
	--A; cout << "--a " << endl << A;

	A++; cout << "a++ " << endl << A;
	A--; cout << "a-- " << endl << A;


	return 0;
}