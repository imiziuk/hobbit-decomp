
/* WARNING: Removing unreachable block (ram,0x004737b6) */
/* WARNING: Removing unreachable block (ram,0x0047386d) */
/* WARNING: Removing unreachable block (ram,0x00473871) */
/* WARNING: Removing unreachable block (ram,0x00473781) */
/* WARNING: Removing unreachable block (ram,0x00473778) */
/* WARNING: Removing unreachable block (ram,0x00473797) */
/* WARNING: Removing unreachable block (ram,0x00473897) */
/* WARNING: Removing unreachable block (ram,0x004738b0) */
/* WARNING: Removing unreachable block (ram,0x004738e4) */
/* WARNING: Removing unreachable block (ram,0x00473917) */
/* WARNING: Removing unreachable block (ram,0x004738ea) */
/* WARNING: Removing unreachable block (ram,0x0047390b) */
/* WARNING: Removing unreachable block (ram,0x00473913) */
/* WARNING: Removing unreachable block (ram,0x004738b8) */
/* WARNING: Removing unreachable block (ram,0x004738cc) */
/* WARNING: Removing unreachable block (ram,0x004738db) */
/* WARNING: Removing unreachable block (ram,0x0047391a) */

void __thiscall FUN_00473650(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  fVar1 = DAT_006e92e4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1610;
  local_c = ExceptionList;
  iVar8 = param_2 * 0x40;
  iVar11 = iVar8 + *(int *)(param_1 + 0xd0);
  if (*(int *)(iVar11 + 0x2c) == 0) {
    ExceptionList = &local_c;
    *(undefined2 *)(iVar11 + 0x38) = *(undefined2 *)(iVar11 + 0x30);
    iVar4 = 0;
    if (*(int *)(param_1 + 0xb0) < 1) {
LAB_004736e7:
      *(float *)(iVar8 + 0x3c + *(int *)(param_1 + 0xd0)) = fVar1;
    }
    else {
      iVar9 = 0;
      do {
        if (iVar4 == *(short *)(iVar11 + 0x38)) {
          fVar1 = fVar1 + *(float *)(iVar11 + 0x34);
          goto LAB_004736e7;
        }
        fVar1 = fVar1 + *(float *)(iVar9 + 0x38 + *(int *)(param_1 + 0xb4));
        iVar4 = iVar4 + 1;
        iVar9 = iVar9 + 0x3c;
      } while (iVar4 < *(int *)(param_1 + 0xb0));
      *(float *)(iVar8 + 0x3c + *(int *)(param_1 + 0xd0)) = fVar1;
    }
    goto LAB_004739cf;
  }
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_006bf840(0);
  piVar5 = (int *)operator_new(4);
  FUN_006bf840(0);
  iVar10 = 0;
  *piVar5 = param_2;
  iVar9 = iVar11;
  fVar1 = DAT_006e92e4;
  for (iVar4 = *(int *)(iVar11 + 0x2c); DAT_006e92e4 = fVar1, iVar4 != 0;
      iVar4 = *(int *)(iVar4 + 0x2c + *(int *)(param_1 + 0xd0))) {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0xec) + *(int *)(iVar9 + 0x30) * 4) + 0x30);
    if ((iVar4 == 0) || (*(short *)(iVar4 + 0xc) == param_2)) {
      *(undefined4 *)(iVar8 + 0x2c + *(int *)(param_1 + 0xd0)) = 0;
      *(undefined4 *)(iVar8 + 0x34 + *(int *)(param_1 + 0xd0)) = 0;
      *(int *)(*(int *)(param_1 + 0xd0) + iVar8 + 0x30) =
           (int)*(short *)(*(int *)(param_1 + 0xd0) + 0x38 + iVar8);
      iVar4 = 0;
      if (*(int *)(param_1 + 0xb0) < 1) goto LAB_00473ab4;
      iVar9 = 0;
      goto LAB_00473a86;
    }
    puVar6 = (undefined4 *)FUN_00451d70(0);
    *puVar6 = *(undefined4 *)(iVar9 + 0x30);
    sVar3 = *(short *)(iVar4 + 0xc);
    piVar7 = (int *)FUN_00451d70(0);
    *piVar7 = (int)sVar3;
    iVar4 = *(short *)(iVar4 + 0xc) * 0x40;
    iVar9 = iVar4 + *(int *)(param_1 + 0xd0);
    fVar1 = DAT_006e92e4;
  }
  fVar1 = *(float *)(iVar9 + 0x3c);
  *(float *)(iVar8 + 0x3c + *(int *)(param_1 + 0xd0)) = fVar1;
  if (*(int *)(*(int *)(param_1 + 0x108) + param_2 * 4) == 0) {
    *(undefined2 *)(iVar8 + 0x38 + *(int *)(param_1 + 0xd0)) = 0xffff;
    iVar11 = *(int *)(param_1 + 0xb0);
    iVar4 = 0;
    if (0 < iVar11) {
      do {
        iVar9 = iVar4 + 1;
        if ((iVar9 == iVar11) ||
           ((*(float *)(*(int *)(param_1 + 0xb4) + 0x38 + iVar10) < fVar1 &&
            (fVar2 = *(float *)(*(int *)(param_1 + 0xb4) + iVar10 + 0x74),
            fVar1 < fVar2 != (NAN(fVar1) || NAN(fVar2)))))) {
          *(short *)(iVar8 + 0x38 + *(int *)(param_1 + 0xd0)) = (short)iVar4;
          break;
        }
        iVar10 = iVar10 + 0x3c;
        iVar4 = iVar9;
      } while (iVar9 < iVar11);
    }
  }
  goto LAB_0047399a;
LAB_00473a86:
  if (iVar4 != *(short *)(iVar11 + 0x38)) goto code_r0x00473a8c;
  fVar1 = fVar1 + *(float *)(iVar11 + 0x34);
LAB_00473ab4:
  *(float *)(iVar8 + 0x3c + *(int *)(param_1 + 0xd0)) = fVar1;
  goto LAB_0047399a;
code_r0x00473a8c:
  fVar1 = fVar1 + *(float *)(iVar9 + 0x38 + *(int *)(param_1 + 0xb4));
  iVar4 = iVar4 + 1;
  iVar9 = iVar9 + 0x3c;
  if (*(int *)(param_1 + 0xb0) <= iVar4) goto code_r0x00473a9e;
  goto LAB_00473a86;
code_r0x00473a9e:
  *(float *)(iVar8 + 0x3c + *(int *)(param_1 + 0xd0)) = fVar1;
LAB_0047399a:
  FUN_006bf840(piVar5);
  local_4 = 0xffffffff;
  FUN_006bf840(0);
LAB_004739cf:
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0xec) + iVar11 * 4) + 0x30);
      if ((iVar8 != 0) && (*(short *)(iVar8 + 0xc) == param_2)) {
        FUN_00473b20(iVar11);
        FUN_00473ad0(iVar11);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0xe8));
  }
  ExceptionList = local_c;
  return;
}

