#ifndef DRAGEFFECTBITMAPBUTTON_H
#define DRAGEFFECTBITMAPBUTTON_H
#include "wx/wx.h"


class RenderableEffect;

class DragEffectBitmapButton : public wxBitmapButton
{
    public:
//        DragEffectBitmapButton();

        DragEffectBitmapButton (wxWindow *parent, wxWindowID id, const wxBitmap &bitmap, const wxPoint &pos=wxDefaultPosition,
                                const wxSize &size=wxDefaultSize, long style=wxBU_AUTODRAW, const wxValidator &validator=wxDefaultValidator,
                                const wxString &name=wxButtonNameStr);
    virtual void DoSetSizeHints( int minW, int minH,
                                int maxW, int maxH,
                                int incW, int incH );
        virtual ~DragEffectBitmapButton();
        void OnMouseLeftDown (wxMouseEvent& event);
        void SetBitmap(const wxBitmap &bmp);
    
        void SetEffect(RenderableEffect *effect, int sz = 16);

    protected:
    private:
        wxString (*GetStringFunction)();

        RenderableEffect *mEffect;
};

#endif // DRAGEFFECTBITMAPBUTTON_H
