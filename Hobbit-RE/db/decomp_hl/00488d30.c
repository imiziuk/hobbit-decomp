
undefined8
FUN_00488d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_EDI;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  undefined1 local_38 [12];
  void *local_2c;
  undefined8 local_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006d2da8;
  pvStack_14 = ExceptionList;
  pcStack_44 = (char *)param_1;
  puStack_4c = local_38;
  pcStack_48 = s_fx_object__FireAndForget__s_0072922c;
  uStack_50 = 0x488d63;
  ExceptionList = &pvStack_14;
  FUN_00649920();
  local_c = 0;
  pcStack_44 = (char *)0x488d75;
  pcStack_44 = (char *)FUN_00649940();
  pcStack_48 = (char *)0x488d7f;
  FUN_006501d0();
  local_c._0_1_ = 2;
  pcStack_44 = "j";
  FUN_00649950();
  pcStack_44 = (char *)0x0;
  pcStack_48 = (char *)0x0;
  puStack_4c = (undefined1 *)0x2d;
  uStack_50 = 0x488d9d;
  local_28 = FUN_0054bad0();
  uVar1 = (ulonglong)local_28 >> 0x20;
  uVar2 = (uint)local_28;
  pcStack_44 = s_obj_mgr__LockObject_Guid__0071cef0;
  pcStack_48 = (char *)0x488db7;
  FUN_00649600();
  iVar3 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ (uint)uVar1) * -0xfb & 0xfff) * 2);
  for (iVar4 = iVar3; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
  }
  do {
    if (iVar3 == -1) {
LAB_00488e36:
      local_c = CONCAT31(local_c._1_3_,2);
      pcStack_44 = (char *)0x488e44;
      FUN_00649720();
      piVar5 = (int *)0x0;
LAB_00488e6a:
      pcStack_44 = (char *)param_1;
      pcStack_48 = (char *)0x488e75;
      FUN_00488c30();
      pcStack_44 = (char *)0x0;
      pcStack_48 = (char *)param_2;
      puStack_4c = (undefined1 *)0x488e82;
      (**(code **)(*piVar5 + 0x14))();
      puStack_4c = (undefined1 *)param_3;
      uStack_50 = 0x488e8d;
      (**(code **)(*piVar5 + 0x1c))();
      uStack_58 = *param_4;
      uStack_54 = param_4[1];
      uStack_50 = param_4[2];
      (**(code **)(*piVar5 + 0xfc))();
      *(byte *)(piVar5 + 0x55) = *(byte *)(piVar5 + 0x55) | 0x10;
      (**(code **)(*piVar5 + 0x110))();
      FUN_0048b750(DAT_006ed3ac);
      local_28._4_4_ = 0xffffffff;
      FUN_006501e0();
      ExceptionList = local_2c;
      return CONCAT44(&uStack_58,unaff_EDI);
    }
    piVar5 = (int *)(DAT_0076f648 + iVar3 * 0x14);
    iVar4 = *piVar5;
    if ((iVar4 != 0) && (local_2c = *(void **)(iVar4 + 0xc), local_28 == *(longlong *)(iVar4 + 8)))
    {
      if (iVar3 != -1) {
        uVar2 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
        local_c = CONCAT31(local_c._1_3_,2);
        piVar5 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
        pcStack_44 = (char *)0x488e6a;
        FUN_00649720();
        goto LAB_00488e6a;
      }
      goto LAB_00488e36;
    }
    iVar3 = (int)*(short *)((int)piVar5 + 0xe);
  } while( true );
}

