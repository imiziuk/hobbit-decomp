
void FUN_00693db6(int param_1,int param_2,int param_3)

{
  if ((((*(uint *)(param_1 + 0x58) & 1) == 0) || ((*(uint *)(param_1 + 0x58) & 4) == 0)) &&
     (FUN_0068e2ef(param_1,"No image in file"), param_2 == 0)) {
    return;
  }
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x18;
  if (param_3 != 0) {
    FUN_0068e312(param_1,"Incorrect IEND chunk length");
  }
  FUN_00693a0a(param_1,param_3);
  return;
}

