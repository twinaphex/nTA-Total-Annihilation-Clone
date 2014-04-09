// unit_Interface.cpp //                   Author: Logan "Burn" Jones
///////////////////////                               Date: 10/6/2002
//
/////////////////////////////////////////////////////////////////////

#include "game.h"
#include "unit_Interface.h"
#include "net.h"

/////////////////////////////////////////////////////////////////////
// Server request dispatching implementation
//{{AFX Net Messages (Generated by AsmNetMsg.exe. DO NOT EDIT)

/////////////////////////////////////////////////////////////////////
// unit_Interface::RequestStop //               Author: AsmNetMsg.exe
////////////////////////////////                       Date: 5/4/2004
//
//===================================================================
//
void unit_Interface::RequestStop()
{
	if( theGame.IsGameServer ) OnRequestStop();
	else net.Write().Write()
		<< (UINT8)Request_Stop
		<< m_UniqueID;
}
// End unit_Interface::RequestStop()
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
// unit_Interface::RequestMoveTo //             Author: AsmNetMsg.exe
//////////////////////////////////                     Date: 5/4/2004
//
//===================================================================
//
void unit_Interface::RequestMoveTo( const std_Point& ptWhere, bool bEnqueue )
{
	if( theGame.IsGameServer ) OnRequestMoveTo( ptWhere, bEnqueue );
	else net.Write().Write()
		<< (UINT8)Request_MoveTo
		<< m_UniqueID
		<< ptWhere
		<< (UINT8)bEnqueue;
}
// End unit_Interface::RequestMoveTo()
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
// unit_Interface::RequestBuild //              Author: AsmNetMsg.exe
/////////////////////////////////                      Date: 5/4/2004
//
//===================================================================
//
void unit_Interface::RequestBuild( const unit_Type* pType, const std_Point& ptWhere, bool bEnqueue )
{
	if( theGame.IsGameServer ) OnRequestBuild( pType, ptWhere, bEnqueue );
	else net.Write().Write()
		<< (UINT8)Request_Build
		<< m_UniqueID
		<< pType->Key
		<< ptWhere
		<< (UINT8)bEnqueue;
}
// End unit_Interface::RequestBuild()
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
// unit_Interface::RequestActivate //           Author: AsmNetMsg.exe
////////////////////////////////////                   Date: 5/4/2004
//
//===================================================================
//
void unit_Interface::RequestActivate( bool bActivate )
{
	if( theGame.IsGameServer ) OnRequestActivate( bActivate );
	else net.Write().Write()
		<< (UINT8)Request_Activate
		<< m_UniqueID
		<< (UINT8)bActivate;
}
// End unit_Interface::RequestActivate()
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
// unit_Interface::RequestAttack //             Author: AsmNetMsg.exe
//////////////////////////////////                     Date: 5/4/2004
//
//===================================================================
//
void unit_Interface::RequestAttack( const std_Point& ptWhere, bool bEnqueue )
{
	if( theGame.IsGameServer ) OnRequestAttack( ptWhere, bEnqueue );
	else net.Write().Write()
		<< (UINT8)Request_Attack
		<< m_UniqueID
		<< ptWhere
		<< (UINT8)bEnqueue;
}
// End unit_Interface::RequestAttack()
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
// unit_Interface::RequestUnit //               Author: AsmNetMsg.exe
////////////////////////////////                       Date: 5/4/2004
//
//===================================================================
//
void unit_Interface::RequestUnit( const unit_Type* pType )
{
	if( theGame.IsGameServer ) OnRequestUnit( pType );
	else net.Write().Write()
		<< (UINT8)Request_Unit
		<< m_UniqueID
		<< pType->Key;
}
// End unit_Interface::RequestUnit()
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
// unit_Interface::NotifyPrepareToBuild //      Author: AsmNetMsg.exe
/////////////////////////////////////////              Date: 5/4/2004
//
//===================================================================
//
void unit_Interface::NotifyPrepareToBuild( const unit_Type* pType, const std_Point& ptWhere )
{
	if( theGame.IsGameServer ) OnNotifyPrepareToBuild( pType, ptWhere ),
		net.Write().Write()
		<< (UINT8)Notify_PrepareToBuild
		<< m_UniqueID
		<< pType->Key
		<< ptWhere;
}
// End unit_Interface::NotifyPrepareToBuild()
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
// unit_Interface::NotifySpawnNewUnit //        Author: AsmNetMsg.exe
///////////////////////////////////////                Date: 5/4/2004
//
//===================================================================
//
void unit_Interface::NotifySpawnNewUnit( const unit_Type* pType, const std_Point& ptWhere )
{
	if( theGame.IsGameServer ) OnNotifySpawnNewUnit( pType, ptWhere ),
		net.Write().Write()
		<< (UINT8)Notify_SpawnNewUnit
		<< m_UniqueID
		<< pType->Key
		<< ptWhere;
}
// End unit_Interface::NotifySpawnNewUnit()
/////////////////////////////////////////////////////////////////////
//}}AFX Net Messages implementations

/////////////////////////////////////////////////////////////////////
// End - unit_Interface.cpp //
/////////////////////////////