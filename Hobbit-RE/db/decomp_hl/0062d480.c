
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0062d480(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  float10 fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  uVar8 = FUN_005be240();
  iVar2 = FUN_004021c0(uVar8);
  FUN_005be240();
  if (iVar2 == 0) {
    uVar8 = FUN_0041bcd0();
    *(undefined8 *)(*(int *)(param_1 + 8) + 0x180) = uVar8;
  }
  FUN_0041bcc0();
  iVar3 = *(int *)(param_1 + 8);
  *(float *)(param_1 + 100) = param_2 + *(float *)(param_1 + 100);
  fVar1 = param_2 + *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 0x6c) = fVar1;
  if ((*(uint *)(iVar3 + 0x130) & 0x1000) != 0) {
    *(float *)(param_1 + 0x6c) = fVar1 + param_2;
  }
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
  case 6:
  case 0xd:
    if ((*(byte *)(iVar3 + 0x130) & 1) == 0) break;
    goto LAB_0062d570;
  case 7:
    uVar9 = FUN_00629780(iVar2,param_2,param_3);
    FUN_005be370(param_2,uVar9);
    return;
  case 8:
    uVar9 = FUN_0062d7d0(iVar2,param_2,param_3);
    FUN_005be370(param_2,uVar9);
    return;
  case 9:
    uVar9 = FUN_0062b950(iVar2,param_3);
    FUN_005be370(param_2,uVar9);
    return;
  case 10:
    uVar9 = FUN_0062b910(param_3);
    FUN_005be370(param_2,uVar9);
    return;
  case 0xb:
    if ((*(byte *)(iVar3 + 0x130) & 1) != 0) {
      FUN_005be370(param_2,6);
      return;
    }
    break;
  default:
    if (*(int *)(param_1 + 0x4c) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      FUN_005be370(param_2,0x11);
      return;
    }
LAB_0062d570:
    FUN_005be370(param_2,8);
    return;
  case 0xe:
    if ((*(byte *)(iVar3 + 0x130) & 1) == 0) {
      FUN_005af120();
      iVar2 = FUN_004de600();
      FUN_005af120();
      iVar3 = FUN_004683c0();
      if (iVar3 < iVar2) {
        piVar4 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),
                                     *(undefined4 *)(*(int *)(param_1 + 8) + 0x4c));
        if (piVar4 != (int *)0x0) {
          puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
          uStack_18 = *puVar5;
          fStack_10 = (float)puVar5[2];
          fStack_14 = (float)puVar5[1] + _DAT_006edf94;
          piVar6 = (int *)FUN_005af120();
          (**(code **)(*piVar6 + 0x14))(&uStack_18,0);
          fVar7 = (float10)(**(code **)(*piVar4 + 0x10c))();
          fStack_10 = (float)fVar7;
          fStack_14 = 0.0;
          uStack_c = 0;
          piVar4 = (int *)FUN_005af120();
          (**(code **)(*piVar4 + 0xf0))(&fStack_14);
          iVar2 = FUN_005af120();
          FUN_00468430(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
        }
        break;
      }
    }
    uVar9 = 0;
    FUN_005af120(0);
    FUN_00468400(uVar9);
    param_3 = 8;
    iVar2 = FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),
                         *(undefined4 *)(*(int *)(param_1 + 8) + 0x4c));
    if (iVar2 != 0) {
      FUN_00468430(0,0);
      FUN_005be370(param_2,8);
      return;
    }
    break;
  case 0xf:
    if ((*(byte *)(iVar3 + 0x130) & 1) != 0) {
      FUN_005af120();
      iVar2 = FUN_004a2970();
      FUN_005be370(param_2,(-(uint)(iVar2 != 1) & 0xfffffffd) + 8);
      return;
    }
    break;
  case 0x11:
    if ((*(byte *)(iVar3 + 0x130) & 1) != 0) {
      FUN_005be370(param_2,10);
      return;
    }
  }
  FUN_005be370(param_2,param_3);
  return;
}

