
void __thiscall FUN_00418110(int *param_1,float param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    param_1[3] = (int)(param_2 + (float)param_1[3]);
    if (param_1[2] == 0) {
      iVar1 = FUN_00417b80();
      if (iVar1 != 0) {
        FUN_00417bd0(0);
        param_1[2] = 1;
        param_1[3] = 0;
        FUN_00418ea0(1);
      }
    }
    if (param_1[2] == 1) {
      iVar1 = FUN_00417ba0();
      if (iVar1 != 0) {
        FUN_00417c10(1);
        param_1[2] = 2;
        param_1[3] = 0;
      }
    }
    if (param_1[2] == 2) {
      iVar1 = FUN_00417c30();
      if (iVar1 != 0) {
        FUN_00417c90(1,0);
        FUN_00417e10(0xffffffff);
        param_1[2] = 3;
        param_1[3] = 0;
        param_1[0x53] = 0;
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        param_1[0x56] = 0;
        param_1[0x57] = 0;
        param_1[0x58] = 0;
        param_1[0x59] = 0;
        param_1[0x5a] = 0;
        param_1[0x5b] = 0;
        param_1[0x5c] = 0;
        param_1[0x5e] = 0;
        FUN_0064cc30();
        FUN_0064cc00();
      }
    }
    if (param_1[2] == 3) {
      FUN_004184a0(param_2);
      iVar1 = FUN_005becf0();
      if (iVar1 != 0) {
        FUN_00417e50(0xffffffff);
        FUN_00417c10(0);
        FUN_0056b6b0(1);
        param_1[2] = 4;
        param_1[3] = 0;
      }
    }
    if (param_1[2] == 4) {
      iVar1 = FUN_00417c60();
      if (iVar1 != 0) {
        FUN_00418ea0(0);
        FUN_00417bb0();
        param_1[2] = 5;
        param_1[3] = 0;
      }
    }
    if (param_1[2] == 5) {
      iVar1 = FUN_00417ba0();
      if (iVar1 != 0) {
        FUN_00417bd0(1);
        param_1[2] = 0;
        param_1[3] = 0;
      }
    }
  }
  return;
}

