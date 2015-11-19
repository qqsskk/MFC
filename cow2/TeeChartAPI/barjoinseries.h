#if !defined(AFX_BARJOINSERIES_H__C135B32F_F6E6_4335_BBA7_D9220A4BE5C8__INCLUDED_)
#define AFX_BARJOINSERIES_H__C135B32F_F6E6_4335_BBA7_D9220A4BE5C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CPen1;
class CGradient;

/////////////////////////////////////////////////////////////////////////////
// CBarJoinSeries wrapper class

class CBarJoinSeries : public COleDispatchDriver
{
public:
	CBarJoinSeries() {}		// Calls COleDispatchDriver default constructor
	CBarJoinSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBarJoinSeries(const CBarJoinSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetMultiBar();
	void SetMultiBar(long nNewValue);
	BOOL GetAutoMarkPosition();
	void SetAutoMarkPosition(BOOL bNewValue);
	CBrush1 GetBarBrush();
	CPen1 GetBarPen();
	long GetBarStyle();
	void SetBarStyle(long nNewValue);
	long GetBarWidthPercent();
	void SetBarWidthPercent(long nNewValue);
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	long GetOffsetPercent();
	void SetOffsetPercent(long nNewValue);
	BOOL GetSideMargins();
	void SetSideMargins(BOOL bNewValue);
	BOOL GetUseOrigin();
	void SetUseOrigin(BOOL bNewValue);
	double GetOrigin();
	void SetOrigin(double newValue);
	long GetOriginPos(long SomeValueIndex);
	BOOL GetAutoBarSize();
	void SetAutoBarSize(BOOL bNewValue);
	void BarImageLoad(LPCTSTR FileName);
	void BarImageClear();
	CGradient GetGradient();
	long GetStackGroup();
	void SetStackGroup(long nNewValue);
	long GetConePercent();
	void SetConePercent(long nNewValue);
	long GetBarWidth();
	void SetBarWidth(long nNewValue);
	CPen1 GetJoinPen();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BARJOINSERIES_H__C135B32F_F6E6_4335_BBA7_D9220A4BE5C8__INCLUDED_)