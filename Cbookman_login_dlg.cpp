// Cbookman_login_dlg.cpp: 实现文件
//

#include "stdafx.h"
#include "librarymanagementsystem.h"
#include "Cbookman_login_dlg.h"
#include "afxdialogex.h"
#include "Cbookmam_main_dlg.h"


// Cbookman_login_dlg 对话框

IMPLEMENT_DYNAMIC(Cbookman_login_dlg, CDialogEx)

Cbookman_login_dlg::Cbookman_login_dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_bookman, pParent)
{

}

Cbookman_login_dlg::~Cbookman_login_dlg()
{
}

void Cbookman_login_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cbookman_login_dlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &Cbookman_login_dlg::OnBnClickedOk)
END_MESSAGE_MAP()


// Cbookman_login_dlg 消息处理程序


void Cbookman_login_dlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString stuname;
	CString stupwd;
	this->GetDlgItemText(IDC_EDIT1, stuname);
	this->GetDlgItemText(IDC_EDIT2, stupwd);
	if (stuname == "1"&&stupwd == "1")
	{
		Cbookmam_main_dlg dlg;
		dlg.setinfo(stuname);
		dlg.DoModal();
	}
	else
	{

	}
	CDialogEx::OnOK();
}
