// unit_Ground.h //                                \author Logan Jones
//////////////////                                    \date 11/4/2002
/// \file
/// \brief ...
/////////////////////////////////////////////////////////////////////
#ifndef _UNIT_GROUND_H_
#define _UNIT_GROUND_H_
/////////////////////////////////////////////////////////////////////


//////////////////////////// unit_Ground ////////////////////////////
//
class unit_Ground : public unit_Object
{

/////////////////////////////////////////////////
// Overeiden methods
protected:

	// Initialize position and movement data
	void OnCreate();

	// Specialized ground movement
	//bool DoMovement();
	void Render();

	void Locomotion( const std_Vector2& vSteering );


/////////////////////////////////////////////////
// Data members
private:

	// Current velocity
	std_Vector2					m_SteeringForce;
	std_Vector2					m_vSteering;


/////////////////////////////////////////////////
// Default Constructor
public:
	unit_Ground( unit_Factory& Manager ):unit_Object(Manager){}
/////////////////////////////////////////////////

}; // End class - unit_Ground
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
#endif // !defined(_UNIT_GROUND_H_)
