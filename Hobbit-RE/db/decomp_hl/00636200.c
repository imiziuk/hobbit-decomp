
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00636200(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 auStack_5c [8];
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e5818;
  pvStack_c = ExceptionList;
  uVar12 = 0x1b;
  ExceptionList = &pvStack_c;
  FUN_005af120(0x1b);
  iVar5 = FUN_004a1250(uVar12);
  if (iVar5 != 0) {
    FUN_005af120();
    iVar5 = FUN_00593dd0(0x1b,1,0xfffffffe);
    if (iVar5 != 0) {
      piVar6 = (int *)FUN_005af120();
      uVar12 = (**(code **)(*piVar6 + 0x154))();
      FUN_00549470(uVar12);
      FUN_00549580(uVar12);
      iVar5 = FUN_0053cc70(iVar5 + 8);
      if (-1 < iVar5) {
        piVar6 = (int *)FUN_005af120();
        uVar12 = (**(code **)(*piVar6 + 0x154))();
        iVar7 = FUN_00549470(uVar12);
        FUN_00549580(uVar12);
        if (iVar5 < *(int *)(iVar7 + 0x54)) {
          piVar6 = (int *)FUN_005af120();
          uVar12 = (**(code **)(*piVar6 + 0x154))();
          iVar7 = FUN_00549470(uVar12);
          FUN_00549580(uVar12);
          puVar8 = (undefined4 *)(iVar5 * 0x50 + *(int *)(iVar7 + 0x58));
          puVar10 = puVar8;
          puVar11 = auStack_5c;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          uStack_3c = puVar8[8];
          uStack_38 = *(undefined2 *)(puVar8 + 9);
          uStack_36 = *(undefined2 *)((int)puVar8 + 0x26);
          uStack_34 = *(undefined2 *)(puVar8 + 10);
          uStack_32 = *(undefined2 *)((int)puVar8 + 0x2a);
          uStack_30 = *(undefined2 *)(puVar8 + 0xb);
          uStack_2e = *(undefined1 *)((int)puVar8 + 0x2e);
          uStack_2d = *(undefined1 *)((int)puVar8 + 0x2f);
          uStack_2c = *(undefined2 *)(puVar8 + 0xc);
          uStack_2a = *(undefined2 *)((int)puVar8 + 0x32);
          uStack_28 = *(undefined2 *)(puVar8 + 0xd);
          fVar1 = (float)puVar8[0xe];
          fVar2 = (float)puVar8[0xf];
          fVar4 = (float)puVar8[0x10];
          uStack_18 = puVar8[0x11];
          uStack_14 = puVar8[0x12];
          uStack_10 = *(undefined2 *)(puVar8 + 0x13);
          uStack_4 = 0;
          fStack_24 = fVar1;
          fStack_20 = fVar2;
          fStack_1c = fVar4;
          piVar6 = (int *)FUN_005af120();
          iVar5 = (**(code **)(*piVar6 + 0x154))();
          fVar3 = *(float *)(iVar5 + 0x28);
          fVar1 = fVar1 * fVar3;
          fVar2 = fVar2 * fVar3;
          fVar4 = fVar4 * fVar3;
          piVar6 = (int *)FUN_005af120();
          pfVar9 = (float *)(**(code **)(*piVar6 + 0x38))();
          uStack_4 = 0xffffffff;
          fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4) + (pfVar9[3] - *pfVar9);
          *(float *)(param_1 + 0x74) = fVar1;
          *(float *)(param_1 + 0x78) = fVar1 * _DAT_006e99a8;
          FUN_00544b20();
        }
      }
    }
  }
  FUN_00429100();
  ExceptionList = pvStack_c;
  return;
}

