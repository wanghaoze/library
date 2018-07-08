// Cstu_main_dlg.cpp: 实现文件
//

#include "stdafx.h"
#include "librarymanagementsystem.h"
#include "Cstu_main_dlg.h"
#include "afxdialogex.h"


// Cstu_main_dlg 对话框

IMPLEMENT_DYNAMIC(Cstu_main_dlg, CDialogEx)

Cstu_main_dlg::Cstu_main_dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_stumaindlg, pParent)
{

}

Cstu_main_dlg::~Cstu_main_dlg()
{
}

void Cstu_main_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cstu_main_dlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &Cstu_main_dlg::OnBnClickedOk)
END_MESSAGE_MAP()


// Cstu_main_dlg 消息处理程序


void Cstu_main_dlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}

void Cstu_main_dlg::setinfo(CString str)
{
	user_info = str;
}

BOOL Cstu_main_dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CString s1 ("欢迎光临 "), s2;
	s2 = s1 + user_info;
	this->SetDlgItemText(IDC_STATIC,s2);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
