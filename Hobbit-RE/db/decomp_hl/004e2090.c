
void __thiscall FUN_004e2090(int param_1,float param_2)

{
  int iVar1;
  
  if ((0 < *(int *)(param_1 + 0xdc)) &&
     (iVar1 = FUN_00647ed0(*(undefined4 *)(param_1 + 0xb8),&DAT_0072e8a4), iVar1 != 0)) {
    if (param_2 <= DAT_006e92e4) {
      return;
    }
    FUN_004e20e0();
    return;
  }
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 8;
  return;
}

