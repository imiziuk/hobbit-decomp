
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0065c780(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 2;
  uVar1 = (**(code **)(*DAT_007f0310 + 0x28))(DAT_007f0310,DAT_007edafc,1,param_2,2,1,param_3);
  if (uVar1 == 0) {
    uVar1 = (**(code **)(*DAT_007f0310 + 0x30))
                      (DAT_007f0310,DAT_007edafc,1,param_2,*(undefined4 *)(iVar2 + 8),param_3);
    if (uVar1 == 0) {
      *(int *)(iVar2 + 0x24) = param_3;
      if ((param_3 == 0x4b) || (_DAT_007edb10 = 0, param_3 == 0x4f)) {
        _DAT_007edb10 = 1;
      }
      return 1;
    }
  }
  return uVar1 & 0xffffff00;
}

