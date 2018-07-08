// Cstu_login.cpp: 实现文件
//

#include "stdafx.h"
#include "librarymanagementsystem.h"
#include "Cstu_login.h"
#include "afxdialogex.h"
#include "Cstu_main_dlg.h"


// Cstu_login 对话框

IMPLEMENT_DYNAMIC(Cstu_login, CDialogEx)

Cstu_login::Cstu_login(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_stu, pParent)
{

}

Cstu_login::~Cstu_login()
{
}

void Cstu_login::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cstu_login, CDialogEx)
	ON_BN_CLICKED(IDOK, &Cstu_login::OnBnClickedOk)
END_MESSAGE_MAP()


// Cstu_login 消息处理程序


void Cstu_login::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString stuname;
	CString stupwd;
	this->GetDlgItemText(IDC_EDIT1, stuname);
	this->GetDlgItemText(IDC_EDIT2, stupwd);
	if (stuname == "1"&&stupwd == "1") 
	{
		Cstu_main_dlg dlg;
		dlg.setinfo(stuname);
		dlg.DoModal();
	}
	else
	{

	}
	CDialogEx::OnOK();
}
