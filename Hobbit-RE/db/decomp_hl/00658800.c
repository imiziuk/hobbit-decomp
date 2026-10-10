
undefined4 FUN_00658800(undefined4 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2 & 0x1fff;
  switch(*param_2 >> 0xe) {
  case 0:
    uVar2 = FUN_006584d0(uVar1,param_1,param_2,param_3,param_4);
    return uVar2;
  case 1:
    uVar2 = FUN_00658660(uVar1,param_1,param_2,param_3,param_4);
    return uVar2;
  case 2:
    uVar2 = FUN_00658670(uVar1,param_1,param_2,param_3,param_4);
    return uVar2;
  case 3:
    uVar2 = FUN_00658d20();
    return uVar2;
  default:
    return 0;
  }
}

