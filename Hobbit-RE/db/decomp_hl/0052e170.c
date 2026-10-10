
void __thiscall FUN_0052e170(int param_1,int param_2,int param_3)

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
      if ((param_2 < iVar1) && (param_3 == 0)) {
        uVar6 = 0;
        uVar5 = 1;
        uVar4 = 0;
        uVar3 = 0;
        uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_FILE_OVERWRITE_00736e00);
        FUN_0052f420(0,uVar2,uVar3,uVar4,uVar5,uVar6);
        *(int *)(param_1 + 0x18) = param_2;
        FUN_0052e160(1);
        return;
      }
      iVar1 = FUN_0052e2b0(param_2);
      if (iVar1 != 0) {
        FUN_0052e160(4);
        return;
      }
    }
    FUN_0052e160(0);
  }
  return;
}

