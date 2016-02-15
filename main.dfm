object Form2: TForm2
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'Vigenerova '#353'ifra'
  ClientHeight = 432
  ClientWidth = 728
  Color = 3915769
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object MNesifrovane: TMemo
    Left = 0
    Top = 0
    Width = 249
    Height = 433
    BorderStyle = bsNone
    TabOrder = 0
  end
  object LEKlic: TLabeledEdit
    Left = 287
    Top = 160
    Width = 153
    Height = 21
    EditLabel.Width = 58
    EditLabel.Height = 13
    EditLabel.Caption = #352'ifrovac'#237' kl'#237#269
    TabOrder = 1
  end
  object MSifrovane: TMemo
    Left = 480
    Top = 0
    Width = 249
    Height = 433
    BorderStyle = bsNone
    TabOrder = 2
  end
  object BSifrovat: TButton
    Left = 287
    Top = 200
    Width = 153
    Height = 25
    Caption = #352'ifrovat -->'
    TabOrder = 3
  end
  object BDesifrovat: TButton
    Left = 287
    Top = 248
    Width = 153
    Height = 25
    Caption = '<-- De'#353'ifrovat'
    TabOrder = 4
  end
end
