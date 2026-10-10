
int __thiscall FUN_0052d740(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_006a1790(DAT_00813038);
    if (1 < iVar1) {
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_0041bcb0();
    if (iVar1 != 0) {
      iVar1 = FUN_0041bcc0();
      if (*(int *)(iVar1 + 0x4ee8) != 0) {
        return iVar1 + 0x4ee0;
      }
      piVar2 = (int *)FUN_0041bcc0();
      iVar1 = (**(code **)(*piVar2 + 0x108))(1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_00472df0();
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (((param_2 == *(int *)(param_1 + 0x14)) && (param_2 == 1)) && (*(int *)(param_1 + 0xc28) == 0))
  {
    if (*(int *)(param_1 + 0xc2c) != param_3) {
      iVar1 = FUN_0052db90(param_3);
      return iVar1;
    }
    param_2 = 0;
  }
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xcd0) = 0;
    *(undefined4 *)(param_1 + 0xccc) = 0;
    if (DAT_00760354 != 0) {
      FUN_0041bcc0();
      FUN_004336e0();
    }
    FUN_005c8530();
    FUN_006a16c0(DAT_00813038,1);
    FUN_00659c10();
    FUN_00557800();
    FUN_006a0420(DAT_00813038,0);
    FUN_004f5080();
    FUN_004f50c0();
    FUN_004f50a0();
    FUN_0052db90(0);
    if (DAT_00760354 != 0) {
      FUN_004f32f0();
    }
    iVar1 = FUN_00671220(DAT_00762b00,0);
    return iVar1;
  }
  FUN_0052db90(param_3);
  FUN_005c8580();
  FUN_005c8580();
  FUN_005c8580();
  FUN_006a0420(DAT_00813038,1);
  FUN_00526600();
  FUN_005577e0();
  iVar1 = FUN_00671220(0,0);
  return iVar1;
}

