
undefined4 FUN_004d0700(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00647cf0(param_3);
  iVar2 = FUN_00647e80(param_1,param_3,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_1);
    if (iVar1 == iVar2) {
      *param_2 = 8;
      param_2[0x89] = *param_4;
      param_2[0x8a] = param_4[1];
      param_2[0x8b] = param_4[2];
      return 1;
    }
    iVar1 = iVar1 + param_1;
    iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
    if (iVar2 == 0) {
      *param_2 = 2;
      param_2[0x94] = *param_4;
      return 1;
    }
    iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
    if (iVar2 == 0) {
      *param_2 = 2;
      param_2[0x94] = param_4[1];
      return 1;
    }
    iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
    if (iVar1 == 0) {
      *param_2 = 2;
      param_2[0x94] = param_4[2];
      return 1;
    }
  }
  return 0;
}

