
void __thiscall FUN_0050dd80(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  FUN_005092b0(param_2);
  if (param_2 == param_1[0x57]) {
    if (param_1[0x5f] != 0) {
      (**(code **)(*param_1 + 0x94))();
    }
    FUN_00659600(s_OptionSelect_00723150,1);
    FUN_006a16c0(DAT_00813038,1);
    return;
  }
  if (((param_2 != param_1[0x58]) && (param_2 != param_1[0x59])) && (param_2 != param_1[0x56])) {
    iVar1 = 0;
    piVar2 = param_1 + 0x66;
    while (param_2 != *piVar2) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
      if (4 < iVar1) {
        return;
      }
    }
    fVar3 = (float10)FUN_00671130(0x5d,0);
    if ((NAN(fVar3) || NAN((float10)DAT_006e92e4)) != (fVar3 == (float10)DAT_006e92e4)) {
      param_1[100] = 1;
      return;
    }
    param_1[100] = 0;
  }
  return;
}

