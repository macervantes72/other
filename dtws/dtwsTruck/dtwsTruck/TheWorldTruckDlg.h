
// dtwsTruckDlg.h : ͷ�ļ�
//

#pragma once
#include "FirstWindow.h"
#include "Macro.h"
#include "StopWatch.h"
#include "afxwin.h"
#include "resource.h"

// CTheWorldTruckDlg �Ի���
class CTheWorldTruckDlg : public CDialogEx
{
// ����
public:
	CTheWorldTruckDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DTWSTRUCK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
