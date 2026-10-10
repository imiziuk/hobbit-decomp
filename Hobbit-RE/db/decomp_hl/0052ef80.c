
undefined4 __fastcall FUN_0052ef80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d851b;
  local_c = ExceptionList;
  local_4 = 0;
  uVar4 = 1;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_0064a670(&local_88,param_1 + 0x98,&stack0x00000004);
  local_4._0_1_ = 1;
  iVar2 = FUN_0064f210(*puVar1,&DAT_00720db8);
  local_4._0_1_ = 0;
  FUN_00649ba0();
  if (iVar2 == 0) {
    uVar4 = 0;
    goto LAB_0052f0e9;
  }
  FUN_0052f760(local_58,iVar2);
  local_4._0_1_ = 2;
  local_88 = 0xffffffff;
  local_84 = -1;
  local_80 = 0;
  local_78 = 0;
  local_76 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  FUN_0064f350(&local_88,1,0x30,iVar2);
  if (local_84 == 0) {
    iVar3 = *(int *)(param_1 + 0xc4);
    bVar5 = iVar3 == 0;
LAB_0052f0bc:
    if (bVar5) goto LAB_0052f0c7;
LAB_0052f0be:
    if (iVar3 == 5) goto LAB_0052f0c7;
    uVar4 = 0;
  }
  else {
    if (local_84 == 1) {
      iVar3 = *(int *)(param_1 + 0xc4);
      bVar5 = iVar3 == 1;
      goto LAB_0052f0bc;
    }
    if (local_84 != 2) {
      if (local_84 == 3) {
        iVar3 = *(int *)(param_1 + 0xc4);
        if ((iVar3 != 3) || (local_80 != 0)) {
          bVar5 = iVar3 == 4;
          goto LAB_0052f0bc;
        }
        goto LAB_0052f0c7;
      }
      if (local_84 == 4) {
        iVar3 = *(int *)(param_1 + 0xc4);
        if (iVar3 == 4) {
          bVar5 = local_80 == 0;
          goto LAB_0052f0bc;
        }
        goto LAB_0052f0be;
      }
      goto LAB_0052f0cc;
    }
    iVar3 = *(int *)(param_1 + 0xc4);
    if (((iVar3 != 2) || (local_80 != 0)) && (iVar3 != 3)) {
      bVar5 = iVar3 == 4;
      goto LAB_0052f0bc;
    }
LAB_0052f0c7:
    uVar4 = 1;
  }
LAB_0052f0cc:
  FUN_0064f2b0(iVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0064b190();
LAB_0052f0e9:
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return uVar4;
}

