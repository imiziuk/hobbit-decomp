
void FUN_004db9b0(undefined4 param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_0054c5c0(0x30,s_C__projects_meridian_Support_Obj_0072e004,0x52);
  sVar1 = FUN_0054c7c0();
  if (-1 < sVar1) {
    if (sVar1 == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(DAT_0076f648 + sVar1 * 0x14);
    }
    *(undefined4 *)(iVar3 + 0xc4) = param_1;
  }
  FUN_0054c880(uVar2);
  return;
}

