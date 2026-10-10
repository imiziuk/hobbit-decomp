
undefined4 __thiscall FUN_004d1d10(int *param_1,int param_2,float *param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 unaff_EBX;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *unaff_retaddr;
  int local_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  piVar1 = param_1 + 0x2f;
  local_50 = param_2;
  iVar9 = FUN_00549470(piVar1);
  (**(code **)(*param_1 + 0x100))();
  (**(code **)(*param_1 + 0x34))(&fStack_40);
  iVar10 = 0;
  piVar13 = piVar1;
  if (0 < *(int *)(iVar9 + 0x74)) {
    piVar12 = (int *)(*(int *)(iVar9 + 0x78) + 4);
    do {
      if (param_2 < *piVar12) {
        iVar10 = *(int *)(iVar10 * 0x34 + 0x28 + *(int *)(iVar9 + 0x78)) * 0x20;
        iVar14 = *(int *)(iVar10 + 8 + *(int *)(iVar9 + 0x70)) * param_2 +
                 *(int *)(iVar10 + *(int *)(iVar9 + 0x70) + 0x18);
        FUN_0041b9f0(&local_50,iVar14);
        *piVar1 = local_50;
        param_1[0x30] = iStack_4c;
        param_1[0x31] = iStack_48;
        fVar3 = *(float *)(iVar14 + 0xc);
        fVar4 = *(float *)(iVar14 + 0x14);
        fVar5 = *(float *)(iVar14 + 0x10);
        fVar6 = *(float *)(iVar14 + 0xc);
        fVar7 = *(float *)(iVar14 + 0x14);
        fVar8 = *(float *)(iVar14 + 0x10);
        *param_3 = fStack_34 * *(float *)(iVar14 + 0x10) +
                   fStack_24 * *(float *)(iVar14 + 0x14) + fStack_44 * *(float *)(iVar14 + 0xc);
        param_3[1] = fStack_30 * fVar5 + fStack_20 * fVar4 + fStack_40 * fVar3;
        param_3[2] = fStack_2c * fVar8 + fStack_1c * fVar7 + fStack_3c * fVar6;
        iVar9 = *(int *)(iVar10 + 0x38 + *(int *)(iVar9 + 0x70));
        puVar2 = (undefined1 *)(iVar9 + param_2 * 4);
        param_4[3] = *(undefined1 *)(iVar9 + 3 + param_2 * 4);
        param_4[2] = puVar2[2];
        param_4[1] = puVar2[1];
        *param_4 = *puVar2;
        FUN_00549580(unaff_retaddr);
        return 1;
      }
      param_2 = param_2 - *piVar12;
      iVar10 = iVar10 + 1;
      piVar12 = piVar12 + 0xd;
      piVar13 = unaff_retaddr;
    } while (iVar10 < *(int *)(iVar9 + 0x74));
  }
  FUN_00549580(piVar13);
  uVar11 = (**(code **)(*param_1 + 0x4c))();
  FUN_0064e7d0(s_Could_not_find_vertex___d_in__s__0072d7a4,unaff_EBX,uVar11);
  return 0;
}

