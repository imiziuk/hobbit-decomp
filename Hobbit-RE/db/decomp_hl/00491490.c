
void __fastcall FUN_00491490(int *param_1)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_1[0x58] == 0 && param_1[0x59] == 0) {
    local_c = (float)param_1[0x5e] + (float)param_1[0x61];
    local_8 = (float)param_1[0x5f] + (float)param_1[0x62];
    local_4 = (float)param_1[0x60] + (float)param_1[99];
    (**(code **)(*param_1 + 0x110))(&local_c);
    return;
  }
  iVar1 = FUN_004911b0();
  if (iVar1 == 0) {
    FUN_00491450(2);
    param_1[0x73] = 1;
  }
  return;
}

