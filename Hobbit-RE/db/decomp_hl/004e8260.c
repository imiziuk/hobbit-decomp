
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e8260(int param_1)

{
  float10 fVar1;
  undefined1 *puVar2;
  undefined1 local_18 [4];
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5b58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_water__Render_0072eb68);
  puVar2 = local_18;
  local_4 = 0;
  FUN_0065fce0(0,puVar2);
  FUN_00672260(puVar2);
  if (((NAN(*(float *)(param_1 + 0x68)) || NAN(DAT_006e92e4)) !=
       (*(float *)(param_1 + 0x68) == DAT_006e92e4)) &&
     ((NAN(*(float *)(param_1 + 0x70)) || NAN(DAT_006e92e4)) !=
      (*(float *)(param_1 + 0x70) == DAT_006e92e4))) {
    fVar1 = (float10)FUN_004e7c80();
    if ((float10)local_14 < fVar1 - (float10)_DAT_006e9554) goto LAB_004e8307;
  }
  if (-1 < *(char *)(param_1 + 0x1d2)) {
    FUN_004e8890();
  }
  FUN_004e8330();
  (**(code **)(*(int *)(param_1 + 0x300) + 4))(param_1);
LAB_004e8307:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

