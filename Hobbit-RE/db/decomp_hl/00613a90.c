
void __thiscall FUN_00613a90(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x18) != 0 || *(int *)(param_1 + 0x1c) != 0) {
    iVar1 = FUN_004021c0(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      FUN_004aaa60();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  pcVar2 = s_333_FireSplash_007493c0 + 4;
  if (param_2 == 0) {
    pcVar2 = s_FireBreath_0073fd30;
  }
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  uVar3 = FUN_00488d30(pcVar2,&local_c,&local_18,&local_24);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  return;
}

