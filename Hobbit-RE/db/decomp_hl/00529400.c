
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00529400(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  DAT_00762924 = FUN_006a2260(0x46);
  DAT_00762920 = FUN_006a22a0(0x70);
  DAT_00762890 = 0x41100000;
  DAT_00762894 = 0;
  _DAT_00762898 = 0x42b00000;
  DAT_0076289c = 0;
  _DAT_007628a0 = 0x42b00000;
  _DAT_007628a4 = 0x42e00000;
  _DAT_007628a8 = 0x41100000;
  _DAT_007628ac = 0x42e00000;
  puVar3 = &DAT_00762890;
  do {
    iVar2 = DAT_00762920;
    iVar4 = *(int *)(param_1 + 0x38c);
    iVar1 = __ftol();
    if (iVar4 < 4) {
      iVar4 = iVar4 * DAT_00762888;
      iVar1 = iVar1 + iVar2;
      iVar2 = __ftol(iVar1);
      iVar2 = iVar2 + DAT_00762924 + iVar4;
    }
    else {
      iVar1 = iVar1 + DAT_0076288c + iVar2;
      iVar4 = (iVar4 + -4) * DAT_00762888;
      iVar2 = __ftol(iVar1);
      iVar2 = iVar2 + DAT_00762924 + iVar4;
    }
    FUN_004fa7c0(iVar2,iVar1);
    if (*(int *)(param_1 + 0x38c) == *(int *)(param_1 + 0x398) + -1) {
      FUN_004faaf0();
    }
    puVar3 = puVar3 + 2;
  } while ((int)puVar3 < 0x7628b0);
  return;
}

