
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067c2d0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6eeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x84);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_00653780(&LAB_0067c200,s_audio_dispatcher_00752ed0,0x2000,2,0);
  }
  local_4 = 0xffffffff;
  _DAT_00808ea8 = pvVar1;
  FUN_00655630(0,0);
  _DAT_00808db0 = &DAT_00808db0;
  DAT_00808db4 = &DAT_00808db0;
  _DAT_00808dc8 = 3;
  _DAT_00808ea0 = 1;
  ExceptionList = local_c;
  return;
}

