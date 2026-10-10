
undefined4 __thiscall FUN_00558850(int param_1,int param_2)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 extraout_ST0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9ed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_material2__EvaluatePackage_0073e074);
  DAT_00771c4c = DAT_00771c4c + 1;
  uVar2 = *(ushort *)(param_2 + 0x10);
  if (uVar2 < 2) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
  iVar5 = __ftol();
  if (*(char *)(param_2 + 0x1a) != '\x02') {
    uVar3 = *(ushort *)(param_2 + 0x14);
    iVar4 = *(int *)(param_1 + 0x9d0);
    iVar8 = iVar5 % (int)(uVar2 - 1);
    uVar7 = (uint)*(byte *)(param_2 + 0x18);
    iVar9 = 0;
    pfVar1 = (float *)(iVar4 + (uVar7 * iVar8 + (uint)uVar3) * 4);
    if (uVar7 != 0) {
      pfVar6 = pfVar1;
      do {
        iVar9 = iVar9 + 1;
        *(float *)((param_2 - (int)pfVar1) + -4 + (int)(pfVar6 + 1)) =
             (*(float *)(((iVar4 + (uVar7 * (iVar8 + 1) + (uint)uVar3) * 4) - (int)pfVar1) +
                        (int)pfVar6) - *pfVar6) * (float)(extraout_ST0 - (float10)iVar5) + *pfVar6;
        pfVar6 = pfVar6 + 1;
      } while (iVar9 < (int)(uint)*(byte *)(param_2 + 0x18));
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

