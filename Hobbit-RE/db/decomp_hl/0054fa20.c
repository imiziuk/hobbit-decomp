
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054fa20(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint local_20;
  int local_1c;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = param_1;
  FUN_00649600(s_decal_mgr__OnAdvanceLogic_0073d2b0);
  local_4 = 0;
  local_20 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar6 = *(int *)(param_1 + 0x24);
      if (iVar6 != 0) {
        iVar7 = (int)local_20 >> (*(byte *)(param_1 + 0x1e) & 0x1f);
        uVar5 = *(uint *)(param_1 + 0x18) & local_20;
        uVar8 = __allshl();
        param_1 = local_1c;
        if (((*(uint *)(iVar6 + iVar7 * 0x18) & (uint)uVar8) == 0 &&
             (*(uint *)(iVar6 + 4 + iVar7 * 0x18) & (uint)((ulonglong)uVar8 >> 0x20)) == 0) &&
           (iVar6 = uVar5 * 0x2fc + *(int *)(iVar6 + 8 + iVar7 * 0x18),
           DAT_006e92e4 <= *(float *)(iVar6 + 0x2f0))) {
          fVar3 = *(float *)(iVar6 + 0x2f0) - param_2;
          bVar1 = fVar3 < DAT_006e92e4;
          bVar2 = fVar3 == DAT_006e92e4;
          *(float *)(iVar6 + 0x2f0) = fVar3;
          if (bVar1 == bVar2) {
            local_18 = (uint)*(byte *)(iVar6 + 0x2da);
            uVar4 = __ftol();
            *(undefined1 *)(iVar6 + 0x2d6) = uVar4;
            local_18 = (uint)*(byte *)(iVar6 + 0x2d9);
            uVar4 = __ftol();
            local_18 = (uint)*(byte *)(iVar6 + 0x2d8);
            *(undefined1 *)(iVar6 + 0x2d5) = uVar4;
            uVar4 = __ftol();
            *(undefined1 *)(iVar6 + 0x2d4) = uVar4;
            param_1 = local_1c;
          }
          else {
            FUN_0054f7c0(&local_20);
          }
        }
      }
      local_20 = local_20 + 1;
    } while ((int)local_20 < *(int *)(param_1 + 0x10));
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

