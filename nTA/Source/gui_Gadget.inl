// gui_Gadget.inl //                               \author Logan Jones
///////////////////                                   \date 4/20/2002
/// \file
/// \brief ...
/////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////
// gui_Gadget::GetName() //                        \author Logan Jones
//////////////////////////                            \date 10/14/2001
//               
//====================================================================
// Return: LPCTSTR - 
//
LPCTSTR gui_Gadget::GetName() const
{
	return m_CommonData.Name;
}
// End gui_Gadget::GetName()
//////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
// gui_Gadget::SetName() //                        \author Logan Jones
//////////////////////////                            \date 11/6/2002
//
//===================================================================
// Parameters:
//  LPCTSTR strName - 
//
void gui_Gadget::SetName( LPCTSTR strName )
{
	strcpy( m_CommonData.Name, strName );
}
// End gui_Gadget::SetName()
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
// End - gui_Gadget.inl //
/////////////////////////
