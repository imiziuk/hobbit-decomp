
void __thiscall FUN_0062b410(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar4 = (int *)FUN_004021c0(param_2,param_3);
  iVar1 = *(int *)(param_4 + 0x28);
  if ((iVar1 == 1) || (iVar1 == 4)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    if ((piVar4 != (int *)0x0) &&
       ((((iVar1 == 2 || (iVar1 == 5)) || (iVar1 == 1)) || ((iVar1 == 4 || (iVar1 == 7)))))) {
      iVar5 = FUN_005af120();
      uVar2 = *(undefined4 *)(iVar5 + 0xc);
      iVar1 = *piVar4;
      uVar3 = *(undefined4 *)(iVar5 + 8);
      uVar6 = (**(code **)(iVar1 + 0x28))(0x3f800000,0,0,0x3f800000,0xc,0);
      (**(code **)(iVar1 + 0x78))(uVar3,uVar2,uVar6);
    }
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(float *)(param_4 + 0x30) = *(float *)(param_4 + 0x30) * DAT_006e92e4;
  }
  FUN_005be830(param_2,param_3,param_4);
  return;
}

