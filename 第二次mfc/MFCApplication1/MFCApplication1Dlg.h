
// MFCApplication1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMFCApplication1Dlg �Ի���
class CMFCApplication1Dlg : public CDialogEx
{
// ����
public:
	CMFCApplication1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };

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
	int m_Listid;
	CListBox m_ListCon;
	CString m_Name;
	CString m_Sid;
	CString m_Value;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
};
