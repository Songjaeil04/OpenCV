
// OepnCVwithMFCDlg.h: 헤더 파일
//

#pragma once

// COepnCVwithMFCDlg 대화 상자
class COepnCVwithMFCDlg : public CDialogEx
{
// 생성입니다.
public:
	COepnCVwithMFCDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OEPNCVWITHMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int m_ThresholdVal;
	int m_ThresholdMaxVal;
	CSliderCtrl m_ThresholdValSlider;
	CSliderCtrl m_ThresholdMaxValSlider;
	afx_msg void OnReleasedcaptureThresholdValSlider(NMHDR* pNMHDR, LRESULT* pResult);
	//OpenCV Variables
	Mat frame, gray, edge;
	CString m_FilePath;
	afx_msg void OnBnClickedFilepathDialog();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	int OpenImage();
	int TransferGray2Edge();
};
