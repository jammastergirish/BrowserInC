//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "windowform.h"
#include "mainform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma resource "*.dfm"
TWindow *Window;
//---------------------------------------------------------------------------
__fastcall TWindow::TWindow(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TWindow::FormCreate(TObject *Sender)
{
 Browser->Align = alClient;
}
//---------------------------------------------------------------------------
void __fastcall TWindow::FormClose(TObject *Sender, TCloseAction &Action)
{
 Action = caFree;        
}
//---------------------------------------------------------------------------
void __fastcall TWindow::FormActivate(TObject *Sender)
{
 Main->URLEdit->Text = Browser->LocationURL;        
}
//---------------------------------------------------------------------------
void __fastcall TWindow::BrowserDocumentComplete(TObject *Sender,
      LPDISPATCH pDisp, void *URL_which_is_really_a_Ptr_to_TVariant)
{
 Caption = Browser->LocationName;
 Main->URLEdit->Text = Browser->LocationURL;
}
//---------------------------------------------------------------------------
void __fastcall TWindow::BrowserNewWindow2(TObject *Sender,
      void *ppDisp_which_is_really_a_Ptr_to_LPDISPATCH,
      void *Cancel_which_is_really_a_Ptr_to_TOLEBOOL)
{
 /**/
}
//---------------------------------------------------------------------------
