
undefined8 FUN_00488f10(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EBP;
  undefined8 uVar3;
  char unaff_retaddr;
  
  uVar3 = FUN_0054bad0(0x2d,0,0);
  piVar1 = (int *)FUN_004021c0(uVar3);
  (**(code **)(*piVar1 + 0xf4))(param_2,param_3);
  (**(code **)(*piVar1 + 0xf8))(param_2);
  FUN_00488c30(unaff_EBP);
  (**(code **)(*piVar1 + 0x1c))(param_2);
  (**(code **)(*piVar1 + 0xfc))(*param_2,param_2[1],param_2[2]);
  *(byte *)(piVar1 + 0x55) =
       (unaff_retaddr << 4 ^ *(byte *)(piVar1 + 0x55)) & 0x10 ^ *(byte *)(piVar1 + 0x55);
  iVar2 = FUN_00647cf0(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 0x110))();
  }
  return uVar3;
}

