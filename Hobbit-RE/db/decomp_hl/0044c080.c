
void __fastcall FUN_0044c080(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x3a50),*(undefined4 *)(param_1 + 0x3a54));
  if (iVar1 != 0) {
    FUN_004c8770(0xffffffff);
  }
  *(undefined4 *)(param_1 + 0x3a50) = 0;
  *(undefined4 *)(param_1 + 0x3a54) = 0;
  *(undefined4 *)(param_1 + 0x4660) = 0;
  *(undefined4 *)(param_1 + 0x4658) = 0;
  *(undefined4 *)(param_1 + 0x465c) = 0;
  *(undefined4 *)(param_1 + 0x4668) = 0;
  FUN_00659600(s_JumpFromVine_007246f0,1);
  return;
}

