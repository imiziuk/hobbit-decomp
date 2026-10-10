
void __fastcall FUN_004dd1b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x138)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x13c) + iVar2 * 4);
      if (iVar1 != -1) {
        FUN_00434cf0(iVar1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x13c) + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x138));
  }
  FUN_004aaaf0(s_OnEject_0072e42c,&DAT_0071fa28,param_1);
  return;
}

