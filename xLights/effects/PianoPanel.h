#ifndef PIANOPANEL_H
#define PIANOPANEL_H

//(*Headers(PianoPanel)
#include <wx/panel.h>
class wxBitmapButton;
class wxCheckBox;
class wxChoice;
class wxFlexGridSizer;
class wxSlider;
class wxSpinCtrl;
class wxSpinEvent;
class wxStaticText;
class wxTextCtrl;
//*)

#include <wx/progdlg.h>
#include "../BulkEditControls.h"

class MidiFile;

class PianoPanel: public wxPanel
{
public:

		PianoPanel(wxWindow* parent);
		virtual ~PianoPanel();
        void SetTimingTracks(wxCommandEvent& event);

		//(*Declarations(PianoPanel)
		BulkEditCheckBox* CheckBox_Piano_ShowSharps;
		BulkEditChoice* Choice_Piano_MIDITrack_APPLYLAST;
		BulkEditChoice* Choice_Piano_Type;
		BulkEditSlider* Slider_Piano_Scale;
		BulkEditSlider* Slider_Piano_XOffset;
		BulkEditSpinCtrl* SpinCtrl_Piano_EndMIDI;
		BulkEditSpinCtrl* SpinCtrl_Piano_StartMIDI;
		BulkEditTextCtrl* TextCtrl_Piano_Scale;
		BulkEditTextCtrl* TextCtrl_Piano_XOffset;
		BulkEditValueCurveButton* BitmapButton_Piano_ScaleVC;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* StaticText9;
		wxStaticText* StaticText_Piano_NumKeys;
		xlLockButton* BitmapButton_Piano_ShowSharps;
		//*)

	protected:

		//(*Identifiers(PianoPanel)
		static const long ID_STATICTEXT_Piano_Type;
		static const long ID_CHOICE_Piano_Type;
		static const long ID_STATICTEXT_Piano_StartMIDI;
		static const long ID_SPINCTRL_Piano_StartMIDI;
		static const long ID_STATICTEXT_Piano_EndMIDI;
		static const long ID_SPINCTRL_Piano_EndMIDI;
		static const long ID_CHECKBOX_Piano_ShowSharps;
		static const long ID_BITMAPBUTTON_Piano_ShowSharps;
		static const long ID_STATICTEXT_Piano_MIDITrack_APPLYLAST;
		static const long ID_CHOICE_Piano_MIDITrack_APPLYLAST;
		static const long ID_STATICTEXT_Piano_Scale;
		static const long ID_SLIDER_Piano_Scale;
		static const long ID_VALUECURVE_Piano_Scale;
		static const long IDD_TEXTCTRL_Piano_Scale;
		static const long ID_STATICTEXT_Piano_XOffset;
		static const long ID_SLIDER_Piano_XOffset;
		static const long IDD_TEXTCTRL_Piano_XOffset;
		//*)

	public:

		//(*Handlers(PianoPanel)
		void OnLockButtonClick(wxCommandEvent& event);
		void OnSpinCtrl_Piano_StartMIDIChange(wxSpinEvent& event);
		void OnSpinCtrl_Piano_EndMIDIChange(wxSpinEvent& event);
        void OnVCButtonClick(wxCommandEvent& event);
        void OnVCChanged(wxCommandEvent& event);
        //*)

		DECLARE_EVENT_TABLE()
        void ValidateWindow();
};

#endif
