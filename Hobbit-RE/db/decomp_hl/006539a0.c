
void __thiscall FUN_006539a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00653a20();
  *(undefined4 *)(param_1 + 0x80) = param_3;
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x50),0xffffffff);
  FUN_00653a20();
  return;
}

