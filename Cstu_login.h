#pragma once


// Cstu_login 对话框

class Cstu_login : public CDialogEx
{
	DECLARE_DYNAMIC(Cstu_login)

public:
	Cstu_login(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cstu_login();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_stu };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
