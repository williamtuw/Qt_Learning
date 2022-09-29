#pragma once


// CMyMove 对话框

class CMyMove : public CDialogEx
{
	DECLARE_DYNAMIC(CMyMove)

public:
	CMyMove(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CMyMove();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
