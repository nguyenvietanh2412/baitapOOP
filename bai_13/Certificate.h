#pragma once
#include<iostream>
#include<string>
using namespace std;

class Certificate
{
private:
	string Cer_ID, Cer_Name, Cer_Rank, Cer_Date;
public:
	Certificate(){}
	Certificate(string cer_id, string cer_name, string cer_rank, string cer_date)
		: Cer_ID(cer_id), Cer_Name(cer_name), Cer_Rank(cer_rank), Cer_Date(cer_date)
	{
		
	}
	string get_C_ID()
	{
		return Cer_ID;
	}
	string get_C_Name()
	{
		return Cer_Name;
	}
	string get_C_Rank()
	{
		return Cer_Rank;
	}
	string get_C_Date()
	{
		return Cer_Date;
	}
	~Certificate(){}
};

