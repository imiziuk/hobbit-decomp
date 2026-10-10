
undefined4 __thiscall
FUN_00508ff0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  iVar2 = FUN_006a3320(0);
  param_1[0x5a] = iVar2;
  iVar2 = FUN_006a3320(1);
  param_1[0x5b] = iVar2;
  iVar2 = FUN_006a3320(2);
  param_1[0x5c] = iVar2;
  iVar2 = FUN_006a3320(4);
  param_1[0x58] = iVar2;
  iVar2 = FUN_006a3320(3);
  param_1[0x59] = iVar2;
  iVar2 = FUN_006a3320(5);
  param_1[0x56] = iVar2;
  iVar2 = FUN_006a3320(6);
  param_1[0x57] = iVar2;
  iVar2 = FUN_006a3320(0x16);
  param_1[0x5e] = iVar2;
  piVar5 = param_1 + 0x65;
  iVar2 = 0xc;
  do {
    piVar3 = (int *)FUN_006a3320(iVar2 + -5);
    *piVar5 = (int)piVar3;
    (**(code **)(*piVar3 + 0x30))(0xd4);
    iVar4 = FUN_006a3320(iVar2);
    piVar5[1] = iVar4;
    *(undefined4 *)(iVar4 + 0xe8) = 0;
    (**(code **)(*(int *)*piVar5 + 0x30))(0x52);
    iVar4 = FUN_006a3320(iVar2 + 5);
    piVar5[2] = iVar4;
    *(undefined4 *)(iVar4 + 0xe8) = 0;
    (**(code **)(*(int *)*piVar5 + 0x30))(0x52);
    iVar4 = iVar2 + -0xb;
    piVar5 = piVar5 + 3;
    iVar2 = iVar2 + 1;
  } while (iVar4 < 5);
  param_1[0x7d7] = 6;
  param_1[0x7d8] = 0x1b;
  param_1[0x5d] = 0;
  FUN_0064a2e0(s_IDS_OPTIONS_SCREEN_0073285c);
  param_1[0x5f] = 0;
  param_1[100] = 1;
  FUN_006a2bd0(param_1[0x57]);
  (**(code **)(*param_1 + 0x88))();
  return uVar1;
}

