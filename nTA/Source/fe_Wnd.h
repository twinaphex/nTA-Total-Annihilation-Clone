// fe_Wnd.h //                                     \author Logan Jones
/////////////                                         \date 10/3/2001
/// \file
/// \brief ...
/////////////////////////////////////////////////////////////////////
#ifndef _FE_WND_H_
#define _FE_WND_H_
/////////////////////////////////////////////////////////////////////


/////////////////////////////// fe_Wnd ///////////////////////////////
//
class fe_Wnd : public gui_Window
{

/////////////////////////////////////////////////
// INTERFACE
public:

	// Loads the pcx image for the window's background
	BOOL LoadPanel( LPCTSTR strPanel );


/////////////////////////////////////////////////
// Default Constructor/Deconstructor
public:
	fe_Wnd();
	virtual ~fe_Wnd();
/////////////////////////////////////////////////

}; // End class - fe_Wnd
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
#endif // !defined(_FE_WND_H_)
