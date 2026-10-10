
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041aa30(int *param_1)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  FUN_0041a930();
  (**(code **)(*param_1 + 0x5c))();
  fStack_60 = 3.4028235e+38;
  fStack_5c = 3.4028235e+38;
  fStack_58 = 3.4028235e+38;
  FUN_00404870();
  FUN_00401f00();
  FUN_00401f00();
  FUN_00402160();
  fVar4 = (float10)FUN_00404890();
  fStack_94 = (float)(fVar4 * (float10)_DAT_006e936c + fVar4 * (float10)_DAT_006e936c);
  FUN_00405080();
  FUN_004357e0();
  FUN_00401f00();
  FUN_00402130();
  FUN_004357e0();
  fStack_60 = fStack_90;
  fStack_58 = fStack_88;
  fStack_5c = fStack_8c;
  FUN_004357e0();
  if (param_1[0x1399] == 0) {
    return;
  }
  bVar1 = *(byte *)((int)param_1 + 0x4ea9);
  if (*(byte *)(param_1 + 0x13aa) <= *(byte *)((int)param_1 + 0x4ea9)) {
    bVar1 = *(byte *)(param_1 + 0x13aa);
  }
  if (param_1[0x109] == 0) {
    if (bVar1 != 0xff) {
      FUN_00580a40();
      goto LAB_0041abca;
    }
  }
  else {
    bVar1 = 0xff;
  }
  FUN_00580a70();
LAB_0041abca:
  *(byte *)(param_1 + 0x20) = bVar1;
  *(undefined1 *)((int)param_1 + 0x85) = 0xff;
  *(undefined1 *)(param_1 + 0x21) = 0xc4;
  *(undefined1 *)((int)param_1 + 0x83) = 0xc4;
  *(undefined1 *)((int)param_1 + 0x82) = 0xc4;
  (**(code **)(param_1[0x99] + 4))();
  if (-1 < param_1[0x13ab]) {
    pfVar2 = (float *)(**(code **)(*param_1 + 0x28))();
    fStack_94 = *pfVar2 - _DAT_0071ff08;
    fStack_90 = pfVar2[1] + _DAT_006e9554;
    fStack_8c = pfVar2[2] - _DAT_0071ff08;
    fStack_80 = pfVar2[2] + _DAT_0071ff08;
    fStack_7c = *pfVar2 + _DAT_0071ff08;
    fStack_88 = fStack_94;
    fStack_84 = fStack_90;
    fStack_78 = fStack_90;
    fStack_74 = fStack_80;
    fStack_70 = fStack_7c;
    fStack_6c = fStack_90;
    fStack_68 = fStack_8c;
    FUN_00413480(0x80,0x80,0x80);
    FUN_00469af0(param_1 + 0x13ac);
    FUN_0054fc60(param_1[0x13ab],&fStack_94,0x43480000);
    FUN_0054f9c0();
  }
  if (param_1[0x235] == 2) {
    FUN_00579720(param_1[2],param_1[3]);
    iVar3 = FUN_00577e70();
    if (iVar3 != 0) {
      FUN_0066a810();
      FUN_00406b70();
      FUN_00669ca0(param_1 + 5);
    }
  }
  if (*(int *)(param_1[0x114] + 0xe8) != 0) {
    FUN_0041ae20();
  }
  FUN_0044d500();
  FUN_0044d620();
  FUN_00448b10();
  FUN_0044d740();
  FUN_0044d370();
  if (param_1[0x235] != 0x28) {
    FUN_0044d7f0();
  }
  FUN_0044dc50();
  FUN_00429100();
  if (*(int *)(param_1[0x114] + 0xe0) != 0) {
    FUN_0044a5f0();
  }
  return;
}

