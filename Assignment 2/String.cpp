#include "String.h"

char* regrow(char*, int, char); //DEFINITION OF REGROW FUNCTION
void copyArray(char*, int, char*); //DEFINITION OF COPY ARRAY FUNCTION

//DEFAULT CONSTRUCTOR
String::String()
{
	//cout << "DEFAULT CONSTRUCTOR CALLED...\n";
	cString = new char();
	*cString = '\0';
}

//COPY CONSTRUCTOR
String::String(const String& obj)
{
	//cout << "COPY CONSTRUCTOR CALLED...\n";
	int length = 0;

	for (int i = 0; obj.cString[i] != '\0'; i++, length++);

	cString = new char[length + 1];

	for (int i = 0; obj.cString[i] != '\0'; i++)
	{
		cString[i] = obj.cString[i];
	}
	cString[length] = '\0';
}

//DEFAULT PARAMETERIZED CONSTRUCTOR
String::String(const char* arr)
{
	//cout << "DEFAULT PARAMERTERIZED CONSTRUCTOR CALLED...\n";
	int length = 0;

	for (int i = 0; arr[i] != '\0'; i++, length++);

	cString = new char[length + 1];

	for (int i = 0; arr[i] != '\0'; i++)
	{
		cString[i] = arr[i];
	}
	cString[length] = '\0';
}

//OVERLOADED CONSTRUCTOR FOR SUBSTRING
String::String(const String& obj, int start, int c)
{
	//cout << "OBJECT PARAMETERIZED CONSTRUCTOR CALLED...\n";
	cString = new char();
	int size = 0;
	int count = 0;

	for (int i = 0; obj.cString[i] != '\0'; i++)
	{
		if (i == start)
		{
			for (int j = start; count != c; i++, j++, count++)
			{
				if (obj.cString[j] == '\0')
					break;

				cString = regrow(cString, size, obj.cString[j]);
				size++;
			}
		}
	}
	cString = regrow(cString, size, '\0');
}

//COPYING THE FIRST N CHARACTERS BY CONSTRUCTOR
String::String(const char* arr, int characters)
{
	//cout << "FIRST N CHARACTERS CONSTRUCTOR CALLED...\n";
	cString = new char[characters + 1];

	for (int i = 0; i < characters; i++)
	{
		if (arr[i] == '\0')
			break;

		cString[i] = arr[i];
	}
	cString[characters] = '\0';
}

//SETTING THE N CHARACTERS OF CSTRING WITH CHARACTER GIVEN
String::String(int n, char c)
{
	//cout << "N CHARACTERS CONSTRUCTOR CALLED...\n";
	cString = new char[n + 1];

	for (int i = 0; i < n; i++)
	{
		cString[i] = c;
	}
	cString[n] = '\0';
}

//FINDING LENGTH OF CSTRING
int String::length()
{
	int length = 0;

	for (int i = 0; cString[i] != '\0'; i++, length++);

	return length;
}

//FINDING CHARACTER AT GIVEN POSITION
char String::at(int pos)
{
	for (int i = 0; cString[i] != '\0'; i++)
	{
		if (i == pos)
		{
			return cString[pos]; //RETURNING THE CHARACTER IF IT EXISTS IN CSTRING
		}
	}

	return '\0'; //RETURNING THE NULL CHARACTER IF IT DOES NOT EXIST IN CSTRING
}

//RETURNING THE OBJECT WITH SUBSTRING FROM THE OTHER OBJECT'S CSTRING
String String::substr(int start, int c)
{
	String temp;

	int size = 0;
	int count = 0;

	for (int i = 0; cString[i] != '\0'; i++)
	{
		if (i == start)
		{
			for (int j = start; count != c; j++, count++)
			{
				if (cString[j] == '\0')
					break;

				temp.cString = regrow(temp.cString, size, cString[j]);
				size++;
			}
		}
	}
	temp.cString = regrow(temp.cString, size, '\0');

	return temp;
}

//OPERATOR OVERLOADING OF OSTREAM
ostream& operator << (ostream& os, const String& obj)
{
	os << obj.cString;

	return os;
}

//STRCPY FUNCTION FOR TWO OBJECTS CONTENT
void String::StrCpy(const String& obj)
{
	int length = 0;

	for (int i = 0; obj.cString[i] != '\0'; i++, length++);

	cString = new char[length + 1];

	for (int i = 0; obj.cString[i] != '\0'; i++)
	{
		cString[i] = obj.cString[i];
	}
	cString[length] = '\0';
}

//STRLEN FUNCTION FOR AN OBJECT CONTENT
int String::StrLen()
{
	int length = 0;

	for (int i = 0; cString[i] != '\0'; i++, length++);

	return length;
}

//STRTOK FUNCTION FOR THE TOKENIZATION OF CSTRING
char* String::StrTok(char c)
{
	int size = 0;
	char* temp = new char();

	for (int i = 0; cString[i] != c; i++)
	{
		if (cString[i] == '\0')
		{
			break;
		}

		temp = regrow(temp, size, cString[i]);
		size++;
	}

	temp = regrow(temp, size, '\0');

	return temp;
}

//STRMP FUNCTION FOR THE COMPARISON OF TWO OBJECTS CONTENT
int String::StrCmp(const String& obj)
{
	int temp = 0;

	int len1 = 0, len2 = 0;

	bool isEqual = true;

	for (int i = 0; cString[i] != '\0'; i++, len1++);

	for (int i = 0; obj.cString[i] != '\0'; i++, len2++);

	if (len1 != len2)
	{
		temp = len1 - len2;

		return temp;
	}

	else
	{
		for (int i = 0; cString[i] != '\0' || obj.cString[i] != '\0'; i++)
		{
			if (cString[i] == obj.cString[i])
			{
				isEqual = true;
			}
			else
			{
				temp = cString[i] - obj.cString[i];
				return temp;
			}
		}

		if (isEqual == true)
		{
			temp = 0;
			return temp;
		}
	}
}

//STRCON FUNCTION FOR THE CONCATINATION OF CSTRING
char* String::StrCon(const String& obj)
{
	int size = 0;
	char* temp = new char();

	for (int i = 0; cString[i] != '\0'; i++)
	{
		temp = regrow(temp, size, cString[i]);
		size++;
	}

	temp = regrow(temp, size, ' ');
	size++;

	for (int i = 0; obj.cString[i] != '\0'; i++)
	{
		temp = regrow(temp, size, obj.cString[i]);
		size++;
	}

	temp = regrow(temp, size, '\0');
	
	return temp;
}

//REGROW OF ARRAY FOR SUBSTRING CONSTRUCTOR
char* regrow(char* cString, int size, char c)
{
	char* newArray = new char[size + 1];

	copyArray(cString, size, newArray);

	delete[] cString;
	cString = nullptr;

	newArray[size] = c;

	return newArray;
}

//COPYING OLD ARRAY TO NEW ARRAY FOR REGROW
void copyArray(char* oldArray, int size, char* newArray)
{
	for (int i = 0; i < size; i++)
	{
		newArray[i] = oldArray[i];
	}
}

//DESTRUCTOR
String::~String()
{
	delete[] cString;
	cString = nullptr;
}