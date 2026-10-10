
undefined4 FUN_00670360(undefined4 param_1)

{
  undefined4 *puVar1;
  HMODULE pHVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  DAT_007f1610 = param_1;
  DAT_007f1848 = 0;
  DAT_007f184c = 1;
  DAT_007f1850 = 1;
  puVar1 = &DAT_007f1808;
  do {
    puVar1[-8] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[8] = 0xffffffff;
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x7f1828);
  uVar6 = 0;
  puVar1 = &DAT_007f1614;
  puVar5 = &DAT_006f96f8;
  uVar4 = 0x800;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  iVar3 = DirectInput8Create(pHVar2,uVar4,puVar5,puVar1,uVar6);
  if ((iVar3 < 0) && (iVar3 < 0)) {
    return 0;
  }
  iVar3 = (**(code **)(*DAT_007f1614 + 0x10))(DAT_007f1614,3,&LAB_006704a0,0,1);
  if ((iVar3 < 0) && (iVar3 < 0)) {
    FUN_006702d0();
    return 0;
  }
  iVar3 = (**(code **)(*DAT_007f1614 + 0x10))(DAT_007f1614,2,&LAB_006704e0,0,1);
  if ((iVar3 < 0) && (iVar3 < 0)) {
    FUN_006702d0();
    return 0;
  }
  iVar3 = (**(code **)(*DAT_007f1614 + 0x10))(DAT_007f1614,4,&LAB_00670520,0,1);
  if (-1 < iVar3) {
    if (-1 < iVar3) goto LAB_00670477;
  }
  else {
    iVar3 = (**(code **)(*DAT_007f1614 + 0x10))(DAT_007f1614,4,&LAB_00670520,0,1);
    if (-1 < iVar3) {
      DAT_007f23a0 = 1;
      return 1;
    }
    iVar3 = -iVar3;
  }
  iVar3 = -iVar3;
LAB_00670477:
  if (-1 < iVar3) {
    DAT_007f23a0 = 1;
    return 1;
  }
  FUN_006702d0();
  return 0;
}

