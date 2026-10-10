
undefined4 __thiscall
FUN_0051aec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  CRect aCStack_70 [12];
  undefined4 uStack_64;
  char *pcStack_60;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7680;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0x1a;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar1 = &DAT_00734920;
  puVar8 = (undefined4 *)(param_1 + 0x170);
  do {
    *puVar8 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar8 = puVar8 + 1;
  } while ((int)puVar1 < 0x73495c);
  pcStack_30 = (char *)0x0;
  uStack_34 = param_7;
  uStack_38 = param_6;
  uStack_3c = param_5;
  uStack_40 = param_4;
  uStack_44 = param_3;
  uStack_48 = param_2;
  uStack_4c = 0x51af3e;
  uVar2 = FUN_006a2400();
  pcStack_30 = (char *)0x1;
  uStack_34 = 0x51af4b;
  uVar3 = FUN_006a3320();
  pcStack_30 = s_frame2_00731f80;
  *(undefined4 *)(param_1 + 0x158) = uVar3;
  uStack_34 = 0x51af5d;
  FUN_006a3e90();
  pcStack_30 = local_1c;
  uStack_34 = 0x51af6c;
  FUN_0052ce80();
  pcStack_30 = (char *)0x1;
  pcStack_60 = s_IDS_NULL_00731f24;
  uStack_64 = 0x51af81;
  FUN_00649b20();
  pcStack_60 = (char *)0x2;
  local_4 = 0xffffffff;
  CRect::CRect(aCStack_70,0,0,0,0);
  iVar4 = __ftol();
  iVar5 = __ftol();
  iVar6 = __ftol();
  iVar7 = __ftol();
  CRect::CRect((CRect *)&stack0xffffff80,iVar7,iVar6,iVar5,iVar4);
  FUN_006a2cd0(param_3,param_2,param_1 + 0x1ac);
  pcStack_30 = local_1c;
  uStack_34 = 0x51b02d;
  FUN_0052cee0();
  pcStack_30 = (char *)0x1;
  pcStack_60 = s_IDS_NULL_00731f24;
  uStack_64 = 0x51b042;
  FUN_00649b20();
  pcStack_60 = (char *)0x3;
  local_4 = 0xffffffff;
  CRect::CRect(aCStack_70,0,0,0,0);
  iVar4 = __ftol();
  iVar5 = __ftol();
  iVar6 = __ftol();
  iVar7 = __ftol();
  CRect::CRect((CRect *)&stack0xffffff80,iVar7,iVar6,iVar5,iVar4);
  FUN_006a2cd0(param_3,param_2,param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = 1;
  ExceptionList = local_c;
  return uVar2;
}

