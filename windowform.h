//---------------------------------------------------------------------------
#ifndef windowformH
#define windowformH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "SHDocVw_OCX.h"
#include <OleCtrls.hpp>
//---------------------------------------------------------------------------
class TWindow : public TForm
{
__published:	// IDE-managed Components
        TWebBrowser *Browser;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall BrowserDocumentComplete(TObject *Sender,
          LPDISPATCH pDisp, void *URL_which_is_really_a_Ptr_to_TVariant);
        void __fastcall BrowserNewWindow2(TObject *Sender,
          void *ppDisp_which_is_really_a_Ptr_to_LPDISPATCH,
          void *Cancel_which_is_really_a_Ptr_to_TOLEBOOL);
private:	// User declarations
public:		// User declarations
        __fastcall TWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWindow *Window;
//---------------------------------------------------------------------------
#endif
