
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00539430(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x100) = 0x3f000000;
  uVar1 = FUN_005310a0();
  if ((*(int *)(param_1 + 0x128) != 0) && (*(int *)(param_1 + 0x120) != 0)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x128) = 1;
  FUN_00533930();
  FUN_005355f0(*(undefined4 *)(param_1 + 0x2b8));
  if ((*(int *)(param_1 + 0x2b0) == 2) || (_DAT_006e9360 < *(float *)(param_1 + 0x2b8))) {
    iVar2 = FUN_00533f10();
    if ((iVar2 != 0) || (iVar2 = FUN_00647ed0(uVar1,*(undefined4 *)(param_1 + 0x224)), iVar2 == 0))
    goto LAB_005394df;
    uVar1 = *(undefined4 *)(param_1 + 0x2b8);
    uVar4 = 1;
    uVar3 = 0;
  }
  else {
    uVar4 = 2;
    uVar1 = 0x3c23d70a;
    uVar3 = 0x3f800000;
  }
  FUN_005355c0(uVar3,uVar1,uVar4);
LAB_005394df:
  switch(*(undefined4 *)(param_1 + 0x2ac)) {
  case 0:
    FUN_00535740(param_1 + 0x224,*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b0),
                 *(undefined4 *)(param_1 + 700));
    break;
  case 1:
    FUN_00535610(param_1 + 0x1f8,0,0);
    break;
  case 2:
    FUN_00535930(*(undefined4 *)(param_1 + 0x2b0));
    break;
  case 3:
    FUN_00535990(*(undefined4 *)(param_1 + 0x2b0));
    break;
  case 4:
    FUN_005358e0(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2b0));
    break;
  case 5:
    uVar1 = FUN_00534270(*(undefined4 *)(param_1 + 0x27c));
    FUN_005342b0(uVar1);
  }
  if ((*(int *)(param_1 + 0x2c0) != 0) && (*(int *)(param_1 + 0x2b4) != 0)) {
    FUN_00534f10(*(int *)(param_1 + 0x2c0));
    return;
  }
  if (*(int *)(param_1 + 0x2b4) != 0) {
    FUN_00534f10(0);
  }
  return;
}

