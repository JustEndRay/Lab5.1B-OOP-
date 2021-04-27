#include "LongLong.h"
long LongLong::GetLONG1() const
{
	return LONG1;
}
long LongLong::GetLONG2() const
{
	return LONG2;
}
void LongLong::SetLONG1(long value)
{
	LONG1 = value;
}
void LongLong::SetLONG2(long value)
{
	LONG2 = value;
}
LongLong::LongLong() { SetLONG1(0); SetLONG2(0); }
LongLong::LongLong(long LONG1 = 0, long LONG2 = 0)
{
	this->LONG1 = LONG1;
	this->LONG2 = LONG2;
}
LongLong::LongLong(const LongLong& A)
{
	LONG1 = A.GetLONG1();
	LONG2 = A.GetLONG2();
}

LongLong& LongLong::operator=(const LongLong& A)
{
	LongLong(A.GetLONG1(), A.GetLONG2());
	return *this;
}

ostream& operator << (ostream& out, const LongLong& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, LongLong& A) throw(const char*, bad_exception&)
{
	cout << "Enter a long1 "; in >> A.LONG1;
	if (A.LONG1<0)
		throw bad_exception();
	cout << "Enter a long2 "; in >> A.LONG2;
	if (A.LONG2 < 0)
		throw bad_exception();
	cout << endl;
	return in;
}
LongLong::operator string() const
{
	stringstream ss;
	ss << "long1= " << this->GetLONG1() << endl;
	ss << "long2= " << this->GetLONG2() << endl;
	return ss.str();
}

LongLong& LongLong::operator++ ()
{
	this->SetLONG1(this->GetLONG1() + 1);
	return *this;
}
LongLong& LongLong::operator -- ()
{
	this->SetLONG1(this->GetLONG1() - 1);
	return *this;
}
LongLong LongLong::operator ++ (int)
{
	LongLong t(*this);
	this->SetLONG2(this->GetLONG2() + 1);
	return t;
}
LongLong LongLong::operator -- (int)
{
	LongLong t(*this);
	this->SetLONG2(this->GetLONG2() - 1);
	return t;
}

bool operator>(const LongLong A, const LongLong B)
{
	if (A.GetLONG1() > B.GetLONG1()) { return 1; }
	if (A.GetLONG1() == B.GetLONG1())
	{
		if (A.GetLONG2() > B.GetLONG2()) { return 1; }
	}
	if (A.GetLONG1() < B.GetLONG1()) { return 0; }
}

bool operator<(const LongLong A, const LongLong B)
{
	if (A.GetLONG1() < B.GetLONG1()) { return 1; }
	if (A.GetLONG1() == B.GetLONG1())
	{
		if (A.GetLONG2() < B.GetLONG2()) { return 1; }
	}
	if (A.GetLONG1() > B.GetLONG1()) { return 0; }
}

bool operator==(const LongLong A, const LongLong B)
{
	if (A.GetLONG1() == B.GetLONG1() && A.GetLONG2() == B.GetLONG2()) { return 1; }
	else { return 0; }

}