
// ���� �� ������������ ZColorStringGrid 
{ $DEFINE NOZCOLORSTRINGGRID}

// �������� ��������������
{$DEFINE ZUSE_CONDITIONAL_FORMATTING}

//Charts
{$DEFINE ZUSE_CHARTS}

// Drawings
{$DEFINE ZUSE_DRAWINGS}

// Free Pascal / Lazarus
{$IFDEF FPC}
  //��� FPC ���� ���� ZColorStringGrid-�
  {$DEFINE NOZCOLORSTRINGGRID}
  //���� ����� ������������ ������ ������������� LConvEncoding.pas
  {$DEFINE USELCONVENCODING}
{$ELSE}
  {$UNDEF USELCONVENCODING}
{$ENDIF}