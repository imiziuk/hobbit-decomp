
undefined4 __thiscall
FUN_00519c80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CRect aCStack_74 [12];
  undefined4 uStack_68;
  char *pcStack_64;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d75e0;
  local_c = ExceptionList;
  puStack_34 = (undefined1 *)0x0;
  uStack_38 = param_7;
  uStack_3c = param_6;
  uStack_40 = param_5;
  uStack_44 = param_4;
  uStack_48 = param_3;
  uStack_4c = param_2;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  uStack_50 = 0x519cee;
  uVar1 = FUN_006a2400();
  puStack_34 = (undefined1 *)0x0;
  uStack_38 = 0x519cfa;
  uVar2 = FUN_006a3320();
  puStack_34 = (undefined1 *)0x7;
  *(undefined4 *)(param_1 + 0x164) = uVar2;
  uStack_38 = 0x519d09;
  uVar2 = FUN_006a3320();
  *(undefined4 *)(param_1 + 0x18c) = uVar2;
  puStack_34 = (undefined1 *)0x519d19;
  iVar3 = FUN_0052a620();
  if (iVar3 != 0) {
    puStack_34 = (undefined1 *)0x519d28;
    uVar4 = FUN_006a3230();
    puStack_34 = (undefined1 *)(uVar4 & 0xfffffffe | 0x100);
    uStack_38 = 0x519d3c;
    FUN_006a3220();
  }
  puStack_34 = (undefined1 *)0x1;
  uStack_38 = 0x519d45;
  uVar2 = FUN_006a3320();
  puStack_34 = (undefined1 *)0x2;
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  uStack_38 = 0x519d54;
  uVar2 = FUN_006a3320();
  puStack_34 = (undefined1 *)0x3;
  *(undefined4 *)(param_1 + 0x16c) = uVar2;
  uStack_38 = 0x519d63;
  uVar2 = FUN_006a3320();
  puStack_34 = (undefined1 *)0x4;
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  uStack_38 = 0x519d72;
  uVar2 = FUN_006a3320();
  puStack_34 = (undefined1 *)0x5;
  *(undefined4 *)(param_1 + 0x174) = uVar2;
  uStack_38 = 0x519d81;
  uVar2 = FUN_006a3320();
  puStack_34 = (undefined1 *)0x6;
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  uStack_38 = 0x519d90;
  uVar2 = FUN_006a3320();
  puStack_34 = (undefined1 *)0x7;
  *(undefined4 *)(param_1 + 0x180) = uVar2;
  uStack_38 = 0x519d9f;
  uVar2 = FUN_006a3320();
  *(undefined4 *)(param_1 + 0x18c) = uVar2;
  if (DAT_00760104 != 0) {
    puStack_34 = (undefined1 *)0x0;
    uStack_38 = 1;
    uStack_3c = 0x519dbb;
    FUN_006a3240();
    puStack_34 = (undefined1 *)0x1;
    uStack_38 = 0x100;
    uStack_3c = 0x519dcd;
    FUN_006a3240();
  }
  if (DAT_007600e8 == 0) {
    puStack_34 = (undefined1 *)0x0;
    uStack_38 = 1;
    uStack_3c = 0x519de3;
    FUN_006a3240();
    puStack_34 = (undefined1 *)0x1;
    uStack_38 = 0x100;
    uStack_3c = 0x519df5;
    FUN_006a3240();
  }
  puStack_34 = local_1c;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  uStack_38 = 0x519e12;
  FUN_0052ce80();
  puStack_34 = (undefined1 *)0x1;
  pcStack_64 = s_IDS_NULL_00731f24;
  uStack_68 = 0x519e27;
  FUN_00649b20();
  pcStack_64 = (char *)0x8;
  local_4 = 0xffffffff;
  CRect::CRect(aCStack_74,0,0,0,0);
  iVar3 = __ftol();
  iVar5 = __ftol();
  iVar6 = __ftol();
  iVar7 = __ftol();
  CRect::CRect((CRect *)&stack0xffffff7c,iVar7,iVar6,iVar5,iVar3);
  FUN_006a2cd0(param_3,param_2,(undefined4 *)(param_1 + 0x1fc));
  puStack_34 = local_1c;
  uStack_38 = 0x519ed4;
  FUN_0052cee0();
  puStack_34 = (undefined1 *)0x1;
  pcStack_64 = s_IDS_NULL_00731f24;
  uStack_68 = 0x519ee9;
  FUN_00649b20();
  pcStack_64 = (char *)0x9;
  local_4 = 0xffffffff;
  CRect::CRect(aCStack_74,0,0,0,0);
  iVar3 = __ftol();
  iVar5 = __ftol();
  iVar6 = __ftol();
  iVar7 = __ftol();
  CRect::CRect((CRect *)&stack0xffffff7c,iVar7,iVar6,iVar5,iVar3);
  FUN_006a2cd0(param_3,param_2,param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = 1;
  ExceptionList = local_c;
  return uVar1;
}

