// Match.h: interface for the Match class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MATCH_H__7C3C9570_E05F_490C_B4BA_B5737972E3C3__INCLUDED_)
#define AFX_MATCH_H__7C3C9570_E05F_490C_B4BA_B5737972E3C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define LW 19

class Match  
{
public:
	Match();
	virtual ~Match();
public:
	int chessboard[LW][LW]; //0��ʾû��������;1��ʾ�������£�2��ʾ��������

public:
	BOOL CanDown(int x,int y,int who);
	BOOL IsWin(int who,int pos[5][2]);
	void Clear();
};

#endif // !defined(AFX_MATCH_H__7C3C9570_E05F_490C_B4BA_B5737972E3C3__INCLUDED_)
