
void __thiscall
FUN_00653780(undefined4 *param_1,LPTHREAD_START_ROUTINE param_2,undefined4 param_3,SIZE_T param_4,
            int param_5,LPVOID param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  HANDLE pvVar4;
  undefined4 *puStack_4;
  
  puStack_4 = param_1;
  FUN_00653cf0();
  uVar2 = thunk_FUN_0064ff70(param_4,s_C__projects_meridian_xCore_x_fil_0074d6f0,0x148);
  param_1[0x1f] = uVar2;
  FUN_00655890(1);
  param_1[0x18] = *(undefined4 *)(DAT_007e35fc + 0x34);
  *(int *)(DAT_007e35fc + 0x34) = *(int *)(DAT_007e35fc + 0x34) + 1;
  if ((int)param_4 < 0x401) {
    iVar3 = (int)param_4 / 2;
  }
  else {
    iVar3 = param_4 - 0x400;
  }
  param_1[0x1d] = iVar3;
  puVar1 = param_1 + 2;
  param_1[0x1e] = param_1[0x1f];
  param_1[0x1c] = 0;
  FUN_00647d70(puVar1,param_3,0x40);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x19] = param_5;
  param_1[0x1a] = param_5;
  *(undefined4 *)(DAT_007e35fc + 8) = 10000;
  param_1[0x16] = 1;
  FUN_00648600(param_1[0x1f],param_1[0x18],param_4);
  pvVar4 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x80,(LPCSTR)0x0);
  param_1[0x14] = pvVar4;
  pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_4,param_2,param_6,4,(LPDWORD)&puStack_4);
  param_1[0x13] = pvVar4;
  param_1[0x12] = puStack_4;
  FUN_00653a30();
  SetThreadPriority((HANDLE)param_1[0x13],param_5);
  SetThreadAffinityMask((HANDLE)param_1[0x13],1);
  FUN_006558d0(1);
  ResumeThread((HANDLE)param_1[0x13]);
  FUN_00653700(puStack_4,puVar1);
  FUN_0064e7d0(s_xthread__xthread___initialized___0074d730,puVar1,param_1[0x13]);
  FUN_00653d20();
  return;
}

