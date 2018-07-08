// Csystemman_main_dlg.cpp: 实现文件
//

#include "stdafx.h"
#include "librarymanagementsystem.h"
#include "Csystemman_main_dlg.h"
#include "afxdialogex.h"


// Csystemman_main_dlg 对话框

IMPLEMENT_DYNAMIC(Csystemman_main_dlg, CDialogEx)

Csystemman_main_dlg::Csystemman_main_dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_systemmanmaindlg, pParent)
{

}

Csystemman_main_dlg::~Csystemman_main_dlg()
{
}

void Csystemman_main_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Csystemman_main_dlg, CDialogEx)
END_MESSAGE_MAP()

void Csystemman_main_dlg::setinfo(CString str)
{
	user_info = str;
}


// Csystemman_main_dlg 消息处理程序


BOOL Csystemman_main_dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CString s1("欢迎光临 "), s2;
	s2 = s1 + user_info;
	this->SetDlgItemText(IDC_STATIC, s2);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
