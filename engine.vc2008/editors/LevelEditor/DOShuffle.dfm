object frmDOShuffle: TfrmDOShuffle
  Left = 794
  Top = 213
  Width = 325
  Height = 454
  BorderIcons = [biSystemMenu]
  Caption = 'Detail objects'
  Color = 10528425
  Constraints.MaxWidth = 325
  Constraints.MinHeight = 454
  Constraints.MinWidth = 325
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  KeyPreview = True
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnKeyDown = FormKeyDown
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object paTools: TPanel
    Left = 150
    Top = 0
    Width = 159
    Height = 415
    Align = alRight
    BevelOuter = bvNone
    ParentColor = True
    TabOrder = 0
    object Panel3: TPanel
      Left = 0
      Top = 0
      Width = 159
      Height = 19
      Align = alTop
      BevelOuter = bvNone
      ParentColor = True
      TabOrder = 0
      object ebAppendIndex: TExtBtn
        Left = 28
        Top = 0
        Width = 130
        Height = 18
        Align = alNone
        BevelShow = False
        NormalColor = 15461355
        BtnColor = 4079166
        Caption = 'Append Color Index'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 15461355
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        FlatAlwaysEdge = True
        OnClick = ebAppendIndexClick
      end
      object ebMultiClear: TExtBtn
        Left = 1
        Top = 0
        Width = 26
        Height = 18
        Align = alNone
        BtnColor = 4079166
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        Glyph.Data = {
          C2010000424DC20100000000000036000000280000000C0000000B0000000100
          1800000000008C010000120B0000120B00000000000000000000FFFFFFFFFFFF
          FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
          FFFFFFFFFFFFFF000000000000FFFFFFFFFFFFFFFFFFFFFFFF000000000000FF
          FFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000FFFFFFFFFFFF000000000000
          FFFFFFFFFFFFFFFFFF000000000000FFFFFFFFFFFF0000000000000000000000
          00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000FFFFFFFFFFFF00000000
          0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000000000
          000000000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000
          00000000FFFFFFFFFFFF000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00
          0000000000000000000000FFFFFFFFFFFF000000000000FFFFFFFFFFFFFFFFFF
          000000000000FFFFFFFFFFFF000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
          FF000000000000FFFFFFFFFFFFFFFFFFFFFFFF000000000000FFFFFFFFFFFFFF
          FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
          FFFFFFFFFFFF}
        ParentFont = False
        Spacing = 0
        FlatAlwaysEdge = True
        OnClick = ebMultiClearClick
      end
    end
    object sbDO: TScrollBox
      Left = 0
      Top = 19
      Width = 159
      Height = 396
      VertScrollBar.ButtonSize = 11
      VertScrollBar.Increment = 10
      VertScrollBar.Size = 11
      VertScrollBar.Style = ssHotTrack
      VertScrollBar.Tracking = True
      Align = alClient
      BorderStyle = bsNone
      Color = 4473924
      ParentColor = False
      TabOrder = 1
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 150
    Height = 415
    Align = alClient
    BevelOuter = bvNone
    ParentColor = True
    TabOrder = 1
    object Splitter1: TSplitter
      Left = 0
      Top = 241
      Width = 150
      Height = 3
      Cursor = crVSplit
      Align = alTop
      Beveled = True
      ResizeStyle = rsUpdate
    end
    object tvItems: TElTree
      Left = 0
      Top = 244
      Width = 150
      Height = 152
      Cursor = crDefault
      LeftPosition = 0
      DragCursor = crDrag
      Align = alClient
      AlwaysKeepSelection = False
      AutoCollapse = False
      AutoExpand = True
      DockOrientation = doNoOrient
      DefaultSectionWidth = 120
      BorderSides = [ebsLeft, ebsRight, ebsTop, ebsBottom]
      Color = 5658198
      DragAllowed = True
      DrawFocusRect = False
      ExplorerEditMode = False
      Flat = True
      FocusedSelectColor = 10526880
      FocusedSelectTextColor = clBlack
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      FullRowSelect = False
      GradientSteps = 64
      HeaderHeight = 19
      HeaderHotTrack = False
      HeaderSections.Data = {
        F4FFFFFF07000000FCBF6F0E00100000FFFFFFFF000001010100667278000000
        00000000102700000001002C401C7A030000000000006C69000000000000016F
        00000000000000000001000000000000426F726465725374796C65070662734E
        6F6E650C436C69656E7448656967687402390B436C69656E745769647468038F
        0005436F6C6F7204A9A6A0000C466F6E742E4368010000000001000000000000
        000000000000FCBF6F0E00100000FFFFFFFF0000010101006672780000000000
        0000102700000001002CF44106100100000000006C69000000000000016F0000
        0000000000000001000000000000426F726465725374796C65070662734E6F6E
        650C436C69656E7448656967687402390B436C69656E745769647468038F0005
        436F6C6F7204A9A6A0000C466F6E742E43680100000000010000000000000000
        00000000FCBF6F0E00100000FFFFFFFF00000101010066727800000000000000
        102700000001002CA86C620E0200000000006C69000000000000016F00000000
        000000000001000000000000426F726465725374796C65070662734E6F6E650C
        436C69656E7448656967687402390B436C69656E745769647468038F0005436F
        6C6F7204A9A6A0000C466F6E742E436801000000000100000000000000000000
        0000FCBF6F0E00100000FFFFFFFF000001010100667278000000000000001027
        00000001002C0051320F0300000000006C69000000000000016F000000000000
        00000001000000000000426F726465725374796C65070662734E6F6E650C436C
        69656E7448656967687402390B436C69656E745769647468038F0005436F6C6F
        7204A9A6A0000C466F6E742E4368010000000001000000000000000000000000
        FCBF6F0E00100000FFFFFFFF0000010101006672780000000000000010270000
        0001002C7802F7020400000000006C69000000000000016F0000000000000000
        0001000000000000426F726465725374796C65070662734E6F6E650C436C6965
        6E7448656967687402390B436C69656E745769647468038F0005436F6C6F7204
        A9A6A0000C466F6E742E4368010000000001000000000000000000000000FCBF
        6F0E00100000FFFFFFFF00000101010066727800000000000000102700000001
        002CB4E1DA040500000000006C69000000000000016F00000000000000000001
        000000000000426F726465725374796C65070662734E6F6E650C436C69656E74
        48656967687402390B436C69656E745769647468038F0005436F6C6F7204A9A6
        A0000C466F6E742E4368010000000001000000000000000000000000FCBF6F0E
        00100000FFFFFFFF00000101010066727800000000000000102700000001002C
        288C870D0600000000006C69000000000000016F000000000000000000010000
        00000000426F726465725374796C65070662734E6F6E650C436C69656E744865
        6967687402390B436C69656E745769647468038F0005436F6C6F7204A9A6A000
        0C466F6E742E4368010000000001000000000000000000000000}
      HeaderFont.Charset = DEFAULT_CHARSET
      HeaderFont.Color = clWindowText
      HeaderFont.Height = -11
      HeaderFont.Name = 'MS Sans Serif'
      HeaderFont.Style = []
      HorizontalLines = True
      HorzDivLinesColor = 7368816
      HorzScrollBarStyles.ShowTrackHint = False
      HorzScrollBarStyles.Width = 17
      HorzScrollBarStyles.ButtonSize = 14
      HorzScrollBarStyles.UseSystemMetrics = False
      HorzScrollBarStyles.UseXPThemes = False
      IgnoreEnabled = False
      IncrementalSearch = False
      ItemIndent = 14
      KeepSelectionWithinLevel = False
      LineBorderActiveColor = clBlack
      LineBorderInactiveColor = clBlack
      LineHeight = 16
      LinesColor = clBlack
      MouseFrameSelect = True
      MultiSelect = False
      OwnerDrawMask = '~~@~~'
      ParentFont = False
      PlusMinusTransparent = True
      ScrollbarOpposite = False
      ScrollTracking = True
      ShowButtons = False
      ShowImages = False
      ShowLeafButton = False
      ShowLines = False
      ShowRootButtons = False
      SortMode = smAdd
      StoragePath = '\Tree'
      TabOrder = 0
      TabStop = True
      Tracking = False
      TrackColor = clBlack
      VertScrollBarStyles.ShowTrackHint = True
      VertScrollBarStyles.Width = 17
      VertScrollBarStyles.ButtonSize = 14
      VertScrollBarStyles.UseSystemMetrics = False
      VertScrollBarStyles.UseXPThemes = False
      VirtualityLevel = vlNone
      UseXPThemes = False
      TextColor = clBtnText
      BkColor = 5658198
      OnItemFocused = tvItemsItemFocused
      OnDragDrop = tvItemsDragDrop
      OnDragOver = tvItemsDragOver
      OnStartDrag = tvItemsStartDrag
      OnKeyPress = tvItemsKeyPress
    end
    object paObject: TPanel
      Left = 0
      Top = 0
      Width = 150
      Height = 241
      Align = alTop
      BevelOuter = bvNone
      Constraints.MinHeight = 240
      ParentColor = True
      TabOrder = 1
      object paObjectProps: TPanel
        Left = 0
        Top = 158
        Width = 150
        Height = 83
        Align = alClient
        BevelOuter = bvNone
        Color = 4473924
        TabOrder = 0
      end
      object paImage: TMxPanel
        Left = 0
        Top = 0
        Width = 150
        Height = 158
        Align = alTop
        BevelOuter = bvLowered
        Caption = '<no image>'
        Color = 5658198
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 15461355
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
        OnPaint = paImagePaint
      end
    end
    object Panel1: TPanel
      Left = 0
      Top = 396
      Width = 150
      Height = 19
      Align = alBottom
      BevelOuter = bvNone
      ParentColor = True
      TabOrder = 2
      object ebAddObject: TExtBtn
        Left = 1
        Top = 1
        Width = 26
        Height = 17
        Align = alNone
        BevelShow = False
        NormalColor = 15461355
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 15461355
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        Glyph.Data = {
          AE000000424DAE00000000000000360000002800000006000000060000000100
          18000000000078000000120B0000120B00000000000000000000FFFFFFFFFFFF
          1C1C1C1C1C1CFFFFFFFFFFFF0000FFFFFFFFFFFF191919191919FFFFFFFFFFFF
          00001B1B1B1717170303030303031717171B1B1B00001B1B1B17171703030303
          03031717171B1B1B0000FFFFFFFFFFFF191919191919FFFFFFFFFFFF0000FFFF
          FFFFFFFF1C1C1C1C1C1CFFFFFFFFFFFF0000}
        ParentFont = False
        FlatAlwaysEdge = True
        OnClick = ebAddObjectClick
      end
      object ebDelObject: TExtBtn
        Left = 27
        Top = 1
        Width = 26
        Height = 17
        Align = alNone
        BevelShow = False
        NormalColor = 15461355
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 15461355
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        Glyph.Data = {
          AE000000424DAE00000000000000360000002800000006000000060000000100
          18000000000078000000120B0000120B00000000000000000000FFFFFFFFFFFF
          FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
          00000B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B00000B0B0B0B0B0B0B0B0B0B
          0B0B0B0B0B0B0B0B0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFF
          FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000}
        ParentFont = False
        FlatAlwaysEdge = True
        OnClick = ebDelObjectClick
      end
      object ebLoadList: TExtBtn
        Left = 79
        Top = 1
        Width = 39
        Height = 17
        Align = alNone
        BevelShow = False
        NormalColor = 15461355
        Caption = 'Load...'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 15461355
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        FlatAlwaysEdge = True
        OnClick = ebLoadListClick
      end
      object ebSaveList: TExtBtn
        Left = 118
        Top = 1
        Width = 39
        Height = 17
        Align = alNone
        BevelShow = False
        NormalColor = 15461355
        Caption = 'Save...'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = 15461355
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        FlatAlwaysEdge = True
        OnClick = ebSaveListClick
      end
      object ebClearList: TExtBtn
        Left = 53
        Top = 1
        Width = 26
        Height = 17
        Align = alNone
        BevelShow = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        Glyph.Data = {
          C2010000424DC20100000000000036000000280000000C0000000B0000000100
          1800000000008C010000120B0000120B00000000000000000000FFFFFFFFFFFF
          FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
          FFFFFFFFFFFFFF000000000000FFFFFFFFFFFFFFFFFFFFFFFF000000000000FF
          FFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000FFFFFFFFFFFF000000000000
          FFFFFFFFFFFFFFFFFF000000000000FFFFFFFFFFFF0000000000000000000000
          00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000FFFFFFFFFFFF00000000
          0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000000000
          000000000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000
          00000000FFFFFFFFFFFF000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00
          0000000000000000000000FFFFFFFFFFFF000000000000FFFFFFFFFFFFFFFFFF
          000000000000FFFFFFFFFFFF000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
          FF000000000000FFFFFFFFFFFFFFFFFFFFFFFF000000000000FFFFFFFFFFFFFF
          FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
          FFFFFFFFFFFF}
        ParentFont = False
        FlatAlwaysEdge = True
        OnClick = ebClearListClick
      end
    end
  end
  object fsStorage: TFormStorage
    OnSavePlacement = fsStorageSavePlacement
    OnRestorePlacement = fsStorageRestorePlacement
    StoredProps.Strings = (
      'paObject.Height')
    StoredValues = <
      item
        Name = 'EmitterDirX'
        Value = 0
      end
      item
        Name = 'EmitterDirY'
        Value = 0
      end
      item
        Name = 'EmitterDirZ'
        Value = 0
      end>
  end
end
