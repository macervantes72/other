
// dtwsTruckDlg.h : 头文件
//

#pragma once
#include "FirstWindow.h"
#include "Macro.h"
#include "StopWatch.h"
#include "afxwin.h"
#include "resource.h"

// CTheWorldTruckDlg 对话框
class CTheWorldTruckDlg : public CDialogEx
{
// 构造
public:
	CTheWorldTruckDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_DTWSTRUCK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CEdit Edit1x;
	CEdit Edit1y;
	CEdit Edit2x;
	CEdit Edit2y;
	CEdit Edit3x;
	CEdit Edit3y;
};
