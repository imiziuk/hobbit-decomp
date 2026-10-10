
void __thiscall FUN_0047c690(int param_1,float param_2)

{
  int iVar1;
  
  if (((*(ushort *)(param_1 + 0x10) & 2) != 0) &&
     (*(float *)(param_1 + 0x14) = param_2 + *(float *)(param_1 + 0x14),
     (*(ushort *)(param_1 + 0x10) & 4) == 0)) {
    iVar1 = FUN_00659e10(*(undefined4 *)(param_1 + 0x48));
    if (iVar1 == 0) {
      iVar1 = FUN_00659e70(*(undefined4 *)(param_1 + 0x48));
      if (iVar1 == 0) {
        iVar1 = FUN_00659ed0(*(undefined4 *)(param_1 + 0x48));
        if (iVar1 == 0) {
          *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
          FUN_0064e870(6,s_CINEMA__Finished_sound__s_00728354,*(undefined4 *)(param_1 + 0x1c));
        }
      }
    }
  }
  return;
}

