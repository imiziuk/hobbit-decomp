
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00630680(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  float10 fVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  uVar9 = FUN_005be240();
  iVar2 = FUN_004021c0(uVar9);
  FUN_005be240();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0041bcc0();
  *(float *)(param_1 + 0x58) = param_2 + *(float *)(param_1 + 0x58);
  fVar1 = param_2 + *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x48) = fVar1;
  if ((*(uint *)(*(int *)(param_1 + 8) + 0x130) & 0x1000) != 0) {
    *(float *)(param_1 + 0x48) = fVar1 + param_2;
  }
  if ((*(uint *)(*(int *)(param_1 + 8) + 0x130) & 0x400) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  iVar2 = FUN_005afc20();
  if (iVar2 == 0) {
    return 0;
  }
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
  case 8:
  case 0xd:
    if (((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) ||
       (iVar2 = FUN_00630d00(&param_3), iVar2 != 0)) break;
    goto LAB_00630743;
  case 6:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) break;
LAB_00630743:
    iVar2 = FUN_00630e50(&param_3);
joined_r0x006309a2:
    if (iVar2 == 0) {
LAB_0063075c:
      iVar2 = FUN_00630f60(&param_3);
LAB_00630763:
      if (iVar2 == 0) {
        param_3 = 8;
      }
    }
    break;
  case 7:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) break;
    goto LAB_0063075c;
  case 9:
    iVar3 = FUN_005ba850(&param_3);
    iVar2 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      if ((*(byte *)(iVar2 + 0x130) & 1) != 0) {
        uVar7 = *(undefined4 *)(iVar2 + 0x174);
        uVar10 = *(undefined4 *)(iVar2 + 0x170);
        uVar11 = 0;
        FUN_005afc20(uVar10,uVar7,0);
        FUN_005c7dd0(uVar10,uVar7,uVar11);
        *(undefined4 *)(param_1 + 0x48) = 0;
        FUN_00630fb0(&param_3);
      }
    }
    else {
      uVar7 = *(undefined4 *)(iVar2 + 0x174);
      uVar10 = *(undefined4 *)(iVar2 + 0x170);
      uVar11 = 0;
      FUN_005afc20(uVar10,uVar7,0);
      FUN_005c7dd0(uVar10,uVar7,uVar11);
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    break;
  case 10:
    if (((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) ||
       (iVar2 = FUN_00630d00(&param_3), iVar2 != 0)) break;
    iVar2 = FUN_00630e50(&param_3);
    goto LAB_00630763;
  case 0xb:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) {
      FUN_005af120();
      iVar2 = FUN_004683c0();
      FUN_005af120();
      iVar3 = FUN_004de600();
      if (iVar2 < iVar3) {
        piVar4 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),
                                     *(undefined4 *)(*(int *)(param_1 + 8) + 0x4c));
        if (piVar4 != (int *)0x0) {
          puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
          uStack_18 = *puVar5;
          fStack_10 = (float)puVar5[2];
          fStack_14 = (float)puVar5[1] + _DAT_006edf94;
          piVar6 = (int *)FUN_005af120();
          (**(code **)(*piVar6 + 0x14))(&uStack_18,0);
          fVar8 = (float10)(**(code **)(*piVar4 + 0x10c))();
          fStack_10 = (float)fVar8;
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
    uVar7 = 0;
    FUN_005af120(0);
    FUN_00468400(uVar7);
    iVar2 = FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),
                         *(undefined4 *)(*(int *)(param_1 + 8) + 0x4c));
    if (iVar2 != 0) {
      FUN_00468430(0,0);
    }
    FUN_00630fb0(&param_3);
    break;
  case 0xc:
    if (((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) ||
       (iVar2 = FUN_00630d00(&param_3), iVar2 != 0)) break;
    iVar2 = FUN_00630e50(&param_3);
    goto joined_r0x006309a2;
  default:
    param_3 = 5;
  }
  uVar7 = FUN_005be370(param_2,param_3);
  return uVar7;
}

