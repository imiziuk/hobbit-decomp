
void __thiscall FUN_0047f660(int param_1,float param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  if ((uVar1 & 2) != 0) {
    param_2 = param_2 + *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x14) = param_2;
    if ((uVar1 & 4) == 0) {
      if (*(float *)(param_1 + 8) < param_2) {
        *(ushort *)(param_1 + 0x10) = uVar1 | 4;
      }
      if ((*(byte *)(param_1 + 0x10) & 4) != 0) {
        FUN_0064e870(6,s_CINEMA__Finished_animated_instan_00728768);
        return;
      }
    }
  }
  return;
}

