
void __thiscall FUN_00629210(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uVar7;
  
  piVar3 = (int *)FUN_004021c0(param_2,param_3);
  iVar1 = *(int *)(param_4 + 0x28);
  if ((iVar1 == 1) || (iVar1 == 4)) {
    FUN_005af120();
    fVar6 = (float10)FUN_004a5770();
    if (fVar6 <= (float10)DAT_006e92e4) {
      *(undefined4 *)(param_1 + 0x50) = 1;
      *(float *)(param_4 + 0x30) = *(float *)(param_4 + 0x30) * DAT_006e92e4;
      if ((piVar3 != (int *)0x0) &&
         ((((iVar1 = *(int *)(param_4 + 0x28), iVar1 == 2 || (iVar1 == 5)) || (iVar1 == 1)) ||
          ((iVar1 == 4 || (iVar1 == 7)))))) {
        iVar4 = FUN_005af120();
        uVar7 = *(undefined4 *)(iVar4 + 0xc);
        iVar1 = *piVar3;
        uVar2 = *(undefined4 *)(iVar4 + 8);
        uVar5 = (**(code **)(iVar1 + 0x28))(0x3f800000,0,0,0x3f800000,0xc,0);
        (**(code **)(iVar1 + 0x78))(uVar2,uVar7,uVar5);
      }
      goto LAB_0062935d;
    }
    uVar7 = 0;
    FUN_005af120(0);
    FUN_004a5780(uVar7);
  }
  else if (iVar1 != 0x12) {
    if ((piVar3 != (int *)0x0) &&
       (((iVar1 == 2 || (iVar1 == 5)) || ((iVar1 == 1 || ((iVar1 == 4 || (iVar1 == 7)))))))) {
      iVar4 = FUN_005af120();
      uVar7 = *(undefined4 *)(iVar4 + 0xc);
      iVar1 = *piVar3;
      uVar2 = *(undefined4 *)(iVar4 + 8);
      uVar5 = (**(code **)(iVar1 + 0x28))(0x3f800000,0,0,0x3f800000,0xc,0);
      (**(code **)(iVar1 + 0x78))(uVar2,uVar7,uVar5);
    }
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(float *)(param_4 + 0x30) = *(float *)(param_4 + 0x30) * DAT_006e92e4;
    goto LAB_0062935d;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
LAB_0062935d:
  FUN_005be830(param_2,param_3,param_4);
  return;
}

