#pragma once


// Csystemman_login_dlg 对话框

class Csystemman_login_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Csystemman_login_dlg)

public:
	void setinfo(CString str);
	Csystemman_login_dlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Csystemman_login_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_systemman };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
