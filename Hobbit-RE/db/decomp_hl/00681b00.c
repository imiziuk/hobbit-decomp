
bool FUN_00681b00(short *param_1)

{
  ushort uVar1;
  short sVar2;
  int extraout_EDX;
  
  if ((*param_1 == 0x69) && (param_1[8] == 2)) {
    uVar1 = param_1[1];
    if ((uVar1 != 0) && ((uVar1 < 3 && (param_1[7] == 4)))) {
      sVar2 = FUN_006819e0(uVar1,param_1[9]);
      return sVar2 == *(short *)(extraout_EDX + 0xc);
    }
  }
  return false;
}

