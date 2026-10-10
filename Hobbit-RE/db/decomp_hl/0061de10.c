
void __thiscall FUN_0061de10(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar2 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x90),
                               *(undefined4 *)(*(int *)(param_1 + 8) + 0x94));
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)FUN_005af120();
    iVar5 = *piVar3;
    uVar4 = (**(code **)(*piVar2 + 0x28))(0);
    (**(code **)(iVar5 + 0x14))(uVar4);
  }
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    *(float *)(param_1 + 0x50) = param_2 + *(float *)(param_1 + 0x50);
    fVar1 = param_2 + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x54) = fVar1;
    if ((*(float *)(param_1 + 0x4c) <= fVar1) ||
       (*(int *)(*(int *)(param_1 + 8) + 0x90) == 0 && *(int *)(*(int *)(param_1 + 8) + 0x94) == 0))
    {
      uVar6 = FUN_005af450();
      *(undefined8 *)(param_1 + 0x60) = uVar6;
      iVar5 = FUN_0061e1b0(&param_3);
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x54) = 0;
        param_3 = 5;
      }
    }
    if (*(float *)(param_1 + 0x48) <= *(float *)(param_1 + 0x50)) {
      param_3 = 7;
    }
    goto LAB_0061e062;
  case 6:
    fVar1 = param_2 + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x58) = fVar1;
    if (fVar1 < *(float *)(param_1 + 0x5c)) goto LAB_0061e062;
    iVar5 = FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x90),
                         *(undefined4 *)(*(int *)(param_1 + 8) + 0x94));
    if (iVar5 != 0) {
      uStack_18 = 0x3f800000;
      uStack_14 = 0x41200000;
      uStack_10 = 0x3f800000;
      uStack_c = 0;
      uStack_8 = 0;
      uStack_4 = 0;
      uVar4 = (**(code **)(*piVar2 + 0x28))(&uStack_c,&uStack_18);
      FUN_00488d30(s_Footfall_00724204,uVar4);
    }
    if (((*(int *)(*(int *)(param_1 + 8) + 0x90) != *(int *)(param_1 + 0x60)) ||
        (*(int *)(*(int *)(param_1 + 8) + 0x94) != *(int *)(param_1 + 100))) &&
       (iVar5 = FUN_0061e1b0(&param_3), iVar5 != 0)) goto LAB_0061e062;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    break;
  case 7:
    piVar2 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x90),
                                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x94));
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)FUN_005af120();
      iVar5 = *piVar3;
      uVar4 = (**(code **)(*piVar2 + 0x28))(0);
      (**(code **)(iVar5 + 0x14))(uVar4);
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      param_3 = 8;
    }
    goto LAB_0061e062;
  case 8:
    piVar2 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x90),
                                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x94));
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)FUN_005af120();
      iVar5 = *piVar3;
      uVar4 = (**(code **)(*piVar2 + 0x28))(0);
      (**(code **)(iVar5 + 0x14))(uVar4);
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_0061e062;
  }
  param_3 = 5;
LAB_0061e062:
  FUN_005be370(param_2,param_3);
  return;
}

