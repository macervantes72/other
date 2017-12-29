
// TipDlg.h : ͷ�ļ�
//

#pragma once
#define MYWM_NOTIFYICON WM_USER+5
#define DELETEICON      WM_USER+6

// CTipDlg �Ի���
class CTipDlg : public CDialogEx
{
// ����
public:
	CTipDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_TIP_DIALOG };

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
	CStatic *pStatic;
	CString strTip;
	int nAddTimes;
	int nSix;
	//�ڶ������һ����ʾ
	void AddTip(CString strTip);
	//��ʾ����
	void ShowTip();
	//����һ������ͼ��
	void CreateNotifyIcon();
	LRESULT OnNotifyIcon(WPARAM wParam, LPARAM lParam);
	void OnCancel();
	LRESULT DeleteIcon(WPARAM wParam, LPARAM lParam);
	LRESULT ShowText(WPARAM wParam, LPARAM lParam);
	LRESULT Exit(WPARAM wParam, LPARAM lParam);
};
