#include "stdafx.h"
#pragma hdrstop

#include "TopBar.h"
#include "UI_LevelTools.h"
#include "../ECore/Editor/UI_ToolsCustom.h"
#include "../ECore/Editor/ui_main.h"
#include "../ECore/Editor/ui_MainCommand.h"
#include "UI_LevelTools.h"
#include "lephysics.h"
#include "ui_levelmain.h"
#include "ObjectList.h"
#include "scene.h"
#include "EditLibrary.h"
#include "UI_LevelTools.h"
#include "ui_levelmain.h"
#include "CustomObject.h"
#include "ESceneCustomMTools.h"
#include "FrmDBXpacker.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "ExtBtn"
#pragma link "mxPlacemnt"
#pragma link "MxMenus"
#pragma link "Gradient"
#pragma link "MXCtrls"
#pragma resource "*.dfm"
TfraTopBar *fraTopBar;
//---------------------------------------------------------------------------
__fastcall TfraTopBar::TfraTopBar(TComponent* Owner)
        : TFrame(Owner)
{
    ebActionSelect->Tag     = etaSelect;
    ebActionAdd->Tag        = etaAdd;
    ebActionMove->Tag       = etaMove;
    ebActionRotate->Tag     = etaRotate;
    ebActionScale->Tag      = etaScale;

    ebAxisX->Tag			= etAxisX;
    ebAxisY->Tag			= etAxisY;
    ebAxisZ->Tag			= etAxisZ;
    ebAxisZX->Tag			= etAxisZX;
    
	ebCSParent->Tag			= etfCSParent;
	ebNUScale->Tag			= etfNUScale;
	ebNormalAlign->Tag		= etfNormalAlign;
	ebGSnap->Tag			= etfGSnap;
	ebOSnap->Tag			= etfOSnap;
	ebMTSnap->Tag			= etfMTSnap;
	ebVSnap->Tag			= etfVSnap;
	ebASnap->Tag			= etfASnap;
	ebMSnap->Tag			= etfMSnap;

    DEFINE_INI(fsStorage);
}
//---------------------------------------------------------------------------

void TfraTopBar::OnTimer(){
    for (int j=0; j<ComponentCount; j++){
        TComponent* temp = Components[j];
        if (dynamic_cast<TExtBtn *>(temp) != NULL)
            ((TExtBtn*)temp)->UpdateMouseInControl();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebEditUndoClick(TObject *Sender)
{    
 	ExecCommand( COMMAND_UNDO );
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebEditRedoClick(TObject *Sender)
{
 	ExecCommand( COMMAND_REDO );
}
//---------------------------------------------------------------------------
void __fastcall TfraTopBar::ActionClick(TObject *Sender)
{
    TExtBtn* btn=dynamic_cast<TExtBtn*>(Sender);
    VERIFY(btn);
    ExecCommand(COMMAND_CHANGE_ACTION, btn->Tag);
}
void __fastcall TfraTopBar::ActionMoveClick(TObject *Sender)
{
    TExtBtn* btn=dynamic_cast<TExtBtn*>(Sender);
    VERIFY(btn);
    ExecCommand(COMMAND_CHANGE_ACTION, btn->Tag);
    ebActionMove->NumGlyphs = 1;
    ebActionRotate->NumGlyphs = 2;
    ebActionScale->NumGlyphs = 2;
}
void __fastcall TfraTopBar::ActionRotateClick(TObject *Sender)
{
    TExtBtn* btn=dynamic_cast<TExtBtn*>(Sender);
    VERIFY(btn);
    ExecCommand(COMMAND_CHANGE_ACTION, btn->Tag);
    ebActionMove->NumGlyphs = 2;
    ebActionRotate->NumGlyphs = 1;
    ebActionScale->NumGlyphs = 2;
}
void __fastcall TfraTopBar::ActionScaleClick(TObject *Sender)
{
    TExtBtn* btn=dynamic_cast<TExtBtn*>(Sender);
    VERIFY(btn);
    ExecCommand(COMMAND_CHANGE_ACTION, btn->Tag);
    ebActionMove->NumGlyphs = 2;
    ebActionRotate->NumGlyphs = 2;
    ebActionScale->NumGlyphs = 1;
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebAxisClick(TObject *Sender)
{
    TExtBtn* btn=dynamic_cast<TExtBtn*>(Sender);
    VERIFY(btn);
    ExecCommand(COMMAND_CHANGE_AXIS, btn->Tag);
    ebAxisX->NumGlyphs = 1;
    ebAxisY->NumGlyphs = 2;
    ebAxisZ->NumGlyphs = 2;
    ebAxisZX->NumGlyphs = 2;
}
void __fastcall TfraTopBar::ebAxisYClick(TObject *Sender)
{
    TExtBtn* btn=dynamic_cast<TExtBtn*>(Sender);
    VERIFY(btn);
    ExecCommand(COMMAND_CHANGE_AXIS, btn->Tag);
    ebAxisX->NumGlyphs = 2;
    ebAxisY->NumGlyphs = 1;
    ebAxisZ->NumGlyphs = 2;
    ebAxisZX->NumGlyphs = 2;
}
void __fastcall TfraTopBar::ebAxisZClick(TObject *Sender)
{
    TExtBtn* btn=dynamic_cast<TExtBtn*>(Sender);
    VERIFY(btn);
    ExecCommand(COMMAND_CHANGE_AXIS, btn->Tag);
    ebAxisX->NumGlyphs = 2;
    ebAxisY->NumGlyphs = 2;
    ebAxisZ->NumGlyphs = 1;
    ebAxisZX->NumGlyphs = 2;
}
void __fastcall TfraTopBar::ebAxisZXClick(TObject *Sender)
{
    TExtBtn* btn=dynamic_cast<TExtBtn*>(Sender);
    VERIFY(btn);
    ExecCommand(COMMAND_CHANGE_AXIS, btn->Tag);
    ebAxisX->NumGlyphs = 2;
    ebAxisY->NumGlyphs = 2;
    ebAxisZ->NumGlyphs = 2;
    ebAxisZX->NumGlyphs = 1;
}

void __fastcall TfraTopBar::ebSettingsClick(TObject *Sender)
{
    TExtBtn* btn=dynamic_cast<TExtBtn*>(Sender);
    VERIFY(btn);
    ExecCommand(COMMAND_SET_SETTINGS, btn->Tag, btn->Down);
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebViewClick(TObject *Sender)
{
    /*TExtBtn* btn=dynamic_cast<TExtBtn*>(Sender);
    if (btn){
        if (btn==ebViewFront)   EDevice.m_Camera.ViewFront();
        if (btn==ebViewBack)    EDevice.m_Camera.ViewBack();
        if (btn==ebViewLeft)    EDevice.m_Camera.ViewLeft();
        if (btn==ebViewRight)   EDevice.m_Camera.ViewRight();
        if (btn==ebViewTop)     EDevice.m_Camera.ViewTop();
        if (btn==ebViewBottom)  EDevice.m_Camera.ViewBottom();
        if (btn==ebViewReset)  	EDevice.m_Camera.ViewReset();
    }
    UI->RedrawScene();*/
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::RefreshBar()
{
    TExtBtn* btn		= 0;
	//actions
    switch(Tools->GetAction()){
    case etaSelect: 	btn=ebActionSelect; 	break;
    case etaAdd:    	btn=ebActionAdd; 		break;
    case etaMove:   	btn=ebActionMove; 		break;
    case etaRotate: 	btn=ebActionRotate; 	break;
    case etaScale:		btn=ebActionScale;		break;
    default: THROW;
    }
	btn->Down 			= true;
    // axis
	switch (Tools->GetAxis()){
    case etAxisX: 		btn=ebAxisX; 	break;
    case etAxisY: 		btn=ebAxisY; 	break;
    case etAxisZ: 		btn=ebAxisZ; 	break;
    case etAxisZX: 		btn=ebAxisZX; 	break;
    case etAxisUndefined:	btn=NULL; 	break;
    default: THROW;
    }
    
    if(btn)
		btn->Down 			= true;
    // settings
	ebCSParent->Down	= Tools->GetSettings(etfCSParent);
	ebNUScale->Down		= Tools->GetSettings(etfNUScale);
	ebNormalAlign->Down	= Tools->GetSettings(etfNormalAlign);
	ebGSnap->Down		= Tools->GetSettings(etfGSnap);
	ebOSnap->Down		= Tools->GetSettings(etfOSnap);
	ebMTSnap->Down		= Tools->GetSettings(etfMTSnap);
	ebVSnap->Down		= Tools->GetSettings(etfVSnap);
	ebASnap->Down		= Tools->GetSettings(etfASnap);
	ebMSnap->Down		= Tools->GetSettings(etfMSnap);

    SimulateButton->Down		= g_scene_physics.Simulating();

    // redraw scene
    UI->RedrawScene		();
}
//---------------------------------------------------------------------------


void __fastcall TfraTopBar::ebZoomExtentsClick(TObject *Sender)
{
 	ExecCommand( COMMAND_ZOOM_EXTENTS, FALSE );
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebZoomExtentsSelectedClick(TObject *Sender)
{
 	ExecCommand( COMMAND_ZOOM_EXTENTS, TRUE );
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebCameraStyleClick(TObject *Sender)
{
	EDevice.m_Camera.SetStyle((ECameraStyle)((TExtBtn*)Sender)->Tag);
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::fsStorageRestorePlacement(TObject *Sender)
{
	/*if (ebCameraPlane->Down) 			EDevice.m_Camera.SetStyle(csPlaneMove);
	else if (ebCameraArcBall->Down) 	EDevice.m_Camera.SetStyle(cs3DArcBall);
	else if (ebCameraFly->Down) 		EDevice.m_Camera.SetStyle(csFreeFly);
    UI->RedrawScene(); */
}
//---------------------------------------------------------------------------


void __fastcall TfraTopBar::SimulateButtonClick(TObject *Sender)
{
   	if ( SimulateButton->Down )
    		g_scene_physics.CreateShellsSelected();
    else
    		g_scene_physics.DestroyAll();

    
    ExecCommand( COMMAND_SIMULATE, TRUE );

//
}
//---------------------------------------------------------------------------



void __fastcall TfraTopBar::UseSimulatePositions(TObject *Sender)
{
      g_scene_physics.UseSimulatePoses();
     ExecCommand( COMMAND_USE_SIMULATE_POSITIONS, TRUE );
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::BsaveClick(TObject *Sender)
{
	ExecCommand( COMMAND_SAVE, xr_string(LTools->m_LastFileName.c_str()) );
}
//---------------------------------------------------------------------------


void __fastcall TfraTopBar::bclearClick(TObject *Sender)
{
	ExecCommand( COMMAND_CLEAR );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::BOpenFileClick(TObject *Sender)
{
	ExecCommand( COMMAND_LOAD );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::LEFilesMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	FHelper.ShowPPMenu(pmSceneFile,dynamic_cast<TExtBtn*>(Sender));
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebSceneFileMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	FHelper.ShowPPMenu(pmSceneFile,dynamic_cast<TExtBtn*>(Sender));
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebSceneMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	FHelper.ShowPPMenu(pmScene,dynamic_cast<TExtBtn*>(Sender));        
}
//---------------------------------------------------------------------------


void __fastcall TfraTopBar::ebCompileMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	FHelper.ShowPPMenu(pmCompile,dynamic_cast<TExtBtn*>(Sender));        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ExtBtn2MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	FHelper.ShowPPMenu(pmObjects,dynamic_cast<TExtBtn*>(Sender));
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebImagesMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	FHelper.ShowPPMenu(pmImages,dynamic_cast<TExtBtn*>(Sender));        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebSoundsMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	FHelper.ShowPPMenu(pmSounds,dynamic_cast<TExtBtn*>(Sender));
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebLightAnimationEditorClick(TObject *Sender)
{
	ExecCommand(COMMAND_LANIM_EDITOR);
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebObjectListClick(TObject *Sender)
{
	ExecCommand( COMMAND_SHOW_OBJECTLIST );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebPreferencesClick(TObject *Sender)
{
	ExecCommand(COMMAND_EDITOR_PREF);
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebSoundsDragDrop(TObject *Sender,
      TObject *Source, int X, int Y)
{
ebSounds->BevelShow = true;
}
//---------------------------------------------------------------------------


void __fastcall TfraTopBar::Front1Click(TObject *Sender)
{
    TMenuItem* btn=dynamic_cast<TMenuItem*>(Sender);
    if (btn){
        if (btn==Front1)   {EDevice.m_Camera.ViewFront(); ExtBtn1->Caption = "[ Front ]";};
        if (btn==Back1)    {EDevice.m_Camera.ViewBack(); ExtBtn1->Caption = "[ Back ]";};
        if (btn==Left1)    {EDevice.m_Camera.ViewLeft(); ExtBtn1->Caption = "[ Left ]";};
        if (btn==Right1)   {EDevice.m_Camera.ViewRight(); ExtBtn1->Caption = "[ Right ]";};
        if (btn==Top1)     {EDevice.m_Camera.ViewTop(); ExtBtn1->Caption = "[ Top ]";};
        if (btn==Bottom1)  {EDevice.m_Camera.ViewBottom(); ExtBtn1->Caption = "[ Bottom ]";};
        if (btn==Reset1)  	{EDevice.m_Camera.ViewReset(); ExtBtn1->Caption = "[ Perspective ]";};
    }
    UI->RedrawScene();
}
//---------------------------------------------------------------------------



void __fastcall TfraTopBar::ExtBtn1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	FHelper.ShowPPMenu(ViewPosPopupMenu,dynamic_cast<TExtBtn*>(Sender));
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::TestBClick(TObject *Sender)
{
    ebAxisX->NumGlyphs = 2;
    ebAxisY->NumGlyphs = 2;
    ebAxisX->NumGlyphs = 2;
    ebAxisZX->NumGlyphs = 2;
}
//---------------------------------------------------------------------------


void __fastcall TfraTopBar::Back1Click(TObject *Sender)
{
    TMenuItem* btn=dynamic_cast<TMenuItem*>(Sender);
    if (btn){
        if (btn==Front1)   {EDevice.m_Camera.ViewFront(); ExtBtn1->Caption = "[ Front ]";};
        if (btn==Back1)    {EDevice.m_Camera.ViewBack(); ExtBtn1->Caption = "[ Back ]";};
        if (btn==Left1)    {EDevice.m_Camera.ViewLeft(); ExtBtn1->Caption = "[ Left ]";};
        if (btn==Right1)   {EDevice.m_Camera.ViewRight(); ExtBtn1->Caption = "[ Right ]";};
        if (btn==Top1)     {EDevice.m_Camera.ViewTop(); ExtBtn1->Caption = "[ Top ]";};
        if (btn==Bottom1)  {EDevice.m_Camera.ViewBottom(); ExtBtn1->Caption = "[ Bottom ]";};
        if (btn==Reset1)  	{EDevice.m_Camera.ViewReset(); ExtBtn1->Caption = "[ Perspective ]";};
    }
    UI->RedrawScene();        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Left1Click(TObject *Sender)
{
    TMenuItem* btn=dynamic_cast<TMenuItem*>(Sender);
    if (btn){
        if (btn==Front1)   {EDevice.m_Camera.ViewFront(); ExtBtn1->Caption = "[ Front ]";};
        if (btn==Back1)    {EDevice.m_Camera.ViewBack(); ExtBtn1->Caption = "[ Back ]";};
        if (btn==Left1)    {EDevice.m_Camera.ViewLeft(); ExtBtn1->Caption = "[ Left ]";};
        if (btn==Right1)   {EDevice.m_Camera.ViewRight(); ExtBtn1->Caption = "[ Right ]";};
        if (btn==Top1)     {EDevice.m_Camera.ViewTop(); ExtBtn1->Caption = "[ Top ]";};
        if (btn==Bottom1)  {EDevice.m_Camera.ViewBottom(); ExtBtn1->Caption = "[ Bottom ]";};
        if (btn==Reset1)  	{EDevice.m_Camera.ViewReset(); ExtBtn1->Caption = "[ Perspective ]";};
    }
    UI->RedrawScene();        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Right1Click(TObject *Sender)
{
    TMenuItem* btn=dynamic_cast<TMenuItem*>(Sender);
    if (btn){
        if (btn==Front1)   {EDevice.m_Camera.ViewFront(); ExtBtn1->Caption = "[ Front ]";};
        if (btn==Back1)    {EDevice.m_Camera.ViewBack(); ExtBtn1->Caption = "[ Back ]";};
        if (btn==Left1)    {EDevice.m_Camera.ViewLeft(); ExtBtn1->Caption = "[ Left ]";};
        if (btn==Right1)   {EDevice.m_Camera.ViewRight(); ExtBtn1->Caption = "[ Right ]";};
        if (btn==Top1)     {EDevice.m_Camera.ViewTop(); ExtBtn1->Caption = "[ Top ]";};
        if (btn==Bottom1)  {EDevice.m_Camera.ViewBottom(); ExtBtn1->Caption = "[ Bottom ]";};
        if (btn==Reset1)  	{EDevice.m_Camera.ViewReset(); ExtBtn1->Caption = "[ Perspective ]";};
    }
    UI->RedrawScene();        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Top1Click(TObject *Sender)
{
    TMenuItem* btn=dynamic_cast<TMenuItem*>(Sender);
    if (btn){
        if (btn==Front1)   {EDevice.m_Camera.ViewFront(); ExtBtn1->Caption = "[ Front ]";};
        if (btn==Back1)    {EDevice.m_Camera.ViewBack(); ExtBtn1->Caption = "[ Back ]";};
        if (btn==Left1)    {EDevice.m_Camera.ViewLeft(); ExtBtn1->Caption = "[ Left ]";};
        if (btn==Right1)   {EDevice.m_Camera.ViewRight(); ExtBtn1->Caption = "[ Right ]";};
        if (btn==Top1)     {EDevice.m_Camera.ViewTop(); ExtBtn1->Caption = "[ Top ]";};
        if (btn==Bottom1)  {EDevice.m_Camera.ViewBottom(); ExtBtn1->Caption = "[ Bottom ]";};
        if (btn==Reset1)  	{EDevice.m_Camera.ViewReset(); ExtBtn1->Caption = "[ Perspective ]";};
    }
    UI->RedrawScene();        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Bottom1Click(TObject *Sender)
{
    TMenuItem* btn=dynamic_cast<TMenuItem*>(Sender);
    if (btn){
        if (btn==Front1)   {EDevice.m_Camera.ViewFront(); ExtBtn1->Caption = "[ Front ]";};
        if (btn==Back1)    {EDevice.m_Camera.ViewBack(); ExtBtn1->Caption = "[ Back ]";};
        if (btn==Left1)    {EDevice.m_Camera.ViewLeft(); ExtBtn1->Caption = "[ Left ]";};
        if (btn==Right1)   {EDevice.m_Camera.ViewRight(); ExtBtn1->Caption = "[ Right ]";};
        if (btn==Top1)     {EDevice.m_Camera.ViewTop(); ExtBtn1->Caption = "[ Top ]";};
        if (btn==Bottom1)  {EDevice.m_Camera.ViewBottom(); ExtBtn1->Caption = "[ Bottom ]";};
        if (btn==Reset1)  	{EDevice.m_Camera.ViewReset(); ExtBtn1->Caption = "[ Perspective ]";};
    }
    UI->RedrawScene();        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Reset1Click(TObject *Sender)
{
    TMenuItem* btn=dynamic_cast<TMenuItem*>(Sender);
    if (btn){
        if (btn==Front1)   {EDevice.m_Camera.ViewFront(); ExtBtn1->Caption = "[ Front ]";};
        if (btn==Back1)    {EDevice.m_Camera.ViewBack(); ExtBtn1->Caption = "[ Back ]";};
        if (btn==Left1)    {EDevice.m_Camera.ViewLeft(); ExtBtn1->Caption = "[ Left ]";};
        if (btn==Right1)   {EDevice.m_Camera.ViewRight(); ExtBtn1->Caption = "[ Right ]";};
        if (btn==Top1)     {EDevice.m_Camera.ViewTop(); ExtBtn1->Caption = "[ Top ]";};
        if (btn==Bottom1)  {EDevice.m_Camera.ViewBottom(); ExtBtn1->Caption = "[ Bottom ]";};
        if (btn==Reset1)  	{EDevice.m_Camera.ViewReset(); ExtBtn1->Caption = "[ Perspective ]";};
    }
    UI->RedrawScene();        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Plane1Click(TObject *Sender)
{
	EDevice.m_Camera.SetStyle(csPlaneMove);
        ExtBtn3->Caption = "[ Plane ]";
    UI->RedrawScene();
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ArcBallClick(TObject *Sender)
{
	EDevice.m_Camera.SetStyle(cs3DArcBall);
        ExtBtn3->Caption = "[ ArtBall ]";
    UI->RedrawScene();
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Fly1Click(TObject *Sender)
{
        EDevice.m_Camera.SetStyle(csFreeFly);
        ExtBtn3->Caption = "[ Fly ]";
    UI->RedrawScene();
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ExtBtn3MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	FHelper.ShowPPMenu(CameraPopupMenu1,dynamic_cast<TExtBtn*>(Sender));        
}
//---------------------------------------------------------------------------


void __fastcall TfraTopBar::Clear1Click(TObject *Sender)
{
	ExecCommand( COMMAND_CLEAR );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::miOpenClick(TObject *Sender)
{
	ExecCommand( COMMAND_LOAD );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Save1Click(TObject *Sender)
{
	ExecCommand( COMMAND_SAVE, xr_string(LTools->m_LastFileName.c_str()) );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::SaveAs1Click(TObject *Sender)
{
	ExecCommand( COMMAND_SAVE, 0, 1 );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebOpenSelClick(TObject *Sender)
{
 	ExecCommand( COMMAND_LOAD_SELECTION );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ebSaveSelClick(TObject *Sender)
{
 	ExecCommand( COMMAND_SAVE_SELECTION );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Makepack1Click(TObject *Sender)
{
        TDB_packer::ActivatePacker();        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Quit1Click(TObject *Sender)
{
	ExecCommand(COMMAND_QUIT);        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Options1Click(TObject *Sender)
{
	ExecCommand( COMMAND_OPTIONS, CCommandVar("Scene") );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Validate1Click(TObject *Sender)
{
	ExecCommand( COMMAND_VALIDATE_SCENE );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::miSceneSummaryClick(TObject *Sender)
{
	ExecCommand( COMMAND_CLEAR_SCENE_SUMMARY );
	ExecCommand( COMMAND_COLLECT_SCENE_SUMMARY );
	ExecCommand( COMMAND_SHOW_SCENE_SUMMARY );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::miHightlightTextureClick(TObject *Sender)
{
	ExecCommand( COMMAND_SCENE_HIGHLIGHT_TEXTURE );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ClearDebugDraw1Click(TObject *Sender)
{
	ExecCommand(COMMAND_CLEAR_DEBUG_DRAW);        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ExportObjClick(TObject *Sender)
{
        Scene->ExportObj(false);        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::e1Click(TObject *Sender)
{
        Scene->ExportObj(true);        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem23Click(TObject *Sender)
{
	ExecCommand( COMMAND_BUILD );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem26Click(TObject *Sender)
{
	ExecCommand( COMMAND_MAKE_GAME );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem25Click(TObject *Sender)
{
	ExecCommand( COMMAND_MAKE_DETAILS );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem27Click(TObject *Sender)
{
	ExecCommand( COMMAND_MAKE_HOM );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MakeSoundOccluder1Click(TObject *Sender)
{
	ExecCommand( COMMAND_MAKE_SOM );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem29Click(TObject *Sender)
{
	ExecCommand( COMMAND_MAKE_AIMAP );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem33Click(TObject *Sender)
{
	ExecCommand(COMMAND_IMPORT_COMPILER_ERROR);        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ExportErrorList1Click(TObject *Sender)
{
	ExecCommand(COMMAND_EXPORT_COMPILER_ERROR);        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem34Click(TObject *Sender)
{
	ExecCommand(COMMAND_CLEAR_DEBUG_DRAW);        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem16Click(TObject *Sender)
{
	ExecCommand( COMMAND_LIBRARY_EDITOR );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ReloadObjects1Click(TObject *Sender)
{
	ExecCommand( COMMAND_RELOAD_OBJECTS );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::CleanLibraryClick(TObject *Sender)
{
	ExecCommand( COMMAND_CLEAN_LIBRARY );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ClipEditor1Click(TObject *Sender)
{
	ExecCommand				(COMMAND_SHOW_CLIP_EDITOR);        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem12Click(TObject *Sender)
{
	ExecCommand(COMMAND_SOUND_EDITOR);        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::SynchronizeSounds1Click(TObject *Sender)
{
	ExecCommand(COMMAND_SYNC_SOUNDS);        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem14Click(TObject *Sender)
{
	ExecCommand( COMMAND_REFRESH_SOUND_ENVS );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::UpdateEnvironmentGeometry1Click(
      TObject *Sender)
{
	ExecCommand( COMMAND_REFRESH_SOUND_ENV_GEOMETRY );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::ImageEditor1Click(TObject *Sender)
{
	ExecCommand( COMMAND_IMAGE_EDITOR );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::UpdateSceneTextures1Click(TObject *Sender)
{
	ExecCommand( COMMAND_RELOAD_TEXTURES );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem9Click(TObject *Sender)
{
	ExecCommand( COMMAND_REFRESH_TEXTURES );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::MenuItem10Click(TObject *Sender)
{
	ExecCommand( COMMAND_CHECK_TEXTURES );        
}
//---------------------------------------------------------------------------

void __fastcall TfraTopBar::Editminimap1Click(TObject *Sender)
{
	ExecCommand( COMMAND_MINIMAP_EDITOR );        
}
//---------------------------------------------------------------------------
 #include "..\ECore\editor\EThumbnail.h"
void __fastcall TfraTopBar::SyncTHM1Click(TObject *Sender)
{
        FS_FileSet      files;
        FS.file_list    (files,_textures_,FS_ListFiles,"*.thm");
        FS_FileSet::iterator I = files.begin();
        FS_FileSet::iterator E = files.end();

        for(; I!=E; ++I)
        {
                ETextureThumbnail* TH = xr_new<ETextureThumbnail>( (*I).name.c_str(), false);
                TH->Load((*I).name.c_str(),_textures_);
                TH->Save();
                xr_delete(TH);
        }        
}
//---------------------------------------------------------------------------

