
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061ec00(int param_1,float param_2,undefined4 param_3)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined8 uVar10;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar10 = FUN_005be240();
  piVar3 = (int *)FUN_004021c0(uVar10);
  FUN_005be240();
  if ((piVar3 == (int *)0x0) || (iVar4 = FUN_005afc20(), iVar4 == 0)) {
    return 0;
  }
  FUN_0041bcc0();
  piVar5 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x90),
                               *(undefined4 *)(*(int *)(param_1 + 8) + 0x94));
  if (piVar5 != (int *)0x0) {
    piVar6 = (int *)FUN_005af120();
    iVar4 = *piVar6;
    uVar7 = (**(code **)(*piVar5 + 0x28))(0);
    (**(code **)(iVar4 + 0x14))(uVar7);
  }
  fVar2 = param_2 + *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x68) = fVar2;
  if ((*(int *)(param_1 + 0x58) == 0 && *(int *)(param_1 + 0x5c) == 0) && (_DAT_006f5e1c <= fVar2))
  {
    puVar8 = (undefined4 *)(**(code **)(*piVar3 + 0x28))();
    uVar10 = FUN_005af6d0(*puVar8,puVar8[1],puVar8[2]);
    *(undefined8 *)(param_1 + 0x58) = uVar10;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
  case 0xc:
    goto switchD_0061eceb_caseD_5;
  case 6:
    iVar4 = FUN_0061f2d0(&param_3);
    if ((iVar4 != 0) || (iVar4 = FUN_0061f480(&param_3), iVar4 != 0)) break;
    goto switchD_0061eceb_caseD_5;
  case 7:
    fVar2 = param_2 + *(float *)(param_1 + 0x60);
    *(float *)(param_1 + 0x60) = fVar2;
    if (*(float *)(param_1 + 100) <= fVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (piVar5 != (int *)0x0) {
        uStack_18 = 0x3f800000;
        uStack_14 = 0x41200000;
        uStack_10 = 0x3f800000;
        uStack_c = 0;
        uStack_8 = 0;
        uStack_4 = 0;
        uVar7 = (**(code **)(*piVar5 + 0x28))(&uStack_c,&uStack_18);
        FUN_00488d30(s_Footfall_00724204,uVar7);
      }
      iVar4 = FUN_0061f2d0(&param_3);
      if (iVar4 == 0) {
        param_3 = 6;
      }
    }
    break;
  case 8:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) break;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    iVar4 = FUN_0061f150(&param_3);
    if ((iVar4 != 0) || (iVar4 = FUN_0061f4e0(&param_3), iVar4 != 0)) break;
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x130);
    goto LAB_0061eecc;
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) break;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    iVar4 = FUN_0061f150(&param_3);
    if ((iVar4 != 0) || (iVar4 = FUN_0061f4e0(&param_3), iVar4 != 0)) break;
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x130);
    goto LAB_0061eecc;
  case 10:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      iVar4 = FUN_0061f150(&param_3);
      if (((iVar4 == 0) && (iVar4 = FUN_0061f4e0(&param_3), iVar4 == 0)) &&
         ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0)) {
        param_3 = 0xb;
      }
    }
    break;
  case 0xb:
    fVar2 = param_2 + *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x4c) = fVar2;
    if ((*(uint *)(*(int *)(param_1 + 8) + 0x130) & 0x1000) != 0) {
      *(float *)(param_1 + 0x4c) = fVar2 + param_2;
    }
    FUN_005af120();
    fVar9 = (float10)FUN_005aaac0();
    if ((float10)*(float *)(param_1 + 0x6c) < fVar9) {
      param_3 = 0xc;
    }
    iVar4 = FUN_0061f150(&param_3);
    if ((iVar4 != 0) || (iVar4 = FUN_0061f4e0(&param_3), iVar4 != 0)) break;
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x130);
LAB_0061eecc:
    if ((bVar1 & 1) != 0) {
      param_3 = 0xb;
    }
    break;
  default:
    param_3 = 5;
  }
LAB_0061ef27:
  uVar7 = FUN_005be370(param_2,param_3);
  return uVar7;
switchD_0061eceb_caseD_5:
  if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
    param_3 = 6;
  }
  goto LAB_0061ef27;
}

