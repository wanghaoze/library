#pragma once


// Csystemman_main_dlg 对话框

class Csystemman_main_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Csystemman_main_dlg)

public:
	Csystemman_main_dlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Csystemman_main_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_systemmanmaindlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

private:
	CString user_info;
public:
	void setinfo(CString str);
	virtual BOOL OnInitDialog();
};
