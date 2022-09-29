#pragma once


// CDlgMove 对话框

class CDlgMove : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgMove)

public:
	CDlgMove(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDlgMove();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Move };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	int m_iOffsetX;
	int m_iOffsetY;
	int m_iGraphType;
public:
	afx_msg void OnBnClickedOk();
	
};
