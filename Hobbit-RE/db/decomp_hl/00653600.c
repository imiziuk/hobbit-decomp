
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00653600(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  
  FUN_00653cf0();
  _DAT_007e3668 = param_1;
  param_1[0x1f] = param_2;
  param_1[0x18] = *(undefined4 *)(DAT_007e35fc + 0x34);
  *(int *)(DAT_007e35fc + 0x34) = *(int *)(DAT_007e35fc + 0x34) + 1;
  param_1[0x1c] = 0;
  param_1[0x1e] = param_1[0x1f];
  if (param_3 < 0x401) {
    iVar1 = param_3 / 2;
  }
  else {
    iVar1 = param_3 + -0x400;
  }
  param_1[0x1d] = iVar1;
  FUN_00647d10(param_1 + 2,s_AppMain_0074d6e4);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(DAT_007e35fc + 8) = 10000;
  param_1[0x16] = 1;
  FUN_00648600(param_1[0x1f],param_1[0x18],param_3);
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x80,(LPCSTR)0x0);
  param_1[0x14] = pvVar2;
  DVar3 = GetCurrentThreadId();
  param_1[0x12] = DVar3;
  pvVar2 = GetCurrentThread();
  param_1[0x13] = pvVar2;
  FUN_00653a30();
  SetThreadPriority((HANDLE)param_1[0x13],0);
  FUN_00653700(param_1[0x12],param_1 + 2);
  SetThreadAffinityMask((HANDLE)param_1[0x13],1);
  FUN_00653d20();
  return;
}

