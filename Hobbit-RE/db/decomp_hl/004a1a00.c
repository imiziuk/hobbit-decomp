
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a1a00(int *param_1)

{
  int local_28;
  float local_24;
  int local_20;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d39b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_NPCObject__AdvanceMove_0072aea0);
  local_4 = 0;
  FUN_004a11b0();
  local_28 = param_1[0x11b];
  local_24 = (float)param_1[0x11c];
  local_20 = param_1[0x11d];
  if (-1 < (char)param_1[0x9a]) {
    (**(code **)(*param_1 + 0x140))(param_1 + 0x11b,0,&local_28,local_1c);
    local_24 = local_24 + _DAT_006e92f4;
  }
  (**(code **)(*param_1 + 0x14))(&local_28,0);
  param_1[0x9a] = param_1[0x9a] & 0xffefffff;
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_14;
  return;
}

