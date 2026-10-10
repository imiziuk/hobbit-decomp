
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00467710(int *param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int iStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined4 auStack_7a [8];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar2 = (**(code **)(*param_1 + 0x154))();
  iVar3 = FUN_00549470(uVar2);
  FUN_00549580(uVar2);
  iStack_9c = *(int *)(iVar3 + 0x4c);
  if (0 < iStack_9c) {
    iVar3 = 0;
    do {
      uVar2 = (**(code **)(*param_1 + 0x154))();
      iVar4 = FUN_00549470(uVar2);
      FUN_00549580(uVar2);
      uStack_80 = *(undefined2 *)(*(int *)(iVar4 + 0x50) + iVar3);
      iVar4 = *(int *)(iVar4 + 0x50) + iVar3;
      uStack_7e = *(undefined2 *)(iVar4 + 2);
      uStack_7c = *(undefined2 *)(iVar4 + 4);
      puVar7 = (undefined4 *)(iVar4 + 6);
      puVar8 = auStack_7a;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      fStack_58 = *(float *)(iVar4 + 0x28);
      fStack_54 = *(float *)(iVar4 + 0x2c);
      fStack_50 = *(float *)(iVar4 + 0x30);
      uStack_4c = *(undefined4 *)(iVar4 + 0x34);
      uStack_48 = *(undefined4 *)(iVar4 + 0x38);
      uStack_44 = *(undefined4 *)(iVar4 + 0x3c);
      FUN_00424a30(iVar4 + 0x40);
      fVar1 = SQRT(fStack_58 * fStack_58 + fStack_50 * fStack_50 + fStack_54 * fStack_54);
      if (fVar1 < _DAT_006ecc80 == (fVar1 == _DAT_006ecc80)) {
        fVar1 = fVar1 * _DAT_006ecde0;
        if (((fVar1 < _DAT_006e9554 == (NAN(fVar1) || NAN(_DAT_006e9554))) ||
            (fStack_98 = DAT_006e92e8, DAT_006e92e8 <= fVar1)) &&
           (fStack_98 = fVar1, fVar1 < _DAT_006e9554 == (NAN(fVar1) || NAN(_DAT_006e9554)))) {
          fStack_98 = _DAT_006e9554;
        }
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        fStack_94 = fStack_98;
        fStack_90 = fStack_98;
        uVar9 = FUN_00488f10(param_2,param_1[2],param_1[3],auStack_7a,&uStack_8c,&fStack_98,0);
        piVar5 = (int *)FUN_004021c0(uVar9);
        (**(code **)(*piVar5 + 0x110))();
      }
      iVar3 = iVar3 + 0x80;
      iStack_9c = iStack_9c + -1;
    } while (iStack_9c != 0);
  }
  return;
}

