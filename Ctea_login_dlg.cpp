// Ctea_login_dlg.cpp: 实现文件
//

#include "stdafx.h"
#include "librarymanagementsystem.h"
#include "Ctea_login_dlg.h"
#include "afxdialogex.h"
#include "Ctea_main_dlg.h"


// Ctea_login_dlg 对话框

IMPLEMENT_DYNAMIC(Ctea_login_dlg, CDialogEx)

Ctea_login_dlg::Ctea_login_dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_tea, pParent)
{

}

Ctea_login_dlg::~Ctea_login_dlg()
{
}

void Ctea_login_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Ctea_login_dlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &Ctea_login_dlg::OnBnClickedOk)
END_MESSAGE_MAP()


// Ctea_login_dlg 消息处理程序


void Ctea_login_dlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString stuname;
	CString stupwd;
	this->GetDlgItemText(IDC_EDIT1, stuname);
	this->GetDlgItemText(IDC_EDIT2, stupwd);
	if (stuname == "1"&&stupwd == "1")
	{
		Ctea_main_dlg dlg;
		dlg.setinfo(stuname);
		dlg.DoModal();
	}
	else
	{

	}
	CDialogEx::OnOK();
}
