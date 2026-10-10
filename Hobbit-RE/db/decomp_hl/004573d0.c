
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004573d0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float unaff_retaddr;
  undefined1 auStack_2c [12];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  float *pfStack_4;
  
  (**(code **)(*param_1 + 0x8c))(1,0xffffffff);
  pfVar4 = pfStack_4;
  FUN_00401f00(*pfStack_4 - unaff_retaddr,pfStack_4[1] - unaff_retaddr,pfStack_4[2] - unaff_retaddr)
  ;
  FUN_004357e0(&stack0xffffffbc);
  uVar5 = FUN_00401f00(unaff_retaddr,unaff_retaddr,unaff_retaddr);
  uVar5 = FUN_00402130(auStack_2c,pfVar4,uVar5);
  FUN_004357e0(uVar5);
  param_1[0x11] = iStack_20;
  param_1[0x12] = iStack_1c;
  param_1[0x13] = iStack_18;
  param_1[0x14] = iStack_14;
  param_1[0x15] = iStack_10;
  param_1[0x16] = iStack_c;
  param_1[0xb] = param_1[0x11];
  param_1[0xc] = param_1[0x12];
  param_1[0xd] = param_1[0x13];
  FUN_004357e0(param_1 + 0x14);
  fVar1 = *pfVar4;
  fVar2 = pfVar4[1];
  fVar3 = pfVar4[2];
  param_1[0xb] = (int)(-fVar1 + (float)param_1[0xb]);
  param_1[0xc] = (int)(-fVar2 + (float)param_1[0xc]);
  param_1[0xd] = (int)(-fVar3 + (float)param_1[0xd]);
  param_1[0xe] = (int)(-fVar1 + (float)param_1[0xe]);
  param_1[0xf] = (int)(-fVar2 + (float)param_1[0xf]);
  param_1[0x10] = (int)(-fVar3 + (float)param_1[0x10]);
  (**(code **)(*param_1 + 0x14))(pfVar4,0);
  fVar1 = (float)pfStack_4 + _DAT_006ec634;
  param_1[0x2c] = (int)pfStack_4;
  if (fVar1 <= unaff_retaddr) {
    fVar1 = unaff_retaddr;
  }
  param_1[0x2d] = (int)fVar1;
  param_1[0x2b] = iStack_8;
  param_1[0x2e] = param_2;
  param_1[0x2f] = param_3;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x30] = param_4;
  param_1[0x31] = param_5;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = param_1[0x43] & 0xfffffffe;
  param_1[0x45] = param_1[5];
  param_1[0x46] = param_1[6];
  param_1[0x47] = param_1[7];
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4d] = 0x3f800000;
  param_1[0x4e] = 0x3f800000;
  return;
}

