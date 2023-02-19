#include <iostream>
using namespace std;

class Card{
	char* cardNumber;
protected:
	char* ownerName;
public:
	char* expiryDate;
};

class Calling_card : public Card
{
	int	  amount;
	char* companyName;
	int	  PIN;

public:
	void  setexpiryDate(const char* x)
	{
		int l;
		for (l = 0; x[l] != '\0'; l++);
		expiryDate = new char[l];
		for (int i = 0; i < l; i++)
		{
			expiryDate[i] = x[i];
		}
		expiryDate[l] = '\0';
	}
	void  setamount(int x)
	{
		amount = x;
	}
	void  setcompanyName(const char* x)
	{
		int l;
		for (l = 0; x[l] != '\0'; l++);
		companyName = new char[l];
		for (int i = 0; i < l; i++)
		{
			companyName[i] = x[i];
		}
		companyName[l] = '\0';
	}
	void  setownerName(const char* x)
	{
		int l;
		for (l = 0; x[l] != '\0'; l++);
		ownerName = new char[l];
		for (int i = 0; i < l; i++)
		{
			ownerName[i] = x[i];
		}
		ownerName[l] = '\0';
	}
	void  setPIN(int x)
	{
		PIN = x;
	}
	int	  getamount()
	{
		return amount;
	}
	int   getPIN()
	{
		return PIN ;
	}
	char* getexpiryDate()
	{
		char* t;
		int l;
		for (l = 0; expiryDate[l] != '\0'; l++);
		t = new char[l];
		for (int i = 0; i < l; i++)
		{
			t[i] = expiryDate[i];
		}
		t[l] = '\0';
		return t;
	}
	char* getcompanyName()
	{
		char* t;
		int l;
		for (l = 0; companyName[l] != '\0'; l++);
		t = new char[l];
		for (int i = 0; i < l; i++)
		{
			t[i] = companyName[i];
		}
		t[l] = '\0';
		return t;
	}
	char* getownerName()
	{
		char* t;
		int l;
		for (l = 0; ownerName[l] != '\0'; l++);
		t = new char[l];
		for (int i = 0; i < l; i++)
		{
			t[i] = ownerName[i];
		}
		t[l] = '\0';
		return t;
	}
};

class ID_card : protected Card
{
	char* CNIC;
	int   age;
public:
	void  setexpiryDate(const char* x)
	{
		int l;
		for (l = 0; x[l] != '\0'; l++);
		expiryDate = new char[l];
		for (int i = 0; i < l; i++)
		{
			expiryDate[i] = x[i];
		}
		expiryDate[l] = '\0';
	}
	void  setage(int x)
	{
		age = x;
	}
	void  setCNIC(const char* x)
	{
		int l;
		for (l = 0; x[l] != '\0'; l++);
		CNIC = new char[l];
		for (int i = 0; i < l; i++)
		{
			CNIC[i] = x[i];
		}
		CNIC[l] = '\0';
	}
	void  setownerName(const char* x)
	{
		int l;
		for (l = 0; x[l] != '\0'; l++);
		ownerName = new char[l];
		for (int i = 0; i < l; i++)
		{
			ownerName[i] = x[i];
		}
		ownerName[l] = '\0';
	}
	int   getage()
	{
		return age;
	}
	char* getCNIC()
	{
		char* t;
		int l;
		for (l = 0; CNIC[l] != '\0'; l++);
		t = new char[l];
		for (int i = 0; i < l; i++)
		{
			t[i] = CNIC[i];
		}
		t[l] = '\0';
		return t;
	}
	char* getexpiryDate()
	{
		char* t;
		int l;
		for (l = 0; expiryDate[l] != '\0'; l++);
		t = new char[l];
		for (int i = 0; i < l; i++)
		{
			t[i] = expiryDate[i];
		}
		t[l] = '\0';
		return t;
	}
	char* getownerName()
	{
		char* t;
		int l;
		for (l = 0; ownerName[l] != '\0'; l++);
		t = new char[l];
		for (int i = 0; i < l; i++)
		{
			t[i] = ownerName[i];
		}
		t[l] = '\0';
		return t;
	}
};

class Driving_license : private Card
{
	char* drivingLicenseType;
	char* issuedInCity;
public:
	void  setexpiryDate(const char* x)
	{
		int l;
		for (l = 0; x[l] != '\0'; l++);
		expiryDate = new char[l];
		for (int i = 0; i < l; i++)
		{
			expiryDate[i] = x[i];
		}
		expiryDate[l] = '\0';
	}
	void  setdrivingLicenseType(const char* x)
	{
		int l;
		for (l = 0; x[l] != '\0'; l++);
		drivingLicenseType = new char[l];
		for (int i = 0; i < l; i++)
		{
			drivingLicenseType[i] = x[i];
		}
		drivingLicenseType[l] = '\0';
	}
	void  setissuedInCity(const char* x)
	{
		int l;
		for (l = 0; x[l] != '\0'; l++);
		issuedInCity = new char[l];
		for (int i = 0; i < l; i++)
		{
			issuedInCity[i] = x[i];
		}
		issuedInCity[l] = '\0';
	}
	void  setownerName(const char* x)
	{
		int l;
		for (l = 0; x[l] != '\0'; l++);
		ownerName = new char[l];
		for (int i = 0; i < l; i++)
		{
			ownerName[i] = x[i];
		}
		ownerName[l] = '\0';
	}
	char* getissuedInCity()
	{
		char* t;
		int l;
		for (l = 0; issuedInCity[l] != '\0'; l++);
		t = new char[l];
		for (int i = 0; i < l; i++)
		{
			t[i] = issuedInCity[i];
		}
		t[l] = '\0';
		return t;
	}
	char* getdrivingLicenseType()
	{
		char* t;
		int l;
		for (l = 0; drivingLicenseType[l] != '\0'; l++);
		t = new char[l];
		for (int i = 0; i < l; i++)
		{
			t[i] = drivingLicenseType[i];
		}
		t[l] = '\0';
		return t;
	}
	char* getexpiryDate()
	{
		char* t;
		int l;
		for (l = 0; expiryDate[l] != '\0'; l++);
		t = new char[l];
		for (int i = 0; i < l; i++)
		{
			t[i] = expiryDate[i];
		}
		t[l] = '\0';
		return t;
	}
	char* getownerName()
	{
		char* t;
		int l;
		for (l = 0; ownerName[l] != '\0'; l++);
		t = new char[l];
		for (int i = 0; i < l; i++)
		{
			t[i] = ownerName[i];
		}
		t[l] = '\0';
		return t;
	}
};

int main()
{
	Calling_card c1;
	c1.setexpiryDate("10/1/2023");
	c1.setownerName("Abdullah Nadeem");
	c1.setcompanyName("Invo Zone");
	c1.setamount(30);
	c1.setPIN(9896);

	cout << "Expiry Date : " << c1.getexpiryDate() << endl;
	cout << "Owner Name : " << c1.getownerName() << endl;
	cout << "Company Name : " << c1.getcompanyName() << endl;
	cout << "Amount : " << c1.getamount() << endl;
	cout << "PIN : " << c1.getPIN() << endl;
	
	
	system("PAUSE");
	return 0;
}
