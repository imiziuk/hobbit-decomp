
uint FUN_00554860(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int local_4;
  
  local_4 = -1;
  uVar1 = FUN_00554910(param_1,param_2,2,1,3,0x1a,&local_4);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_00554910(param_1,param_3,5,4,6,0x1b,&local_4);
    if ((char)uVar1 != '\0') {
      if (local_4 == -1) {
        iVar2 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x1c,1);
        return (uint)(iVar2 == 0);
      }
      iVar2 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x1c,local_4);
      return (uint)(iVar2 == 0);
    }
  }
  return uVar1 & 0xffffff00;
}

