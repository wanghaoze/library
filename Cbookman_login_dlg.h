#pragma once


// Cbookman_login_dlg 对话框

class Cbookman_login_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Cbookman_login_dlg)

public:
	Cbookman_login_dlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cbookman_login_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_bookman };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
