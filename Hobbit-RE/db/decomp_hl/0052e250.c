
void __thiscall FUN_0052e250(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (-1 < param_2) {
      iVar1 = FUN_0052e130();
      uVar6 = 0;
      if (param_2 < iVar1) {
        uVar5 = 1;
        uVar4 = 0;
        uVar3 = 0;
        uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_FILE_DELETE_00736e14);
        FUN_0052f420(0,uVar2,uVar3,uVar4,uVar5,uVar6);
        *(int *)(param_1 + 0x18) = param_2;
        uVar6 = 2;
      }
      FUN_0052e160(uVar6);
      return;
    }
    FUN_0052e160(0);
  }
  return;
}

