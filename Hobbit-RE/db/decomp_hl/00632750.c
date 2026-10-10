
void __fastcall FUN_00632750(int param_1)

{
  int iVar1;
  
  if (DAT_006e92e4 < *(float *)(param_1 + 0x4c)) {
    iVar1 = FUN_005af120();
    if (*(int *)(iVar1 + 0x204) != 0) {
      iVar1 = 1;
      goto LAB_0063277e;
    }
  }
  iVar1 = 0;
LAB_0063277e:
  *(ushort *)(param_1 + 0x40) =
       (byte)((byte)(iVar1 << 2) ^ (byte)*(ushort *)(param_1 + 0x40)) & 4 ^
       *(ushort *)(param_1 + 0x40);
  return;
}

