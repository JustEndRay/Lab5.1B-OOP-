#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "MyException.h"

#pragma pack(1)

using namespace std;

class LongLong
{
	long LONG1;
	long LONG2;
public:
	long GetLONG1() const;
	long GetLONG2() const;

	void SetLONG1(long value);
	void SetLONG2(long value);

	LongLong();
	LongLong(long, long);
	LongLong(const LongLong&);

	LongLong& operator = (const LongLong&);
	friend ostream& operator << (ostream&, const LongLong&) throw(const char*, bad_exception&);
	friend istream& operator >> (istream&, LongLong&);
	operator string() const;

	LongLong& operator ++ ();
	LongLong& operator -- ();
	LongLong operator ++ (int);
	LongLong operator -- (int);

	friend bool operator > (const LongLong A, const LongLong B);
	friend bool operator < (const LongLong A, const LongLong B);
	friend bool operator == (const LongLong A, const LongLong B);
};

