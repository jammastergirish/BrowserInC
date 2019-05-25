//---------------------------------------------------------------------------
#ifndef mainformH
#define mainformH
//---------------------------------------------------------------------------
#include "windowform.h"
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ImgList.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
#include <ToolWin.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TMain : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu;
        TImageList *ImageList;
        TStatusBar *StatusBar;
        TCoolBar *CoolBar1;
        TToolBar *ToolBar1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TMenuItem *Go1;
        TMenuItem *Back1;
        TMenuItem *Forward1;
        TTimer *Timer1;
        TEdit *URLEdit;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall URLEditKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:
	void __fastcall CreateMDIChild(const WideString URL);
public:
        __fastcall TMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMain *Main;
extern TWindow *__fastcall CreateMDIChild(void);
//---------------------------------------------------------------------------
#endif
