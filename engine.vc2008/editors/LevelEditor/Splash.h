//---------------------------------------------------------------------------

#ifndef SplashH
#define SplashH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include "MXCtrls.hpp"
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TfrmSplash : public TForm
{
__published:	// IDE-managed Components
    TImage *Image1;
	TLabel *lbStatus;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmSplash(TComponent* Owner);
    void SetStatus(LPSTR log){ if (log){ lbStatus->Caption = log; lbStatus->Repaint(); };}
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSplash *frmSplash;
//---------------------------------------------------------------------------
#endif
