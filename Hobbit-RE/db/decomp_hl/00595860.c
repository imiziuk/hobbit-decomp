
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00595860(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd278;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  iVar6 = FUN_00595b80();
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x22c) = 7;
    goto LAB_00595a79;
  }
  iVar3 = *(int *)(iVar6 + 4);
  if (iVar3 == 0x1a) {
    FUN_00592920();
    FUN_00592920();
    FUN_004a4160();
LAB_00595a18:
    FUN_00592920();
    FUN_0042a610(&DAT_0075cba4);
    FUN_0054e3f0();
  }
  else {
    if ((iVar3 == 0x1c) || (iVar3 == 0x23)) {
      FUN_00592920();
      FUN_00592920();
      FUN_004a4160();
      goto LAB_00595a18;
    }
    if (iVar3 == 0x19) {
      piVar7 = (int *)FUN_00592920();
      uVar10 = (**(code **)(*piVar7 + 0x28))();
      FUN_0054d020(*(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x28c),uVar10);
    }
    else if (((iVar3 == 0xd) || (iVar3 == 0xe)) && (0 < *(int *)(param_1 + 0x19c))) {
      piVar7 = (int *)FUN_00592920();
      pfVar4 = *(float **)(param_1 + 0x1a0);
      pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
      fVar1 = pfVar4[2];
      fVar2 = pfVar8[2];
      fVar5 = (pfVar4[1] - pfVar8[1]) - _DAT_006e9364;
      *(float *)(iVar6 + 0x68) = *pfVar4 - *pfVar8;
      *(float *)(iVar6 + 0x6c) = fVar5;
      *(float *)(iVar6 + 0x70) = fVar1 - fVar2;
      piVar7 = (int *)FUN_00592920();
      puVar9 = (undefined4 *)(**(code **)(*piVar7 + 0x28))();
      *(undefined4 *)(param_1 + 0x1e8) = *puVar9;
      *(undefined4 *)(param_1 + 0x1ec) = puVar9[1];
      *(undefined4 *)(param_1 + 0x1f0) = puVar9[2];
    }
  }
  FUN_005960d0();
LAB_00595a79:
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x22c) = 0;
  uVar10 = FUN_00595ad0();
  *(undefined4 *)(param_1 + 0x230) = uVar10;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffbffff;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

