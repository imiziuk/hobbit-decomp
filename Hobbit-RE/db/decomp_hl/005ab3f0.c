
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005ab3f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ddfd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_SenseController__CanSmell_007449cc);
  local_4 = 0;
  FUN_005aa750();
  iVar8 = FUN_004a1060();
  if (iVar8 != 0) {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar8 = FUN_00406ce0(param_2,param_3);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar8 == -1) {
      FUN_00649720();
    }
    else {
      uVar7 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
      piVar12 = (int *)(-(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7);
      FUN_00649720();
      if (piVar12 != (int *)0x0) {
        if ((param_4 != 0) && ((*(byte *)(piVar12 + 4) & 0x50) != 0)) {
          piVar9 = piVar12;
          FUN_005aa750(piVar12);
          iVar8 = FUN_004683d0(piVar9);
          if (iVar8 == 0) goto LAB_005ab5dd;
        }
        if ((((char)piVar12[0x1f] != '/') &&
            (((*(byte *)(piVar12 + 4) & 0x50) == 0 ||
             (iVar8 = (**(code **)(*piVar12 + 0x108))(1), iVar8 != 0)))) &&
           (((char)piVar12[0x1f] != '\x1c' || (iVar8 = FUN_004a1090(), iVar8 != 0)))) {
          piVar9 = (int *)FUN_005aa750();
          pfVar10 = (float *)(**(code **)(*piVar9 + 0x28))();
          pfVar11 = (float *)(**(code **)(*piVar12 + 0x28))();
          fVar1 = pfVar11[2];
          fVar2 = pfVar10[2];
          fVar3 = pfVar11[1];
          fVar4 = pfVar10[1];
          fVar5 = *pfVar11;
          fVar6 = *pfVar10;
          piVar12 = (int *)FUN_005aa750();
          iVar8 = (**(code **)(*piVar12 + 0x38))();
          if (((-(_DAT_006e9550 * *(float *)(iVar8 + 0x10)) <= fVar3 - fVar4) &&
              (fVar3 - fVar4 <= *(float *)(iVar8 + 0x10))) &&
             (local_4 = 0xffffffff,
             SQRT((fVar1 - fVar2) * (fVar1 - fVar2) + (fVar5 - fVar6) * (fVar5 - fVar6)) <=
             *(float *)(param_1 + 0x30))) {
            FUN_00649720();
            ExceptionList = local_c;
            return 1;
          }
        }
      }
    }
  }
LAB_005ab5dd:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

