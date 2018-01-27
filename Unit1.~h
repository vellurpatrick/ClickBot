//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TClickBot : public TForm
{
__published:	// IDE-managed Components
        TTimer *Timer1;
        TTimer *Timer2;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TLabel *Label1;
        TPanel *Panel1;
        TListBox *ListBox1;
        TButton *Button5;
        TButton *Button8;
        TButton *Button9;
        TButton *Button10;
        TButton *Button11;
        TButton *Button6;
        TButton *Button7;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall WebsiteClick(TObject *Sender);
private:
        void __fastcall HotKey(TMessage &Msg);
public:
        __fastcall TClickBot(TComponent* Owner);
        BEGIN_MESSAGE_MAP
        MESSAGE_HANDLER(WM_HOTKEY,TMessage,HotKey)
        END_MESSAGE_MAP(TForm)
};
//---------------------------------------------------------------------------
extern PACKAGE TClickBot *ClickBot;
//---------------------------------------------------------------------------
#endif
