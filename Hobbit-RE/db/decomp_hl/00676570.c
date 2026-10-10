
int __thiscall
FUN_00676570(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 local_104 [260];
  
  iVar2 = 0;
  FUN_00655890(1);
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  FUN_00675e20(local_104,param_2);
  if ((*(int *)(param_1 + 0x13f8) == -1) ||
     (iVar2 = FUN_006764c0(local_104,param_3,param_4,param_5,*(int *)(param_1 + 0x13f8),
                           *(undefined4 *)(param_1 + 0x13fc)), iVar2 == 0)) {
    iVar1 = *(int *)(param_1 + 8);
    while ((iVar1 = iVar1 + -1, -1 < iVar1 && (iVar2 == 0))) {
      if ((iVar1 != *(int *)(param_1 + 0x13f8)) &&
         (iVar2 = FUN_006764c0(local_104,param_3,param_4,param_5,iVar1,0), iVar2 != 0)) {
        *(int *)(param_1 + 0x13f8) = iVar1;
      }
    }
  }
  FUN_006558d0(1);
  return iVar2;
}

