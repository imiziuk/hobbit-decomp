
undefined4 __thiscall FUN_0052e800(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  LPCSTR local_64;
  LPCSTR local_38 [11];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d83f8;
  local_c = ExceptionList;
  if ((-1 < param_2) && (ExceptionList = &local_c, iVar2 = FUN_0052e130(), param_2 < iVar2)) {
    FUN_0064a670(local_38,param_1 + 0x98,*(int *)(param_1 + 0xc) + param_2 * 0xa8);
    local_4 = 0;
    FUN_00649b60(local_38);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0064a210(".hobbit",s__xbmp_007306e8,0);
    DeleteFileA(local_38[0]);
    DeleteFileA(local_64);
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = param_2 * 0xa8 + 0xa8 + *(int *)(param_1 + 0xc);
    if (iVar2 != iVar1) {
      puVar4 = (undefined4 *)(iVar2 + -0x30);
      do {
        FUN_0064a320(iVar2);
        FUN_0064b7f0(puVar4 + 0x17);
        iVar2 = iVar2 + 0xa8;
        puVar5 = puVar4 + 0x2a;
        puVar6 = puVar4;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = puVar4 + 0x2a;
      } while (iVar2 != iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x10);
    for (iVar2 = iVar1 + -0xa8; iVar2 != iVar1; iVar2 = iVar2 + 0xa8) {
      local_4._1_3_ = (undefined3)(local_4 >> 8);
      local_4._0_1_ = 2;
      FUN_0064b190();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00649ba0();
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -0xa8;
    local_4 = local_4 & 0xffffff00;
    FUN_00649ba0();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

