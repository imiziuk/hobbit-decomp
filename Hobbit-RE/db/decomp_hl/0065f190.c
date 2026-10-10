
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0065f190(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  LPCSTR lpOutputString;
  int iVar4;
  char *pcVar5;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e68b5;
  local_c = ExceptionList;
  if (DAT_007eff74 == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  if (DAT_007edaf4 != 0) {
    pcVar5 = DAT_007f1414;
    if (DAT_007f1414 == (char *)0x0) {
      pcVar5 = s_Unspecified_0074ef88;
    }
    pcVar3 = param_1;
    if (param_1 == (char *)0x0) {
      pcVar3 = s_Unspecified_0074ef94;
    }
    ExceptionList = &local_c;
    FUN_00649920(&param_1,s_Nested_begin_scene__current__s__l_0074efa0,pcVar3,pcVar5);
    local_4 = 0;
    lpOutputString = (LPCSTR)FUN_00649940();
    OutputDebugStringA(lpOutputString);
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  DAT_007f1414 = pcVar1;
  if (DAT_007edaf8 == 0) {
    if (DAT_007f00ed != '\0') {
      cVar2 = FUN_00660f70();
      if (cVar2 == '\0') {
        ExceptionList = local_c;
        return 0;
      }
    }
    iVar4 = (**(code **)(*DAT_007f1000 + 0xc))(DAT_007f1000);
    if (iVar4 < 0) {
      if (iVar4 == -0x7789f798) {
        FUN_00660da0();
        ExceptionList = pvStack_10;
        return 0;
      }
      if (iVar4 != -0x7789f797) {
        FUN_0064e7d0(s_Unexpected_result_from_TestCoope_0074efe4,iVar4);
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar4 = (**(code **)(*DAT_007f1000 + 0x38))(DAT_007f1000,&DAT_007f0448);
      if (iVar4 < 0) {
        FUN_0064e7d0(s_Failed_to_reset_device_0074efcc);
        Sleep(0);
        ExceptionList = pvStack_10;
        return 0;
      }
      FUN_00660e80();
    }
    if ((DAT_007f0448 == 0) || (DAT_007f044c == 0)) {
      FUN_0064e7d0(s_Invalid_viewport_size_0074f018);
    }
    else {
      (**(code **)(*DAT_007f1000 + 0xa0))(DAT_007f1000,&stack0xffffffd8);
    }
    (**(code **)(*DAT_007f1000 + 0x90))(DAT_007f1000,0,0,7,DAT_007edaf0,0x3f800000,0);
    iVar4 = (**(code **)(*DAT_007f1000 + 0x88))(DAT_007f1000);
    if (iVar4 < 0) {
      FUN_0064e7d0(s_BeginScene_failed_0074f030);
      ExceptionList = local_c;
      return 0;
    }
    DAT_007f0068 = 0;
    _DAT_007f006c = 0;
    DAT_007f0070 = 0;
    DAT_007f0074 = 0;
    DAT_007f007c = 0;
    DAT_007f0078 = 0;
    DAT_007f0080 = 0;
    DAT_007edaf8 = 1;
  }
  DAT_007edaf4 = 1;
  FUN_0066dac0();
  _DAT_007f02fc = 0x20;
  _DAT_007f0304 = 0x20;
  _DAT_007f02f8 = 0x20;
  _DAT_007f0300 = 0x20;
  ExceptionList = local_c;
  return 1;
}

