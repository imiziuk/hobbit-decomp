
int __fastcall FUN_00591c00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00593dd0(0x40,1,0xfffffffe);
  uVar2 = ((uint)(iVar1 != 0) << 2 ^ *(uint *)(param_1 + 0x4c)) & 4 ^ *(uint *)(param_1 + 0x4c);
  *(uint *)(param_1 + 0x4c) = uVar2;
  return (int)(uVar2 << 0x1d) >> 0x1f;
}

