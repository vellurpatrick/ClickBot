object ClickBot: TClickBot
  Left = 1505
  Top = 261
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'ClickBot'
  ClientHeight = 257
  ClientWidth = 153
  Color = clMenu
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 32
    Width = 36
    Height = 29
    Caption = 'x y'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -29
    Font.Name = 'MS UI Gothic'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 0
    Top = 0
    Width = 57
    Height = 25
    Caption = 'Start'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 96
    Top = 0
    Width = 57
    Height = 25
    Caption = 'Stop'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 0
    Top = 72
    Width = 75
    Height = 25
    Caption = 'Hide'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 0
    Top = 104
    Width = 75
    Height = 25
    Caption = 'Show'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Panel1: TPanel
    Left = 64
    Top = 0
    Width = 25
    Height = 25
    TabOrder = 4
  end
  object ListBox1: TListBox
    Left = 80
    Top = 72
    Width = 73
    Height = 185
    ItemHeight = 13
    TabOrder = 5
  end
  object Button5: TButton
    Left = 0
    Top = 136
    Width = 75
    Height = 25
    Caption = 'Clear'
    TabOrder = 6
    OnClick = Button5Click
  end
  object Button8: TButton
    Left = 0
    Top = 168
    Width = 33
    Height = 25
    Caption = '1ms'
    TabOrder = 7
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 0
    Top = 200
    Width = 33
    Height = 25
    Caption = '10ms'
    TabOrder = 8
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 0
    Top = 232
    Width = 33
    Height = 25
    Caption = '100ms'
    TabOrder = 9
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 40
    Top = 232
    Width = 33
    Height = 25
    Caption = '500ms'
    TabOrder = 10
    OnClick = Button11Click
  end
  object Button6: TButton
    Left = 40
    Top = 168
    Width = 33
    Height = 25
    Caption = '5ms'
    TabOrder = 11
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 40
    Top = 200
    Width = 33
    Height = 25
    Caption = '50ms'
    TabOrder = 12
    OnClick = Button7Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer1Timer
    Left = 88
    Top = 80
  end
  object Timer2: TTimer
    Interval = 10
    OnTimer = Timer2Timer
    Left = 120
    Top = 80
  end
  object MainMenu1: TMainMenu
    Left = 88
    Top = 112
    object Help1: TMenuItem
      Caption = 'Help'
      object Aboutauthor1: TMenuItem
        Caption = 'About author'
        object Mywebsite1: TMenuItem
          Caption = 'My Github'
          OnClick = Mywebsite1Click
        end
      end
      object Howtouse1: TMenuItem
        Caption = 'How to use'
        OnClick = Howtouse1Click
      end
    end
  end
  object OpenDialog1: TOpenDialog
    FileName = 'D:\Veller\Programowanie\PROJEKTY NA GITHUB\ClickBot\README.txt'
    Filter = 'Text files|*.txt'
    Left = 120
    Top = 112
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Text files|*.txt'
    Left = 120
    Top = 144
  end
end
