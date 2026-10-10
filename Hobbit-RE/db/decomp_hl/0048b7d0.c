
undefined4 FUN_0048b7d0(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00647cf0(param_3);
  iVar2 = FUN_00647e80(param_1,param_3,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_1);
    if (iVar1 == iVar2) {
      if (*param_2 == 0xb) {
        *param_4 = param_2[0x8c];
        param_4[1] = param_2[0x8d];
        param_4[2] = param_2[0x8e];
        return 1;
      }
    }
    else {
      iVar1 = iVar1 + param_1;
      iVar2 = FUN_00647e40(iVar1,s__Pitch_007207e8);
      if ((iVar2 == 0) && ((*param_2 == 2 || (*param_2 == 10)))) {
        *param_4 = param_2[0x94];
        return 1;
      }
      iVar2 = FUN_00647e40(iVar1,&DAT_007207e0);
      if ((iVar2 == 0) && ((*param_2 == 2 || (*param_2 == 10)))) {
        param_4[1] = param_2[0x94];
        return 1;
      }
      iVar1 = FUN_00647e40(iVar1,s__Roll_007207d8);
      if ((iVar1 == 0) && ((*param_2 == 2 || (*param_2 == 10)))) {
        param_4[2] = param_2[0x94];
        return 1;
      }
    }
  }
  return 0;
}

