
void __thiscall FUN_00411960(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x120 + param_2 * 8),
                       *(undefined4 *)(param_1 + 0x124 + param_2 * 8));
  if (iVar1 != 0) {
    FUN_004c6f40(s_impact_0071eebc);
    FUN_004c77d0(0);
    *(ushort *)(iVar1 + 0x15a) = *(ushort *)(iVar1 + 0x15a) & 0xbfff ^ 0x4000;
  }
  return;
}

