// ShowDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "ShowDlg.h"
#include "afxdialogex.h"


// CShowDlg �Ի���

IMPLEMENT_DYNAMIC(CShowDlg, CDialogEx)

CShowDlg::CShowDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CShowDlg::IDD, pParent)
	, m_Username(_T(""))
{

}

CShowDlg::~CShowDlg()
{
}

void CShowDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Username);
}


BEGIN_MESSAGE_MAP(CShowDlg, CDialogEx)
END_MESSAGE_MAP()


// CShowDlg ��Ϣ�������
