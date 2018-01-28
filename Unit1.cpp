//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <vector>
#include <string>
#include <fstream>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TClickBot *ClickBot;
//---------------------------------------------------------------------------
__fastcall TClickBot::TClickBot(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

POINT cur; //variable for actual mouse position
std::vector<POINT> t_cur; //vector of saved positions
std::vector<String> t_char; //for displaying points in the listbox
String s;  //string for displaying points
int p = 0; //an iterator for mouse clicking

void click()
{
        SetCursorPos(t_cur[p].x, t_cur[p].y);
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        p++;
}

void __fastcall TClickBot::HotKey(TMessage &Msg)
{
    if (Msg.WParam == 1)
    {
       Timer1->Enabled=false; //disable clicking
    }
    if (Msg.WParam == 2)
    {
       t_cur.push_back(cur);     //add the present mouse position to vector
       s = IntToStr(cur.x) + " : " + IntToStr(cur.y);     
       ListBox1->Items->Add(s);                           //display the position
    }
}

void __fastcall TClickBot::Button1Click(TObject *Sender)
{
        Timer1->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TClickBot::Button2Click(TObject *Sender)
{
        Timer1->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TClickBot::Timer1Timer(TObject *Sender)
{
        Panel1->Color = RGB(rand()%255+1,rand()%255+1,rand()%255+1);
         if(p <  t_cur.size())
                click();
         else
         {
                p=0;
                click();
         }
}
//---------------------------------------------------------------------------
void __fastcall TClickBot::Timer2Timer(TObject *Sender)
{
        cur.x = Mouse->CursorPos.x;
        cur.y = Mouse->CursorPos.y;
        Label1->Caption = IntToStr(cur.x) + " " + IntToStr(cur.y);
}
//---------------------------------------------------------------------------

void __fastcall TClickBot::Button3Click(TObject *Sender)
{
        ListBox1->Clear(); //it just clears the listbox
}
//---------------------------------------------------------------------------


void __fastcall TClickBot::Button4Click(TObject *Sender)
{
        ListBox1->Clear();
        for (int i=0; i < t_cur.size(); i++)
        {
                s = IntToStr(t_cur[i].x) + " : " + IntToStr(t_cur[i].y);
                ListBox1->Items->Add(s);
        }
}
//---------------------------------------------------------------------------

void __fastcall TClickBot::FormCreate(TObject *Sender)
{
        RegisterHotKey(ClickBot->Handle, 1, 0, VK_PRIOR);
        RegisterHotKey(ClickBot->Handle, 2, 0, VK_NEXT);
        t_cur.push_back();
}
//---------------------------------------------------------------------------


void __fastcall TClickBot::Button5Click(TObject *Sender)
{
        t_cur.erase(t_cur.begin(),t_cur.end());
        ListBox1->Clear();
        //first erases whole vector, then clears the listbox
}
//---------------------------------------------------------------------------





void __fastcall TClickBot::Button8Click(TObject *Sender)
{
        Timer1->Interval=1;
}
//---------------------------------------------------------------------------

void __fastcall TClickBot::Button9Click(TObject *Sender)
{
        Timer1->Interval=10;
}
//---------------------------------------------------------------------------

void __fastcall TClickBot::Button10Click(TObject *Sender)
{
        Timer1->Interval=100;
}
//---------------------------------------------------------------------------

void __fastcall TClickBot::Button11Click(TObject *Sender)
{
        Timer1->Interval=500;
}
//---------------------------------------------------------------------------

void __fastcall TClickBot::Button6Click(TObject *Sender)
{
        Timer1->Interval=5;
}
//---------------------------------------------------------------------------

void __fastcall TClickBot::Button7Click(TObject *Sender)
{
        Timer1->Interval=50;
}
//---------------------------------------------------------------------------

void __fastcall TClickBot::WebsiteClick(TObject *Sender)
{
        ShellExecute(0, 0, "https://vellurpatrick.github.io", 0, 0 , SW_SHOW );
}
//---------------------------------------------------------------------------




