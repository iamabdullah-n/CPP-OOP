#include <iostream>
#include "String.h"
using namespace std;

int main()
{
    String s0("Initial string");
    // constructors used in the same order as described above:
    String s1;
    String s2(s0);
    String s3(s0, 8, 3);
    String s4("A character sequence");
    String s5("Another character sequence", 12);
    String s6a(10, 'x');
    String s6b(10, 42);      // 42 is the ASCII code for '*'

    cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3
        << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6a: " << s6a
        << "\ns6b: " << s6b << '\n';

    String str("Test string");
    String str2 = str.substr(3, 5); //no need check for index out of bounds

    cout << "The value in str is: " << str << endl;
    cout << "The size of str is: " << str.length() << "\n";
    cout << "char at 5th location: " << str.at(5) << "\n";
    cout << "char at 3nd location: " << str.at(3) << "\n";
    cout << "Substring: " << str2 << "\n";

    String str3;

    char* array = new char[50];

    str3.StrCpy(str);

    cout << "\n\nstrcpy of STR and STR3 object : " << str3 << endl;

    array = str.StrTok(' ');

    cout << "strtok of STR Object with space : " << array << endl;

    String obj1("Cristiano");
    String obj2("Ronaldo");

    int i = obj1.StrCmp(obj2);

    cout << "strcmp of OBJ1 Object with OBJ2 : " << i << endl;

    array = obj1.StrCon(obj2);

    cout << "strcon of OBJ1 Object with OBJ2 : " << array << endl;

    return 0;
}
