
void FUN_0049b180(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0075cf1c;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (DAT_0075cf1c != 0) {
    FUN_005893e0(DAT_0075cf1c + 0xbc,*param_1,uVar2,1,*(undefined4 *)(DAT_0075cf1c + 8),
                 *(undefined4 *)(DAT_0075cf1c + 0xc));
    FUN_005893e0(iVar3 + 0xc0,uVar1,uVar2,1,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc))
    ;
    return;
  }
  return;
}

