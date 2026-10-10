
void FUN_006c3c35(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_006fd618;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        iVar2 = FUN_006ca43e(*(undefined4 *)(param_1 + 0x18),1);
        if ((iVar2 != 0) && (iVar2 = FUN_006ca45a(piVar1,1), iVar2 != 0)) {
          uVar3 = FUN_006c3e60(*(undefined4 *)(param_1 + 0x18),param_4 + 8,
                               *(undefined4 *)(param_4 + 0x14));
          FUN_006c0fa0(piVar1,uVar3);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        iVar2 = FUN_006ca43e(*(undefined4 *)(param_1 + 0x18),1);
        if (((iVar2 != 0) && (iVar2 = FUN_006ca45a(piVar1,1), iVar2 != 0)) &&
           (iVar2 = FUN_006ca476(*(undefined4 *)(param_4 + 0x18)), iVar2 != 0)) {
          if ((*param_4 & 4) != 0) {
            uVar3 = FUN_006c3e60(*(undefined4 *)(param_1 + 0x18),param_4 + 8,1);
            FUN_006bfed1(piVar1,*(undefined4 *)(param_4 + 0x18),uVar3);
            ExceptionList = local_14;
            return;
          }
          uVar3 = FUN_006c3e60(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
          FUN_006bfeca(piVar1,*(undefined4 *)(param_4 + 0x18),uVar3);
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      iVar2 = FUN_006ca43e(*(undefined4 *)(param_1 + 0x18),1);
      if ((iVar2 != 0) && (iVar2 = FUN_006ca45a(piVar1,1), iVar2 != 0)) {
        FUN_006c0fa0(piVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_006c3cc3;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    iVar2 = FUN_006ca43e(*(undefined4 *)(param_1 + 0x18),1);
    if ((iVar2 != 0) && (iVar2 = FUN_006ca45a(piVar1,1), iVar2 != 0)) {
      iVar2 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar2;
LAB_006c3cc3:
      iVar2 = FUN_006c3e60(iVar2,param_4 + 8);
      *piVar1 = iVar2;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_006c40ab();
  ExceptionList = local_14;
  return;
}

