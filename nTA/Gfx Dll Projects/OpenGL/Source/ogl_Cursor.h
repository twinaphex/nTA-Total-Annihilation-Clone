// ogl_Cursor.h //                         Author: Logan "Burn" Jones
/////////////////                                    Date: 10/27/2001
//
/////////////////////////////////////////////////////////////////////
#ifndef _OGL_CURSOR_H_
#define _OGL_CURSOR_H_
/////////////////////////////////////////////////////////////////////


///////////////////////////// ogl_Cursor /////////////////////////////
//
class ogl_Cursor : public gfx_Cursor
{
	friend class gfx_OpenGL;

/////////////////////////////////////////////////
// INTERFACE
public:

	void Destroy();


/////////////////////////////////////////////////
// Data members
protected:

	char							m_Name[32];
	GLuint*							m_pTextures;
	GLuint							m_ListBase;
	int								m_CurrentFrame;
	int								m_NumFrames;
	list< ogl_Cursor >*				m_pHost;
	list< ogl_Cursor >::iterator	m_HostIt;


/////////////////////////////////////////////////
// Default Constructor/Deconstructor
public:
	ogl_Cursor();
	virtual ~ogl_Cursor();
/////////////////////////////////////////////////

}; // End class - ogl_Cursor
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
#endif // !defined(_OGL_CURSOR_H_)
