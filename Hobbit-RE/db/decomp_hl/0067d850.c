
void FUN_0067d850(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00808f2c + 1;
  (&DAT_00808efb)[iVar1 * 4] = (char)((uint)param_1 >> 0x18);
  (&DAT_00808efa)[iVar1 * 4] = (char)((uint)param_1 >> 0x10);
  DAT_00808f2c = iVar1;
  (&DAT_00808ef9)[iVar1 * 4] = (char)((uint)param_1 >> 8);
  (&DAT_00808ef8)[iVar1 * 4] = (char)param_1;
  return;
}

