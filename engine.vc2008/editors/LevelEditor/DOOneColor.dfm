object frmOneColor: TfrmOneColor
  Left = 556
  Top = 385
  Align = alTop
  BorderIcons = []
  BorderStyle = bsNone
  ClientHeight = 57
  ClientWidth = 143
  Color = 10528425
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poScreenCenter
  Scaled = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 0
    Top = 0
    Width = 143
    Height = 57
  end
  object Bevel2: TBevel
    Left = 1
    Top = 1
    Width = 141
    Height = 55
    Style = bsRaised
  end
  object mcColor: TMultiObjColor
    Left = 3
    Top = 15
    Width = 23
    Height = 39
    Shape = stRoundRect
    OnMouseDown = mcColorMouseDown
  end
  object ebMultiRemove: TExtBtn
    Left = 3
    Top = 2
    Width = 23
    Height = 13
    Align = alNone
    BtnColor = 4473924
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Glyph.Data = {
      56010000424D560100000000000036000000280000000A000000090000000100
      18000000000020010000120B0000120B00000000000000000000C8D0D4C8D0D4
      C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D40000C8D0D4000000
      000000C8D0D4C8D0D4C8D0D4C8D0D4000000000000C8D0D40000C8D0D4C8D0D4
      000000000000C8D0D4C8D0D4000000000000C8D0D4C8D0D40000C8D0D4C8D0D4
      C8D0D4000000000000000000000000C8D0D4C8D0D4C8D0D40000C8D0D4C8D0D4
      C8D0D4C8D0D4000000000000C8D0D4C8D0D4C8D0D4C8D0D40000C8D0D4C8D0D4
      C8D0D4000000000000000000000000C8D0D4C8D0D4C8D0D40000C8D0D4C8D0D4
      000000000000C8D0D4C8D0D4000000000000C8D0D4C8D0D40000C8D0D4000000
      000000C8D0D4C8D0D4C8D0D4C8D0D4000000000000C8D0D40000C8D0D4C8D0D4
      C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D4C8D0D40000}
    ParentFont = False
    Spacing = 0
    OnClick = ebMultiRemoveClick
  end
  object tvDOList: TElTree
    Left = 27
    Top = 2
    Width = 113
    Height = 52
    Cursor = crDefault
    LeftPosition = 0
    DragCursor = crDrag
    AlwaysKeepSelection = False
    AutoCollapse = False
    AutoExpand = True
    DockOrientation = doNoOrient
    DefaultSectionWidth = 120
    BorderStyle = bsNone
    BorderSides = [ebsLeft, ebsRight, ebsTop, ebsBottom]
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
      F4FFFFFF07000000FCBF6F0E00100000FFFFFFFF00000101010096B378000000
      000000001027000000010000BC55640E000000000000B9B900000000000001B9
      0000000000000000000100000000000000FF0E0A9D9796B39494C79494C7ABAB
      C7B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9ABABC79494C794
      94C79796B30E0A9D0000FF7272FFB9B9B9B9B9B9010000000001000000000000
      000000000000FCBF6F0E00100000FFFFFFFF00000101010096B3780000000000
      000010270000000100005C598B0D010000000000B9B900000000000001B90000
      000000000000000100000000000000FF0E0A9D9796B39494C79494C7ABABC7B9
      B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9ABABC79494C79494C7
      9796B30E0A9D0000FF7272FFB9B9B9B9B9B90100000000010000000000000000
      00000000FCBF6F0E00100000FFFFFFFF00000101010096B37800000000000000
      10270000000100000CC9BA0C020000000000B9B900000000000001B900000000
      00000000000100000000000000FF0E0A9D9796B39494C79494C7ABABC7B9B9B9
      B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9ABABC79494C79494C79796
      B30E0A9D0000FF7272FFB9B9B9B9B9B901000000000100000000000000000000
      0000FCBF6F0E00100000FFFFFFFF00000101010096B378000000000000001027
      000000010000A0727F0D030000000000B9B900000000000001B9000000000000
      0000000100000000000000FF0E0A9D9796B39494C79494C7ABABC7B9B9B9B9B9
      B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9ABABC79494C79494C79796B30E
      0A9D0000FF7272FFB9B9B9B9B9B9010000000001000000000000000000000000
      FCBF6F0E00100000FFFFFFFF00000101010096B3780000000000000010270000
      000100008C58E70E040000000000B9B900000000000001B90000000000000000
      000100000000000000FF0E0A9D9796B39494C79494C7ABABC7B9B9B9B9B9B9B9
      B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9ABABC79494C79494C79796B30E0A9D
      0000FF7272FFB9B9B9B9B9B9010000000001000000000000000000000000FCBF
      6F0E00100000FFFFFFFF00000101010096B37800000000000000102700000001
      0000CC78BD0C050000000000B9B900000000000001B900000000000000000001
      00000000000000FF0E0A9D9796B39494C79494C7ABABC7B9B9B9B9B9B9B9B9B9
      B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9ABABC79494C79494C79796B30E0A9D0000
      FF7272FFB9B9B9B9B9B9010000000001000000000000000000000000FCBF6F0E
      00100000FFFFFFFF00000101010096B378000000000000001027000000010000
      9C6D900C060000000000B9B900000000000001B9000000000000000000010000
      0000000000FF0E0A9D9796B39494C79494C7ABABC7B9B9B9B9B9B9B9B9B9B9B9
      B9B9B9B9B9B9B9B9B9B9B9B9B9ABABC79494C79494C79796B30E0A9D0000FF72
      72FFB9B9B9B9B9B9010000000001000000000000000000000000}
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
    ItemIndent = 9
    KeepSelectionWithinLevel = False
    LineBorderActiveColor = clBlack
    LineBorderInactiveColor = clBlack
    LineHeight = 16
    LinesColor = clBtnShadow
    MouseFrameSelect = True
    MultiSelect = False
    OwnerDrawMask = '~~@~~'
    ParentFont = False
    PlusMinusTransparent = True
    ScrollbarOpposite = False
    ScrollTracking = True
    ShowButtons = False
    ShowLeafButton = False
    ShowLines = False
    ShowRootButtons = False
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
    OnItemFocused = tvDOListItemFocused
    OnDragDrop = tvDOListDragDrop
    OnDragOver = tvDOListDragOver
    OnStartDrag = tvDOListStartDrag
  end
end
