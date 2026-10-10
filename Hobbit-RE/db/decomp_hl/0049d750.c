
void __fastcall FUN_0049d750(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int unaff_ESI;
  int unaff_EDI;
  float unaff_retaddr;
  int iStack_3c;
  undefined1 auStack_2c [12];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  float *pfStack_4;
  
  (**(code **)(*param_1 + 0x8c))(1,0xffffffff);
  param_1[0x34] = (int)unaff_retaddr;
  FUN_00401f00(*pfStack_4 - unaff_retaddr,pfStack_4[1] - unaff_retaddr,pfStack_4[2] - unaff_retaddr)
  ;
  iStack_18 = iStack_3c;
  iStack_20 = unaff_EDI;
  iStack_1c = unaff_ESI;
  uVar4 = FUN_00401f00(unaff_retaddr,unaff_retaddr,unaff_retaddr);
  uVar4 = FUN_00402130(auStack_2c,pfStack_4,uVar4);
  FUN_004357e0(uVar4);
  param_1[0x11] = iStack_20;
  param_1[0x12] = iStack_1c;
  param_1[0x13] = iStack_18;
  param_1[0x14] = iStack_14;
  param_1[0x15] = iStack_10;
  param_1[0x16] = iStack_c;
  param_1[0xb] = param_1[0x11];
  param_1[0xc] = param_1[0x12];
  param_1[0xd] = param_1[0x13];
  param_1[0xe] = param_1[0x14];
  param_1[0xf] = param_1[0x15];
  param_1[0x10] = param_1[0x16];
  fVar1 = *pfStack_4;
  fVar2 = pfStack_4[1];
  fVar3 = pfStack_4[2];
  param_1[0xb] = (int)(-fVar1 + (float)param_1[0xb]);
  param_1[0xc] = (int)(-fVar2 + (float)param_1[0xc]);
  param_1[0xd] = (int)(-fVar3 + (float)param_1[0xd]);
  param_1[0xe] = (int)(-fVar1 + (float)param_1[0xe]);
  param_1[0xf] = (int)(-fVar2 + (float)param_1[0xf]);
  param_1[0x10] = (int)(-fVar3 + (float)param_1[0x10]);
  (**(code **)(*param_1 + 0x14))(pfStack_4,0);
  return;
}

