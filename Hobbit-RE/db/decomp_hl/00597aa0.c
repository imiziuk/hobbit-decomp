
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00597aa0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 uVar10;
  int *piVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 uStack_58;
  undefined4 uStack_50;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd3d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__ChooseTurnAnim_00743158);
  local_4 = 0;
  if (*(int *)(param_1 + 400) != 0) {
    iVar6 = FUN_00566dd0();
    if (iVar6 == 0) {
      uVar10 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x10);
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x14);
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar6 = FUN_00406ce0(uVar10,uVar1);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar6 == -1) {
        FUN_00649720();
      }
      else {
        uVar2 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
        piVar11 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
        FUN_00649720();
        if (piVar11 != (int *)0x0) {
          piVar7 = (int *)FUN_00592920();
          pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
          pfVar9 = (float *)(**(code **)(*piVar11 + 0x28))();
          fVar3 = pfVar9[2] - pfVar8[2];
          fVar4 = pfVar9[1] - pfVar8[1];
          fVar5 = *pfVar9 - *pfVar8;
          iVar6 = FUN_00592190();
          FUN_00401f00(*(float *)(iVar6 + 0x4c) * fVar5 +
                       *(float *)(iVar6 + 0x50) * fVar4 + *(float *)(iVar6 + 0x54) * fVar3 +
                       *(float *)(iVar6 + 0x58),
                       *(float *)(iVar6 + 0x5c) * fVar5 +
                       *(float *)(iVar6 + 0x60) * fVar4 + *(float *)(iVar6 + 100) * fVar3 +
                       *(float *)(iVar6 + 0x68),
                       *(float *)(iVar6 + 0x70) * fVar4 +
                       *(float *)(iVar6 + 0x6c) * fVar5 + *(float *)(iVar6 + 0x74) * fVar3 +
                       *(float *)(iVar6 + 0x78));
          fVar12 = (float10)FUN_0064ca10(uStack_58,uStack_50);
          FUN_00592920();
          fVar13 = (float10)FUN_004a3370();
          fVar12 = (float10)FUN_00445150((float)(((float10)(float)fVar12 - fVar13) +
                                                (float10)_DAT_006e9368));
          uVar10 = FUN_00598220((float)(fVar12 - (float10)_DAT_006e9368));
          local_4 = 0xffffffff;
          FUN_00649720();
          ExceptionList = local_c;
          return uVar10;
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

