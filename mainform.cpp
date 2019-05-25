//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "mainform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMain *Main;
//---------------------------------------------------------------------------
__fastcall TMain::TMain(TComponent* Owner)
        : TForm(Owner)
{
}

//---------------------------------------------------------------------------
void __fastcall TMain::CreateMDIChild(WideString URL)
{
 TWindow *Child;
 Child = new TWindow(Application);
 Child->Name = "Window_" + IntToStr(MDIChildCount + 1);
 Child->Caption = URL;
 Child->Browser->Navigate(BSTR(URL));
 StatusBar->Panels->Items[0]->Text = "Loading  " + URL + "..."; 
}
//---------------------------------------------------------------------------
void __fastcall TMain::Timer1Timer(TObject *Sender)
{

 StatusBar->Panels->Items[0]->Width = (ClientWidth / 3) * 2;
 StatusBar->Panels->Items[1]->Width = (ClientWidth / 3) * 0.5;
 StatusBar->Panels->Items[2]->Width = (ClientWidth / 3) * 0.5;

 if (Application->Hint != "")
 {
  StatusBar->SimplePanel = True;
  StatusBar->SimpleText = GetLongHint(Application->Hint);
 }
 else
 {
  StatusBar->SimpleText = "";
  StatusBar->SimplePanel = False;
 }
}
//---------------------------------------------------------------------------

void __fastcall TMain::URLEditKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if (Key == 13)
 {
  CreateMDIChild(URLEdit->Text);
 }        
}
//---------------------------------------------------------------------------
  