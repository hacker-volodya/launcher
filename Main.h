//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Web.Win.Sockets.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *fon;
	TEdit *login;
	TEdit *password;
	TCheckBox *save_pass;
	TLabel *save_pass_lbl;
	TButton *auth_btn;
	TImage *loading_lava;
	TPanel *Panel1;
	TPanel *Panel2;
	TImage *loading_obsidian;
	TImage *loading_border;
	TLabel *loading_lbl;
	void __fastcall passwordEnter(TObject *Sender);
	void __fastcall passwordExit(TObject *Sender);
	void __fastcall loginEnter(TObject *Sender);
	void __fastcall loginExit(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
