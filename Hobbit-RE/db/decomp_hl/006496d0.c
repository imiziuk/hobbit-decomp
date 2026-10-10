
undefined4 * FUN_006496d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1[7] == 0) && (iVar1 = FUN_00647ed0(param_2,*param_1), iVar1 == 0)) {
    return param_1;
  }
  iVar1 = param_1[3];
  while( true ) {
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)FUN_006496d0(iVar1,param_2);
    if (puVar2 != (undefined4 *)0x0) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return puVar2;
}

