#pragma once


// CDlgAdd 对话框

class CDlgAdd : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgAdd)

public:
	CDlgAdd(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDlgAdd();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Add };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	int m_iGraphType;
	int m_iCenterX;
	int m_iCenterY;
	int m_iApothem;
public:
	afx_msg void OnBnClickedOk();
	//afx_msg void OnEnChangeRadio1();
};
