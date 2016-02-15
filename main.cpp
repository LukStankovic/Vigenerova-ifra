//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	OpenDialog->Filter = "Textov� soubory (*.txt)";
	SaveDialog->Filter = "Textov� soubory (*.txt)";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Ukonit1Click(TObject *Sender)
{
	Application->Terminate();	
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Ulozit1Click(TObject *Sender)
{
	if(SaveDialog->Execute())
		MSifrovane->Lines->SaveToFile(SaveDialog->FileName);

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Uloitdeifrovan1Click(TObject *Sender)
{
	if(SaveDialog->Execute())
		MDesifrovane->Lines->SaveToFile(SaveDialog->FileName);

}
//---------------------------------------------------------------------------
void __fastcall TForm2::OtevritKSifrovaniClick(TObject *Sender)
{
	MDesifrovane->Lines->Clear();
	if(OpenDialog->Execute())
		  MDesifrovane->Lines->LoadFromFile(OpenDialog->FileName);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Otevt1Click(TObject *Sender)
{
	MSifrovane->Lines->Clear();
		if(OpenDialog->Execute())
			MSifrovane->Lines->LoadFromFile(OpenDialog->FileName);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BSifrovatClick(TObject *Sender)
{
	//INICIALIZACE TEXT�
	AnsiString klic = "",nesifrovany_text = "",sifrovany_text = "";
	//po�et ��dk� v memu
	int pocet_radku = MDesifrovane->Lines->Count;

	//ulo�en� textu z mema
	for(int i = 0; i<pocet_radku; i++)
		nesifrovany_text += MDesifrovane->Lines->Strings[i];
	//ulo�en� kl��e
	klic = LEKlic->Text;

	MSifrovane->Lines->Clear();
	MSifrovane->Lines->Insert(0,sifrovat(klic.c_str(),nesifrovany_text.c_str()));
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BDesifrovatClick(TObject *Sender)
{
	//INICIALIZACE TEXT�
	AnsiString klic = "",nesifrovany_text = "",sifrovany_text = "";
	//po�et ��dk� v memu
	int pocet_radku = MSifrovane->Lines->Count;

	//ulo�en� textu z mema
	for(int i = 0; i<pocet_radku; i++)
		sifrovany_text += MSifrovane->Lines->Strings[i];
	//ulo�en� kl��e
	klic = LEKlic->Text;

	MDesifrovane->Lines->Clear();
	MDesifrovane->Lines->Insert(0,desifrovat(klic.c_str(),sifrovany_text.c_str()));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ifrovn1Click(TObject *Sender)
{
	//INICIALIZACE TEXT�
	AnsiString klic = "",nesifrovany_text = "",sifrovany_text = "";
	//po�et ��dk� v memu
	int pocet_radku = MDesifrovane->Lines->Count;

	//ulo�en� textu z mema
	for(int i = 0; i<pocet_radku; i++)
		nesifrovany_text += MDesifrovane->Lines->Strings[i];
	//ulo�en� kl��e
	klic = LEKlic->Text;

	MSifrovane->Lines->Clear();
	MSifrovane->Lines->Insert(0,sifrovat(klic.c_str(),nesifrovany_text.c_str()));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Deifrovat1Click(TObject *Sender)
{
	//INICIALIZACE TEXT�
	AnsiString klic = "",nesifrovany_text = "",sifrovany_text = "";
	//po�et ��dk� v memu
	int pocet_radku = MSifrovane->Lines->Count;

	//ulo�en� textu z mema
	for(int i = 0; i<pocet_radku; i++)
		sifrovany_text += MSifrovane->Lines->Strings[i];
	//ulo�en� kl��e
	klic = LEKlic->Text;

	MDesifrovane->Lines->Clear();
	MDesifrovane->Lines->Insert(0,desifrovat(klic.c_str(),sifrovany_text.c_str()));
}
//---------------------------------------------------------------------------


