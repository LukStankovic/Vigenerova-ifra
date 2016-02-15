//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TMemo *MDesifrovane;
	TLabeledEdit *LEKlic;
	TMemo *MSifrovane;
	TButton *BSifrovat;
	TButton *BDesifrovat;
	TMainMenu *MainMenu1;
	TMenuItem *Soubor1;
	TMenuItem *Ulozit1;
	TMenuItem *Otevt1;
	TMenuItem *ifrovn1;
	TMenuItem *Deifrovat1;
	TMenuItem *N1;
	TMenuItem *Ukonit1;
	TMenuItem *Uloitdeifrovan1;
	TMenuItem *OtevritKSifrovani;
	TMenuItem *N2;
	TOpenDialog *OpenDialog;
	TSaveDialog *SaveDialog;
	void __fastcall Ukonit1Click(TObject *Sender);
	void __fastcall Ulozit1Click(TObject *Sender);
	void __fastcall Uloitdeifrovan1Click(TObject *Sender);
	void __fastcall OtevritKSifrovaniClick(TObject *Sender);
	void __fastcall Otevt1Click(TObject *Sender);
	void __fastcall BSifrovatClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);

	AnsiString sifrovat(AnsiString klic, AnsiString nesifrovany_text){
		int delka_n = nesifrovany_text.Length();
		
		char *znak_n = new char[delka_n];
		znak_n = nesifrovany_text.c_str();

		char *kl = new char[klic.Length()];

        kl = klic.c_str();

		char *znak_s = new char[delka_n];

		delka_n--;

		for(int i = 0; i < (klic.Length()); i++){
			if(kl[i] >= 'a' && kl[i] <= 'z')
				kl[i] += 'A' - 'a';
		}
		
		int j = 0,i = 0;

		for(i = 0; i < delka_n+1; i++){

			if(znak_n[i] >= 'a' && znak_n[i] <= 'z')
				znak_n[i] += 'A' - 'a';

			if(znak_n[i] < 'A' || znak_n[i] > 'Z')
				continue;

		  	znak_s[i] += (znak_n[i] + kl[j] - 2*'A')% 26 + 'A';

			if(j<=klic.Length())
				j++;
			if(j==klic.Length())
				j=0;    
		
		}
		
	
		AnsiString sifrovany_text = znak_s;

		return sifrovany_text;
	}
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
