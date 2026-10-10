
void __thiscall FUN_0053d530(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_3c;
  float local_30 [3];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar3 = param_2 * 0x50 + *(int *)(param_1 + 0x58);
  iVar1 = FUN_0064f210(param_3,&DAT_007378a8);
  if (iVar1 != 0) {
    local_3c = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      iVar2 = (int)*(short *)(iVar3 + 0x24);
      do {
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            FUN_0053f7a0(*(undefined4 *)(iVar3 + 0x20),iVar4 % iVar2,local_3c,local_30);
            FUN_0064f4f0(iVar1,s__3d__32s_007378ac,local_3c,
                         *(int *)(param_1 + 0x50) + 6 + local_3c * 0x80);
            FUN_0064f4f0(iVar1,s____8_5f__8_5f__8_5f__8_5f_007378b8,(double)local_24,
                         (double)local_20,(double)local_1c,(double)local_18);
            FUN_0064f4f0(iVar1,s____8_2f__8_2f__8_2f_007378d8,(double)local_14,(double)local_10,
                         (double)local_c);
            FUN_0064f4f0(iVar1,s____4_2f__4_2f__4_2f_007378f4,(double)local_30[0]);
            iVar2 = (int)*(short *)(iVar3 + 0x24);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar2);
        }
        local_3c = local_3c + 1;
      } while (local_3c < *(int *)(param_1 + 0x4c));
    }
    FUN_0064f2b0();
  }
  return;
}

