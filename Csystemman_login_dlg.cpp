// Csystemman_login_dlg.cpp: 实现文件
//

#include "stdafx.h"
#include "librarymanagementsystem.h"
#include "Csystemman_login_dlg.h"
#include "afxdialogex.h"
#include "Csystemman_main_dlg.h"


// Csystemman_login_dlg 对话框

IMPLEMENT_DYNAMIC(Csystemman_login_dlg, CDialogEx)

Csystemman_login_dlg::Csystemman_login_dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_systemman, pParent)
{

}

Csystemman_login_dlg::~Csystemman_login_dlg()
{
}

void Csystemman_login_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Csystemman_login_dlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &Csystemman_login_dlg::OnBnClickedOk)
END_MESSAGE_MAP()


// Csystemman_login_dlg 消息处理程序


void Csystemman_login_dlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString stuname;
	CString stupwd;
	this->GetDlgItemText(IDC_EDIT1, stuname);
	this->GetDlgItemText(IDC_EDIT2, stupwd);
	if (stuname == "1"&&stupwd == "1")
	{
		Csystemman_main_dlg dlg;
		dlg.setinfo(stuname);
		dlg.DoModal();
	}
	else
	{

	}
	CDialogEx::OnOK();
}
