
undefined4 __thiscall FUN_00558a10(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_material2__Evaluate_0073e0a8);
  DAT_00771c54 = DAT_00771c54 + 1;
  local_4 = 0;
  if ((NAN(param_2) || NAN(*(float *)(param_1 + 0x9cc))) != (param_2 == *(float *)(param_1 + 0x9cc))
     ) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
  if ((*(byte *)(param_1 + 0x118) & 0x40) == 0) {
    FUN_00558850(param_1 + 0x11c,param_2);
    FUN_00558850(param_1 + 0x138,param_2);
    iVar2 = param_1 + 0x154;
    iVar1 = 8;
    do {
      FUN_00558850(iVar2,param_2);
      iVar2 = iVar2 + 0x1c;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0;
    iVar2 = param_1 + 0x238;
    do {
      if (*(char *)(DAT_00771ec0 + *(int *)(param_1 + 0x104) * 0x24 + 0x14 + iVar1) != '\0') {
        FUN_00558980(iVar2,param_2);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x78;
    } while (iVar1 < 0x10);
    *(float *)(param_1 + 0x9cc) = param_2;
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else {
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  ExceptionList = local_c;
  return 1;
}

