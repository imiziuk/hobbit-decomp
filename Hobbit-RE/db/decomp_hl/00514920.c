
void __thiscall FUN_00514920(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[99] == 0) {
    FUN_00659600(s_OptionSelect_00723150,1);
    if (param_2 == param_1[0x57]) {
      FUN_0052abf0(1);
      FUN_0052a630(9);
    }
    if (param_2 == param_1[0x5a]) {
      FUN_0052a630();
      return;
    }
    if (param_2 == param_1[0x62]) {
      FUN_0052e200(0);
      param_1[99] = 2;
    }
    else {
      if (param_2 == param_1[0x58]) {
        FUN_0052a630();
        return;
      }
      if (param_2 == param_1[0x59]) {
        FUN_0052a630();
        return;
      }
      if (param_2 == param_1[0x61]) {
        iVar4 = *param_1;
        uVar6 = 0;
        uVar5 = 1;
        uVar1 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_NO_00732278);
        uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_YES_00732280);
        uVar3 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_QUIT_CONFIRMATION_00733d78);
        (**(code **)(iVar4 + 0x8c))(&DAT_0075b6e0,uVar3,uVar2,uVar1,uVar5,uVar6);
        param_1[99] = 1;
        return;
      }
      if (param_2 == param_1[0x5b]) {
        FUN_0052a630();
        return;
      }
      if (param_2 == param_1[0x5c]) {
        iVar4 = FUN_006772e0();
        if (iVar4 == 0) {
          FUN_0052a630(0x17);
          FUN_0052abf0();
          return;
        }
      }
    }
  }
  return;
}

