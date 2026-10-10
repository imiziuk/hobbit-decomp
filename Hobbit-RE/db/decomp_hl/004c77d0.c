
void __thiscall FUN_004c77d0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x140) != 0) {
    *(int *)(*(int *)(param_1 + 0x140) + 0x90) = param_2;
    iVar1 = *(int *)(param_1 + 0x140);
    *(int *)(iVar1 + 0x60) = param_2;
    *(uint *)(iVar1 + 100) = (uint)(param_2 == 0);
    *(ushort *)(param_1 + 0x15a) =
         ((ushort)(param_2 << 9) ^ *(ushort *)(param_1 + 0x15a)) & 0x200 ^
         *(ushort *)(param_1 + 0x15a);
  }
  return;
}

