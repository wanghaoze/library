#pragma once
//ͼ����
#include <string>
#include <ctime>
using namespace std;
#pragma once
class Book
{
public:
	Book();
	Book(int nBookID, string strBookName, string strAuthor, string strISBN, string strPub, time_t inDate, int nTotalNum, int nLeftNum);
	int GetBookID();
	void SetBookID(int nID);
	string GetBookName();
	void SetBookName(string strName);
	string GetAuthor();
	void SetAuthor(string strAuthor);
	string GetISBN();
	void SetISBN(string strISBN);
	string GetPub();
	void SetPub(string strPub);
	string GetInDate();
	void SetInDate(string inDate);
	int GetTotalNum();
	void SetTotalNum(int nTotalNum);
	int GetLeftNum();
	void SetLeftNum(int nLeftNum);
	~Book();
private:
	int    m_nBookID;			//ID
	string m_strBookName;		//����
	string m_strAuthor;			//����
	string m_strISBN;			//ISBN
	string m_strPub;			//������
	string m_inDate;			//�������
	int    m_nTotalNum;			//����
	int    m_nLeftNum;			//����
};
