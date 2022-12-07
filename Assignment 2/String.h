#include <iostream>
using namespace std;

class String
{
	char* cString;

public:
	String();
	String(const String&);
	String(const char*);
	String(const String&, int, int);
	String(const char*, int);
	String(int, char);

	int length();
	char at(int);
	String substr(int, int);

	friend ostream& operator << (ostream&, const String&);

	void StrCpy(const String&);
	int StrLen();
	char* StrTok(char);
	int StrCmp(const String&);
	char* StrCon(const String&);

	~String();
};