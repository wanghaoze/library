#pragma once


// Cstu_main_dlg 对话框

class Cstu_main_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Cstu_main_dlg)

public:
	Cstu_main_dlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cstu_main_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_stumaindlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
private:
	CString user_info;
	DECLARE_MESSAGE_MAP()
public:
	void setinfo(CString str);
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
};
