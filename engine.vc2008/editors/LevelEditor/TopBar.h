//---------------------------------------------------------------------------


#ifndef TopBarH
#define TopBarH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include "ExtBtn.hpp"
#include "mxPlacemnt.hpp"
#include "MxMenus.hpp"
#include <Menus.hpp>
#include "Gradient.hpp"
#include "MXCtrls.hpp"
//---------------------------------------------------------------------------
class ECORE_API TfraTopBar : public TFrame
{
__published:	// IDE-managed Components
    TPanel *paTBEdit;
    TExtBtn *ebEditUndo;
    TExtBtn *ebEditRedo;
    TPanel *paTBAction;
    TExtBtn *ebActionMove;
    TExtBtn *ebActionRotate;
    TExtBtn *ebActionScale;
    TExtBtn *ebActionSelect;
    TExtBtn *ebActionAdd;
    TPanel *paSnap;
    TExtBtn *ebMSnap;
    TExtBtn *ebASnap;
	TExtBtn *ebCSParent;
    TPanel *paAxis;
    TExtBtn *ebAxisX;
    TExtBtn *ebAxisY;
    TExtBtn *ebAxisZ;
    TExtBtn *ebAxisZX;
    TExtBtn *ebGSnap;
    TExtBtn *ebOSnap;
    TPanel *paView;
	TExtBtn *ebNUScale;
	TPanel *Panel1;
	TExtBtn *ebZoomExtents;
	TExtBtn *ebZoomExtentsSelected;
	TExtBtn *ebVSnap;
	TFormStorage *fsStorage;
	TExtBtn *ebMTSnap;
	TExtBtn *ebNormalAlign;
        TExtBtn *Bsave;
        TExtBtn *bclear;
        TExtBtn *BOpenFile;
        TMxPopupMenu *pmSceneFile;
        TMenuItem *N12;
        TMenuItem *Clear1;
        TMenuItem *miOpen;
        TMenuItem *Save1;
        TMenuItem *SaveAs1;
        TMenuItem *N21;
        TMenuItem *ebOpenSel;
        TMenuItem *ebSaveSel;
        TMenuItem *N3;
        TMenuItem *Makepack1;
        TMenuItem *N26;
        TMenuItem *miRecentFiles;
        TMenuItem *N24;
        TMenuItem *Quit1;
        TGradient *Gradient1;
        TExtBtn *ebSceneFile;
        TExtBtn *ebScene;
        TMxPopupMenu *pmScene;
        TMenuItem *N13;
        TMenuItem *Options1;
        TMenuItem *N8;
        TMenuItem *Validate1;
        TMenuItem *N22;
        TMenuItem *miSceneSummary;
        TMenuItem *miHightlightTexture;
        TMenuItem *N25;
        TMenuItem *ClearDebugDraw1;
        TMenuItem *N27;
        TMenuItem *ExportObj;
        TMenuItem *e1;
        TExtBtn *LEFiles;
        TExtBtn *ebCompile;
        TMxPopupMenu *pmCompile;
        TMenuItem *MenuItem19;
        TMenuItem *MenuItem23;
        TMenuItem *MenuItem24;
        TMenuItem *MenuItem26;
        TMenuItem *MenuItem25;
        TMenuItem *MenuItem27;
        TMenuItem *MakeSoundOccluder1;
        TMenuItem *MenuItem29;
        TMenuItem *MenuItem32;
        TMenuItem *MenuItem33;
        TMenuItem *ExportErrorList1;
        TMenuItem *MenuItem34;
        TExtBtn *ExtBtn2;
        TMxPopupMenu *pmObjects;
        TMenuItem *MenuItem13;
        TMenuItem *MenuItem16;
        TMenuItem *MenuItem17;
        TMenuItem *ReloadObjects1;
        TMenuItem *CleanLibrary;
        TMenuItem *ClipEditor1;
        TExtBtn *ebImages;
        TMxPopupMenu *pmImages;
        TMenuItem *N11;
        TMenuItem *ImageEditor1;
        TMenuItem *MenuItem8;
        TMenuItem *UpdateSceneTextures1;
        TMenuItem *N10;
        TMenuItem *MenuItem9;
        TMenuItem *MenuItem10;
        TMenuItem *N7;
        TMenuItem *Editminimap1;
        TMenuItem *SyncTHM1;
        TExtBtn *ebSounds;
        TMxPopupMenu *pmSounds;
        TMenuItem *MenuItem11;
        TMenuItem *MenuItem12;
        TMenuItem *MenuItem15;
        TMenuItem *SynchronizeSounds1;
        TMenuItem *N23;
        TMenuItem *MenuItem14;
        TMenuItem *UpdateEnvironmentGeometry1;
        TExtBtn *ebLightAnimationEditor;
        TExtBtn *ebObjectList;
        TExtBtn *ebPreferences;
        TExtBtn *UseSimulatePositionsButton;
        TExtBtn *SimulateButton;
        TExtBtn *ExtBtn1;
        TMxPopupMenu *ViewPosPopupMenu;
        TMenuItem *Front1;
        TMenuItem *Back1;
        TMenuItem *Left1;
        TMenuItem *Right1;
        TMenuItem *Top1;
        TMenuItem *Bottom1;
        TMenuItem *Reset1;
        TExtBtn *ExtBtn3;
        TMxPopupMenu *CameraPopupMenu1;
        TMenuItem *Plane1;
        TMenuItem *ArcBall;
        TMenuItem *Fly1;
        TMxLabel *MxLabel1;
    void __fastcall ebEditUndoClick(TObject *Sender);
    void __fastcall ebEditRedoClick(TObject *Sender);
    void __fastcall ActionClick(TObject *Sender);
    void __fastcall ActionMoveClick(TObject *Sender);
    void __fastcall ActionRotateClick(TObject *Sender);
    void __fastcall ActionScaleClick(TObject *Sender);
    void __fastcall ebViewClick(TObject *Sender);
	void __fastcall ebZoomExtentsClick(TObject *Sender);
	void __fastcall ebZoomExtentsSelectedClick(TObject *Sender);
	void __fastcall ebCameraStyleClick(TObject *Sender);
	void __fastcall fsStorageRestorePlacement(TObject *Sender);
	void __fastcall ebAxisClick(TObject *Sender);
	void __fastcall ebAxisYClick(TObject *Sender);
	void __fastcall ebAxisZClick(TObject *Sender);
	void __fastcall ebAxisZXClick(TObject *Sender);
	void __fastcall ebSettingsClick(TObject *Sender);
	void __fastcall SimulateButtonClick(TObject *Sender);
	void __fastcall UseSimulatePositions(TObject *Sender);
        void __fastcall BsaveClick(TObject *Sender);
        void __fastcall bclearClick(TObject *Sender);
        void __fastcall BOpenFileClick(TObject *Sender);
        void __fastcall LEFilesMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall ebSceneFileMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall ebSceneMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall ebCompileMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall ExtBtn2MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall ebImagesMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall ebSoundsMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall ebLightAnimationEditorClick(TObject *Sender);
        void __fastcall ebObjectListClick(TObject *Sender);
        void __fastcall ebPreferencesClick(TObject *Sender);
        void __fastcall ebSoundsDragDrop(TObject *Sender, TObject *Source,
          int X, int Y);
        void __fastcall Front1Click(TObject *Sender);
        void __fastcall ExtBtn1MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall TestBClick(TObject *Sender);
        void __fastcall Back1Click(TObject *Sender);
        void __fastcall Left1Click(TObject *Sender);
        void __fastcall Right1Click(TObject *Sender);
        void __fastcall Top1Click(TObject *Sender);
        void __fastcall Bottom1Click(TObject *Sender);
        void __fastcall Reset1Click(TObject *Sender);
        void __fastcall Plane1Click(TObject *Sender);
        void __fastcall ArcBallClick(TObject *Sender);
        void __fastcall Fly1Click(TObject *Sender);
        void __fastcall ExtBtn3MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall Clear1Click(TObject *Sender);
        void __fastcall miOpenClick(TObject *Sender);
        void __fastcall Save1Click(TObject *Sender);
        void __fastcall SaveAs1Click(TObject *Sender);
        void __fastcall ebOpenSelClick(TObject *Sender);
        void __fastcall ebSaveSelClick(TObject *Sender);
        void __fastcall Makepack1Click(TObject *Sender);
        void __fastcall Quit1Click(TObject *Sender);
        void __fastcall Options1Click(TObject *Sender);
        void __fastcall Validate1Click(TObject *Sender);
        void __fastcall miSceneSummaryClick(TObject *Sender);
        void __fastcall miHightlightTextureClick(TObject *Sender);
        void __fastcall ClearDebugDraw1Click(TObject *Sender);
        void __fastcall ExportObjClick(TObject *Sender);
        void __fastcall e1Click(TObject *Sender);
        void __fastcall MenuItem23Click(TObject *Sender);
        void __fastcall MenuItem26Click(TObject *Sender);
        void __fastcall MenuItem25Click(TObject *Sender);
        void __fastcall MenuItem27Click(TObject *Sender);
        void __fastcall MakeSoundOccluder1Click(TObject *Sender);
        void __fastcall MenuItem29Click(TObject *Sender);
        void __fastcall MenuItem33Click(TObject *Sender);
        void __fastcall ExportErrorList1Click(TObject *Sender);
        void __fastcall MenuItem34Click(TObject *Sender);
        void __fastcall MenuItem16Click(TObject *Sender);
        void __fastcall ReloadObjects1Click(TObject *Sender);
        void __fastcall CleanLibraryClick(TObject *Sender);
        void __fastcall ClipEditor1Click(TObject *Sender);
        void __fastcall MenuItem12Click(TObject *Sender);
        void __fastcall SynchronizeSounds1Click(TObject *Sender);
        void __fastcall MenuItem14Click(TObject *Sender);
        void __fastcall UpdateEnvironmentGeometry1Click(TObject *Sender);
        void __fastcall ImageEditor1Click(TObject *Sender);
        void __fastcall UpdateSceneTextures1Click(TObject *Sender);
        void __fastcall MenuItem9Click(TObject *Sender);
        void __fastcall MenuItem10Click(TObject *Sender);
        void __fastcall Editminimap1Click(TObject *Sender);
        void __fastcall SyncTHM1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfraTopBar(TComponent* Owner);
    void OnTimer();
    void __fastcall RefreshBar();
};
//---------------------------------------------------------------------------
extern PACKAGE TfraTopBar *fraTopBar;
//---------------------------------------------------------------------------
#endif
