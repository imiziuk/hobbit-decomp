
void __thiscall FUN_00472b20(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xcc)) {
    iVar2 = 0;
    do {
      if (*(short *)(*(int *)(param_1 + 0xd0) + 0x38 + iVar2) == param_2) {
        pbVar1 = (byte *)(*(int *)(param_1 + 0xd0) + iVar2 + 0x3a);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < *(int *)(param_1 + 0xcc));
  }
  return;
}

