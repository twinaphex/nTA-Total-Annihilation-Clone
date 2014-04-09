// gfx_Surface.h //                                \author Logan Jones
//////////////////                                   \date 10/13/2001
/// \file
/// \brief ...
/////////////////////////////////////////////////////////////////////
#ifndef _GFX_SURFACE_H_
#define _GFX_SURFACE_H_
/////////////////////////////////////////////////////////////////////


//////////////////////////// gfx_Surface ////////////////////////////
//
class gfx_Surface
{

/////////////////////////////////////////////////////////////////////
// Virtual Interface
public:

	virtual void Destroy() = 0;

	virtual const std_Size_t& GetSize() const = 0;

	virtual void Render() = 0;
	virtual void Render( std_Vector3 vPos ) = 0;
	virtual void Render( std_Vector3 vPos, std_SizeF sz ) = 0;
	virtual void Render( std_RectF rctPos ) = 0;

}; // End class - gfx_Surface
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
#endif // !defined(_GFX_SURFACE_H_)
