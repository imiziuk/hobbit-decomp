
undefined4 __thiscall FUN_00549470(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_rsc_mgr__LockRHandle_0073cb04);
  uVar3 = *param_2 * 2;
  uVar3 = (uVar3 ^ *param_2) & 0x7fffffff ^ uVar3;
  local_4 = 0;
  if (uVar3 == 0xffffffff) {
LAB_0054952e:
    local_4 = 0xffffffff;
    FUN_006501e0();
    uVar2 = 0;
  }
  else {
    iVar1 = (uVar3 & *(uint *)(param_1 + 0x18)) * 0x7c +
            *(int *)(*(int *)(param_1 + 0x24) + 8 +
                    ((int)uVar3 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18);
    if (*(int *)(iVar1 + 0x68) == 0) {
      if ((*(int *)(param_1 + 0x58) != 0) && (*(int *)(iVar1 + 100) == 0)) {
        FUN_00647cf0(iVar1);
        FUN_00425890(s_rsc_mgr__LockRHandle_0073cb04,s_ONDEMAND_LOAD___s_0073caf0,
                     (uVar3 & *(uint *)(param_1 + 0x18)) * 0x7c +
                     *(int *)(*(int *)(param_1 + 0x24) + 8 +
                             ((int)uVar3 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18));
        FUN_00548de0(iVar1);
      }
      if (*(int *)(iVar1 + 0x68) == 0) goto LAB_0054952e;
    }
    if (-1 < (int)*param_2) {
      *(short *)(iVar1 + 0x6e) = *(short *)(iVar1 + 0x6e) + 1;
      *param_2 = *param_2 | 0x80000000;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x68);
    local_4 = 0xffffffff;
    FUN_006501e0();
  }
  ExceptionList = local_c;
  return uVar2;
}

