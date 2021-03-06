// ogl_Font.h //                           Author: Logan "Burn" Jones
///////////////                                      Date: 10/13/2001
//
/////////////////////////////////////////////////////////////////////
#ifndef _OGL_FONT_H_
#define _OGL_FONT_H_
/////////////////////////////////////////////////////////////////////


////////////////////////////// ogl_Font //////////////////////////////
//
class ogl_Font : public gfx_Font
{
	friend class gfx_OpenGL;

/////////////////////////////////////////////////
// INTERFACE
public:

	void Destroy();

	long GetHeight() const;


/////////////////////////////////////////////////
// Data members
protected:

	gfx_Interface::FontEntry	m_Entries[ 256 ];
	GLuint						m_Texture;
	GLuint						m_CharLists;
	long						m_Height;
	list< ogl_Font >*			m_pHost;
	list< ogl_Font >::iterator	m_HostIt;


/////////////////////////////////////////////////
// Default Constructor/Deconstructor
public:
	ogl_Font();
	virtual ~ogl_Font();
/////////////////////////////////////////////////

}; // End class - ogl_Font
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
#endif // !defined(_OGL_FONT_H_)
