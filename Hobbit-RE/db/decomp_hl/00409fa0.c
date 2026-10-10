
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00409fa0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int iVar11;
  float10 fVar12;
  undefined4 local_38;
  undefined4 local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_8;
  
  pfVar5 = param_2;
  while( true ) {
    iVar11 = 0;
    param_2 = (float *)0x7f7fffff;
    local_38 = 0;
    local_34 = 0;
    if (0 < *(int *)(param_1 + 0x164)) {
      do {
        piVar6 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 0x168) + iVar11 * 8),
                                     *(undefined4 *)(*(int *)(param_1 + 0x168) + 4 + iVar11 * 8));
        if (piVar6 != (int *)0x0) {
          uVar7 = (**(code **)(*piVar6 + 0x4c))(&DAT_0071dcb0);
          iVar8 = FUN_00647f20(uVar7);
          if ((iVar8 == 0) || (param_3 != 0)) {
            iVar8 = FUN_005c0150();
            fVar1 = *(float *)(iVar8 + 4);
            FUN_004357e0(iVar8 + 0xc);
            pfVar5[1] = (fStack_8 - fVar1) * _DAT_006e936c + fVar1;
            iVar8 = FUN_004e2330(pfVar5);
            if (iVar8 != 0) {
              return;
            }
            pfVar9 = (float *)(**(code **)(*piVar6 + 0x28))();
            FUN_00401f00(*pfVar5 - *pfVar9,pfVar5[1] - pfVar9[1],pfVar5[2] - pfVar9[2]);
            fVar1 = ABS(fStack_30 * fStack_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
            if (fVar1 < (float)param_2 != (NAN(fVar1) || NAN((float)param_2))) {
              local_38 = *(undefined4 *)(*(int *)(param_1 + 0x168) + iVar11 * 8);
              local_34 = *(undefined4 *)(*(int *)(param_1 + 0x168) + 4 + iVar11 * 8);
              param_2 = (float *)fVar1;
            }
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x164));
    }
    if (param_3 == 0) break;
    param_3 = 0;
  }
  iVar11 = FUN_004021c0(local_38,local_34);
  if (iVar11 != 0) {
    iVar11 = FUN_004e2330(pfVar5);
    while (iVar11 == 0) {
      puVar10 = (undefined4 *)FUN_005c0150();
      uVar7 = *puVar10;
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      uVar4 = puVar10[5];
      fVar12 = (float10)FUN_00647b30(puVar10[1],puVar10[4]);
      pfVar5[1] = (float)fVar12;
      fVar12 = (float10)FUN_00647b30(uVar7,uVar3);
      *pfVar5 = (float)fVar12;
      fVar12 = (float10)FUN_00647b30(uVar2,uVar4);
      pfVar5[2] = (float)fVar12;
      iVar11 = FUN_004e2330(pfVar5);
    }
  }
  return;
}

