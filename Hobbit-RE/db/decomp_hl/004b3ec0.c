
void __fastcall FUN_004b3ec0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [12];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_4;
  
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  FUN_00401f00(0xc3fa0000,0xc3fa0000,0xc3fa0000);
  iStack_18 = iStack_48;
  iStack_14 = iStack_44;
  iStack_10 = iStack_40;
  uStack_3c = 0x43fa0000;
  uStack_38 = 0x43fa0000;
  uStack_34 = 0x43fa0000;
  piVar3 = (int *)FUN_00402130(auStack_24,&uStack_30,&uStack_3c);
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  iStack_4 = piVar3[2];
  param_1[0xb] = iStack_18;
  param_1[0xd] = iStack_10;
  param_1[0xc] = iStack_14;
  param_1[0xe] = iVar1;
  param_1[0x10] = iStack_4;
  param_1[0xf] = iVar2;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  (**(code **)(*param_1 + 0x14))(&uStack_30,0);
  FUN_004d0b40(1);
  return;
}

