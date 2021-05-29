#ifndef __MyProject1Frame__
#define __MyProject1Frame__
#include <wx/wx.h>
#include <wx/dcbuffer.h>

/**
@file
Subclass of Frame, which is generated by wxFormBuilder.
*/

#include "MyFrame.h"

//// end generated include

/** Implementing Frame */
class MyProject1Frame : public Frame
{
	protected:
		// Handlers for Frame events.
		void load_button1OnButtonClick( wxCommandEvent& event );
		void load_button2OnButtonClick( wxCommandEvent& event );
		void m_slider3OnScroll( wxScrollEvent& event );
		void m_button8OnButtonClick( wxCommandEvent& event );
		void save_button5OnButtonClick( wxCommandEvent& event );
		void m_scrolledWindow1OnUpdateUI( wxUpdateUIEvent& event );
		void m_scrolledWindow2OnUpdateUI( wxUpdateUIEvent& event );
		void m_scrolledWindow21OnUpdateUI( wxUpdateUIEvent& event );
		void Repaint(wxScrolledWindow* sw, wxImage &img);

		void m_slider4OnScroll(wxScrollEvent& event);
	public:
		/** Constructor */
		MyProject1Frame( wxWindow* parent );
	//// end generated class members
	private:

		wxImage _image1;
		wxImage _image2;
		wxImage _image3;
		wxImage _cpy1;
		wxImage _cpy2;
		wxImage _cpy3;
		wxImage _image2s;

		unsigned _pow;
		int _poz;
		double _w=0, _h=0;
};

#endif // __MyProject1Frame__
