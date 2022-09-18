#pragma once
#include"Certificate.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Employee
{
protected:
	string ID, Name, Birthday, Email, Phone;
	int Type, Count;
	vector <Certificate> certificate;
public:
	
	Employee(){}
	Employee(string id, string name, string birthday, string email, string phone)
		:ID(id), Name(name), Birthday(birthday), Email(email), Phone(phone)
	{}
	string getID()
	{
		return ID;
	}
	string getName()
	{
		return Name;
	}
	string getBirthday()
	{
		return Birthday;
	}
	string getEmail()
	{
		return Email;
	}
	string getPhone()
	{
		return Phone;
	}
	void setType(int type)
	{
		Type = type;
	}
	int getType()
	{
		return Type;
	}
	void setCount(int count)
	{
		Count = count;
	}
	int getCount()
	{
		return Count;
	}
	void setCTFC(Certificate ctfc)
	{
		certificate.push_back(ctfc);
	}
	vector<Certificate> getCTFC()
	{
		return certificate;
	}
	virtual void AddInfor()
	{
		int n_cer;
		string cer_id, cer_name, cer_rank, cer_date;
	nameAgain:
		try
		{
			cin.ignore();
			cout << "Enter Name: ";
			getline(cin, Name);
			Check_Name(Name);
		}
		catch (const char* error)
		{
			cout << error << endl;
			goto nameAgain;
		}
	emailAgain:
		try
		{
			cout << "Enter Email: ";
			getline(cin, Email);
			Check_Email(Email);
		}
		catch (const char* error)
		{
			cout << error << endl;
			goto emailAgain;
		}
	phoneAgain:
		try
		{
			cout << "Enter phone: ";
			getline(cin, Phone);
			Check_Phone(Phone);
		}
		catch(const char* error)
		{
			cout << error << endl;
			goto phoneAgain;
		}
		cout << "Enter ID: ";	
		getline(cin, ID); 
		cout << "Enter birhtday: ";
		getline(cin, Birthday);
		cout << "Enter number of certificate :";
		cin >> n_cer; cout << endl;
		cin.ignore();
		for (int i = 0; i < n_cer; i++)
		{
			cout << "Certificate " << i + 1 << ": " << endl;
			cout << "Certificate ID: "; getline(cin, cer_id);
			cout << "Certificat name: "; getline(cin, cer_name);
			cout << "Certificat rank: "; getline(cin, cer_rank);
			cout << "Certificat date: "; getline(cin, cer_date);
			Certificate certificate(cer_id, cer_name, cer_rank, cer_date);
			setCTFC(certificate);
		}
			
	}
	virtual void ShowInfor()
	{
		cout << "\nName: " << Name;
		cout << "\nID: " << ID;
		cout << "\nBirthday: " << Birthday;
		cout << "\nEmail: " << Email;
		cout << "\nPhone: " << Phone;
		cout << "\nNumber of certificate: " << getCTFC().size() << ": ";
		for (int i = 0; i < getCTFC().size(); i++)
		{
			cout << "Certificate " << i + 1 << ": " << endl << endl;
			cout << "Certificate ID: " << getCTFC()[i].get_C_ID() << endl;
			cout << "Certificat name: " << getCTFC()[i].get_C_Name() << endl;
			cout << "Certificat rank: " << getCTFC()[i].get_C_Rank() << endl;
			cout << "Certificat date: " << getCTFC()[i].get_C_Date() << endl;
		}
	}
	void Check_Name(string name)
	{
		for (int i = 0; i < name.length(); i++)
		{
			if (name.length() == 0)
				throw "Invalid name !";
			if ((name[i] < 97 && name[i] > 90) || (name[i] < 65 && name[i] != 32) || name[i] > 122)
			{
				throw "Invalid name !";
			}
		}
	}
	
	void Check_Phone(string Phone)
	{
		if (Phone[0] != 0 && Phone.length() != 10)
		{
			throw "Invalid phone !";
		}
		else
		{
			for (int i = 0; i < Phone.length(); i++)
			{

				{
					if (Phone[i] < '0' && Phone[i] > 9)
						throw "Invalid phone !";
				}
			}
		}
	}
	void Check_Email(string email)
	{
		int dem1 = 0;
		int dem2 = 0;
		for (int i = 0; i < email.length(); i++)
		{
			if (email[i] == '@')
				++dem1;
			if (email[i] == '.')
				++dem2;
		}
		if (dem1 != 1 || dem2 != 1)
				throw "Invalid email !";
		else
			for(int i=0;i<email.length();i++)
			{
				if ((email[i] < '@' && email[i] > '9') || (email[i] < '0' && email[i] != '.') || (email[i] > 'Z' && email[i] < 'a') || email[i] > 'z')
					throw "Invalid email !";
				else if (email[0] == '@' || email[email.length() -1 ] == '@' || email[0] == '.' || email[email.length() -1 ] == '.')
					throw "Invalid email !";
			}
	}
};

