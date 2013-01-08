//---------------------------------------------------------------------------
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::passwordEnter(TObject *Sender)
{
	if(TForm1::password->Text == "Пароль"){
		TForm1::password->Font->Style = TForm1::password->Font->Style >> fsItalic;
		TForm1::password->PasswordChar = '*';
		TForm1::password->Text = "";
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::passwordExit(TObject *Sender)
{
	if(TForm1::password->Text.IsEmpty()){
		TForm1::password->Font->Style = TForm1::password->Font->Style << fsItalic;
		TForm1::password->PasswordChar = '\x0';
		TForm1::password->Text = "Пароль";
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::loginEnter(TObject *Sender)
{
	if(TForm1::login->Text == "Логин"){
		TForm1::login->Font->Style = TForm1::login->Font->Style >> fsItalic;
		TForm1::login->Text = "";
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::loginExit(TObject *Sender)
{
	if(TForm1::login->Text.IsEmpty()){
		TForm1::login->Font->Style = TForm1::login->Font->Style << fsItalic;
		TForm1::login->Text = "Логин";
	}
}
//---------------------------------------------------------------------------
bool file_exists(LPCTSTR fname)
{
	return ::GetFileAttributes(fname) != DWORD(-1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::launcher_init(TObject *Sender)
{
	TForm1::loading_obsidian->Width = 0;
	TForm1::Panel2->Visible = true;
	if(system(0) == 0){
		if(system("java -version") != 0){
			//устанавливаем java
		}
	}
	String pathtoversion = "%APPDATA%\\.lolipop\\version";
	if(!file_exists(pathtoversion.c_str())){
		//устанавливаем клиент
	}
	Sleep(10000);
	//деактивируем загрузку, активируем авторизацию
	TForm1::Panel2->Visible = false;
	TForm1::Panel1->Visible = true;
}
//---------------------------------------------------------------------------

