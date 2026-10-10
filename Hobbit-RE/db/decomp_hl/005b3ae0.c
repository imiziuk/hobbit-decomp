
/* WARNING: Removing unreachable block (ram,0x005b3cda) */
/* WARNING: Removing unreachable block (ram,0x005b3cd0) */
/* WARNING: Removing unreachable block (ram,0x005b4411) */
/* WARNING: Removing unreachable block (ram,0x005b3ce8) */
/* WARNING: Removing unreachable block (ram,0x005b3d2a) */
/* WARNING: Removing unreachable block (ram,0x005b3d1a) */
/* WARNING: Removing unreachable block (ram,0x005b3d50) */
/* WARNING: Removing unreachable block (ram,0x005b3d90) */
/* WARNING: Removing unreachable block (ram,0x005b3d83) */
/* WARNING: Removing unreachable block (ram,0x005b3db3) */
/* WARNING: Removing unreachable block (ram,0x005b3dbb) */
/* WARNING: Removing unreachable block (ram,0x005b3dc3) */
/* WARNING: Removing unreachable block (ram,0x005b3e10) */
/* WARNING: Removing unreachable block (ram,0x005b3e37) */
/* WARNING: Removing unreachable block (ram,0x005b3e47) */
/* WARNING: Removing unreachable block (ram,0x005b41f4) */
/* WARNING: Removing unreachable block (ram,0x005b432e) */
/* WARNING: Removing unreachable block (ram,0x005b435c) */
/* WARNING: Removing unreachable block (ram,0x005b4367) */
/* WARNING: Removing unreachable block (ram,0x005b43b3) */
/* WARNING: Removing unreachable block (ram,0x005b4200) */
/* WARNING: Removing unreachable block (ram,0x005b4258) */
/* WARNING: Removing unreachable block (ram,0x005b4293) */
/* WARNING: Removing unreachable block (ram,0x005b425f) */
/* WARNING: Removing unreachable block (ram,0x005b426e) */
/* WARNING: Removing unreachable block (ram,0x005b4270) */
/* WARNING: Removing unreachable block (ram,0x005b4281) */
/* WARNING: Removing unreachable block (ram,0x005b4286) */
/* WARNING: Removing unreachable block (ram,0x005b428b) */
/* WARNING: Removing unreachable block (ram,0x005b4277) */
/* WARNING: Removing unreachable block (ram,0x005b4299) */
/* WARNING: Removing unreachable block (ram,0x005b42cd) */
/* WARNING: Removing unreachable block (ram,0x005b42bd) */
/* WARNING: Removing unreachable block (ram,0x005b42cf) */
/* WARNING: Removing unreachable block (ram,0x005b42e0) */
/* WARNING: Removing unreachable block (ram,0x005b42e2) */
/* WARNING: Removing unreachable block (ram,0x005b42fb) */
/* WARNING: Removing unreachable block (ram,0x005b4311) */
/* WARNING: Removing unreachable block (ram,0x005b3e4f) */
/* WARNING: Removing unreachable block (ram,0x005b3eb2) */
/* WARNING: Removing unreachable block (ram,0x005b3ea2) */
/* WARNING: Removing unreachable block (ram,0x005b3ed7) */
/* WARNING: Removing unreachable block (ram,0x005b3ee9) */
/* WARNING: Removing unreachable block (ram,0x005b3ef9) */
/* WARNING: Removing unreachable block (ram,0x005b3f01) */
/* WARNING: Removing unreachable block (ram,0x005b3f0c) */
/* WARNING: Removing unreachable block (ram,0x005b3f22) */
/* WARNING: Removing unreachable block (ram,0x005b3f44) */
/* WARNING: Removing unreachable block (ram,0x005b3f75) */
/* WARNING: Removing unreachable block (ram,0x005b3f85) */
/* WARNING: Removing unreachable block (ram,0x005b3f8d) */
/* WARNING: Removing unreachable block (ram,0x005b3f89) */
/* WARNING: Removing unreachable block (ram,0x005b3f8f) */
/* WARNING: Removing unreachable block (ram,0x005b3fa1) */
/* WARNING: Removing unreachable block (ram,0x005b3fb1) */
/* WARNING: Removing unreachable block (ram,0x005b3fb9) */
/* WARNING: Removing unreachable block (ram,0x005b4028) */
/* WARNING: Removing unreachable block (ram,0x005b409d) */
/* WARNING: Removing unreachable block (ram,0x005b40a8) */
/* WARNING: Removing unreachable block (ram,0x005b40c8) */
/* WARNING: Removing unreachable block (ram,0x005b40d8) */
/* WARNING: Removing unreachable block (ram,0x005b40dd) */
/* WARNING: Removing unreachable block (ram,0x005b412f) */
/* WARNING: Removing unreachable block (ram,0x005b413b) */
/* WARNING: Removing unreachable block (ram,0x005b4116) */
/* WARNING: Removing unreachable block (ram,0x005b4122) */
/* WARNING: Removing unreachable block (ram,0x005b40fd) */
/* WARNING: Removing unreachable block (ram,0x005b4109) */
/* WARNING: Removing unreachable block (ram,0x005b40e4) */
/* WARNING: Removing unreachable block (ram,0x005b4148) */
/* WARNING: Removing unreachable block (ram,0x005b40f0) */
/* WARNING: Removing unreachable block (ram,0x005b414c) */
/* WARNING: Removing unreachable block (ram,0x005b4189) */
/* WARNING: Removing unreachable block (ram,0x005b419a) */
/* WARNING: Removing unreachable block (ram,0x005b41c7) */
/* WARNING: Removing unreachable block (ram,0x005b41d4) */
/* WARNING: Removing unreachable block (ram,0x005b41dc) */
/* WARNING: Removing unreachable block (ram,0x005b4440) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined4 FUN_005b3ae0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int local_120;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  FUN_004357e0(param_1);
  FUN_005b3350();
  FUN_004357e0(param_2);
  FUN_005b3350();
  FUN_004357e0();
  FUN_00404870();
  local_120 = *(int *)(param_3 + 8);
  if (*(int *)(param_3 + 0x10) < local_120 + 1) {
    if (*(int *)(param_3 + 0x18) == 0) {
      iVar1 = *(int *)(param_3 + 0x10) / 2;
      iVar3 = 1;
      if (0 < iVar1) {
        iVar3 = iVar1;
      }
      if (iVar3 + local_120 < 1) {
        local_120 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        local_120 = local_120 + iVar1;
      }
    }
    else {
      local_120 = *(int *)(param_3 + 0x18) + local_120;
    }
    pvVar2 = operator_new(local_120 << 5);
    local_4._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      iVar3 = local_120;
      if (-1 < local_120 + -1) {
        do {
          FUN_0059b670();
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    iVar3 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < *(int *)(param_3 + 8)) {
      do {
        FUN_0059b3e0();
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_3 + 8));
    }
    FUN_006bf840();
    *(void **)(param_3 + 0xc) = pvVar2;
    *(int *)(param_3 + 0x10) = local_120;
  }
  FUN_0059b3e0();
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

