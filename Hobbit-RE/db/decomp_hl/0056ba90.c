
void __thiscall thunk_FUN_0056b6b0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0056c2a0(1,1);
  if (iVar1 != 0) {
    uVar3 = FUN_0041bcd0();
    *(undefined8 *)(param_1 + 0x688) = uVar3;
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 4;
    }
    FUN_00571230();
    FUN_00429100();
    pcVar2 = &DAT_0073f8c0;
    if (param_2 == 0) {
      pcVar2 = s_false_0073f8b8;
    }
    FUN_0064e7d0(s_CAMERAMGR__Camera_reset__pop__s_0073f894,pcVar2);
  }
  return;
}

