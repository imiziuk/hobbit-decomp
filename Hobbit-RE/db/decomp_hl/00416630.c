
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00416630(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  int local_18;
  int local_14;
  undefined1 auStack_c [12];
  
  if ((*(int *)(param_1 + 0x434) != -0x40800000) &&
     (fVar11 = param_2 + *(float *)(param_1 + 0x434), *(float *)(param_1 + 0x434) = fVar11,
     _DAT_006e9550 < fVar11)) {
    *(undefined4 *)(param_1 + 0x434) = 0xbf800000;
  }
  if ((*(int *)(param_1 + 0x424) != 0) &&
     (((*(int *)(param_1 + 0x430) != 0 || (DAT_006e92e4 < *(float *)(param_1 + 0x438))) &&
      (local_14 = 0, 0 < *(int *)(param_1 + 0x444))))) {
    local_18 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x448);
      iVar9 = iVar4 + local_18;
      piVar3 = (int *)FUN_004021c0(*(undefined4 *)(iVar4 + 0x48 + local_18),
                                   *(undefined4 *)(iVar4 + 0x4c + local_18));
      if (piVar3 != (int *)0x0) {
        fVar11 = *(float *)(iVar9 + 0x28) - param_2;
        bVar1 = fVar11 < DAT_006e92e4;
        bVar2 = fVar11 == DAT_006e92e4;
        *(float *)(iVar9 + 0x28) = fVar11;
        if (bVar1 != bVar2) {
          *(float *)(iVar9 + 0x28) = fVar11 + *(float *)(iVar9 + 0x24);
          *(float *)(iVar9 + 0x2c) = *(float *)(iVar9 + 0x50) + DAT_006e92e8;
          (**(code **)(*piVar3 + 0x110))();
          uVar6 = *(undefined4 *)(iVar9 + 0x54);
          iVar4 = FUN_00659e10(uVar6);
          if ((iVar4 != 0) || (iVar4 = FUN_00659e70(*(undefined4 *)(iVar9 + 0x54)), iVar4 != 0)) {
            FUN_00659c80(*(undefined4 *)(iVar9 + 0x54),0);
          }
          uVar5 = (**(code **)(*piVar3 + 0x28))(1);
          uVar6 = FUN_00659630(s_GasTrap_0071fa40,uVar5,uVar6);
          *(undefined4 *)(iVar9 + 0x54) = uVar6;
        }
        if (DAT_006e92e4 < *(float *)(iVar9 + 0x2c)) {
          iVar4 = 0;
          do {
            fVar10 = (float10)FUN_00416dc0(iVar4);
            fVar11 = (float)fVar10;
            uVar6 = FUN_00416c80(auStack_c,iVar4);
            iVar7 = FUN_00416480(uVar6,fVar11);
            if ((iVar7 != 0) && (*(int *)(param_1 + 0x434) == -0x40800000)) {
              *(float *)(param_1 + 0x434) = param_2;
              piVar8 = (int *)FUN_0041bcc0();
              (**(code **)(*piVar8 + 0x128))(-DAT_0071f4d0);
              iVar7 = FUN_0041bcc0();
              *(undefined4 *)(iVar7 + 0x5f34) = 1;
              iVar7 = FUN_0041bcc0();
              *(undefined4 *)(iVar7 + 0x5f40) = 0;
              uVar6 = DAT_0071f4d4;
              iVar7 = FUN_0041bcc0();
              *(undefined4 *)(iVar7 + 0x5f38) = uVar6;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 2);
          if ((*(float *)(iVar9 + 0x2c) < DAT_006e92e8 != (*(float *)(iVar9 + 0x2c) == DAT_006e92e8)
              ) && (iVar4 = (**(code **)(*piVar3 + 0x10c))(), iVar4 != 0)) {
            FUN_0048a740();
          }
          *(float *)(iVar9 + 0x2c) = *(float *)(iVar9 + 0x2c) - param_2;
        }
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x58;
    } while (local_14 < *(int *)(param_1 + 0x444));
  }
  return;
}

