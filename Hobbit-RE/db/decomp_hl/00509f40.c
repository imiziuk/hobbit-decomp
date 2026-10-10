
void __thiscall FUN_00509f40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  FUN_0065f8a0(&iStack_18,&iStack_14);
  iVar1 = __ftol();
  iStack_4 = __ftol();
  iStack_10 = iStack_18 / 2 - iVar1;
  iStack_c = iStack_14 / 2 - iStack_4;
  iStack_4 = iStack_4 + iStack_14 / 2;
  iStack_8 = iVar1 + iStack_18 / 2;
  FUN_006a2880(param_2,param_3);
  uStack_1d = __ftol();
  uStack_1c = 0x21;
  uStack_1b = 0x30;
  param_3 = CONCAT13(uStack_1d,0x320000);
  param_3 = CONCAT22(param_3._2_2_,0x2600);
  param_3 = CONCAT31(param_3._1_3_,0x1e);
  param_2 = CONCAT13(uStack_1d,0x503021);
  uStack_1e = 0x32;
  uStack_1f = 0x26;
  uStack_20 = 0x1e;
  uStack_1a = 0x50;
  uStack_19 = uStack_1d;
  FUN_0069fd50(&iStack_10,&uStack_1c,&uStack_20,&param_2,&param_3,0);
  if (*(int *)(param_1 + 0x164) == 1) {
    iVar1 = 0;
    do {
      FUN_00509d40(*(int *)(param_1 + 0x174) + iVar1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xd);
  }
  return;
}

