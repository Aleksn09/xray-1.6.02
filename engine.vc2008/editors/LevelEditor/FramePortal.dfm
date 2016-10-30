object fraPortal: TfraPortal
  Left = 488
  Top = 268
  Width = 225
  Height = 290
  VertScrollBar.ButtonSize = 11
  VertScrollBar.Range = 257
  VertScrollBar.Smooth = True
  VertScrollBar.Style = ssFlat
  VertScrollBar.Visible = False
  Align = alClient
  BorderStyle = bsNone
  Color = 10528425
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clBlack
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = True
  PixelsPerInch = 96
  TextHeight = 13
  object paCommands: TPanel
    Left = 0
    Top = 0
    Width = 209
    Height = 257
    Align = alClient
    Color = 4473924
    TabOrder = 0
    object APHeadLabel1: TLabel
      Left = 1
      Top = 1
      Width = 207
      Height = 13
      Align = alTop
      Alignment = taCenter
      Caption = 'Command'
      Color = 4079166
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 15461355
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      OnClick = TopClick
    end
    object ExtBtn2: TExtBtn
      Left = 205
      Top = 2
      Width = 11
      Height = 11
      Align = alNone
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Glyph.Data = {
        DE000000424DDE00000000000000360000002800000007000000070000000100
        180000000000A8000000120B0000120B00000000000000000000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFF000000FFFFFFFFFFFFFFFFFF000000FFFFFFFFFFFFFFFFFF00
        0000FFFFFFFFFFFF000000000000000000FFFFFFFFFFFF000000FFFFFF000000
        000000000000000000000000FFFFFF0000000000000000000000000000000000
        00000000000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00
        0000}
      ParentFont = False
      OnClick = PanelMinClick
    end
    object ebInvertOrient: TExtBtn
      Left = 1
      Top = 14
      Width = 207
      Height = 15
      Align = alTop
      BevelShow = False
      HotTrack = True
      HotColor = 15790320
      NormalColor = 15461355
      Caption = 'Invert Orientation'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 15461355
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      OnClick = ebInvertOrientClick
    end
    object ebComputeAllPortals: TExtBtn
      Left = 1
      Top = 29
      Width = 207
      Height = 15
      Align = alTop
      BevelShow = False
      HotTrack = True
      HotColor = 15790320
      NormalColor = 15461355
      Caption = 'Compute All Portals'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 15461355
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      OnClick = ebComputeAllPortalsClick
    end
    object ebComputeSelPortals: TExtBtn
      Left = 1
      Top = 44
      Width = 207
      Height = 15
      Align = alTop
      BevelShow = False
      HotTrack = True
      HotColor = 15790320
      NormalColor = 15461355
      Caption = 'Compute Sel. Portals'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 15461355
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      OnClick = ebComputeClick
    end
    object ExtBtn1: TExtBtn
      Left = 1
      Top = 59
      Width = 207
      Height = 15
      Align = alTop
      BevelShow = False
      HotTrack = True
      HotColor = 15790320
      NormalColor = 15461355
      Caption = 'Remove Similar'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 15461355
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      OnClick = ExtBtn1Click
    end
  end
  object fsStorage: TFormStorage
    IniSection = 'FramePortal'
    Options = []
    Version = 1
    StoredProps.Strings = (
      'paCommands.Height'
      'paCommands.Tag')
    StoredValues = <>
  end
end
