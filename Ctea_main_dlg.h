#pragma once


// Ctea_main_dlg 对话框

class Ctea_main_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Ctea_main_dlg)

public:
	void setinfo(CString str);
	Ctea_main_dlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctea_main_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_teamaindlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

private:
	CString user_info;
public:
	virtual BOOL OnInitDialog();
};
