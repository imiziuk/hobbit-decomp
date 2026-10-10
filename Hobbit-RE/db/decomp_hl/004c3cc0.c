
bool __thiscall FUN_004c3cc0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return *(short *)(param_1 + 0xc0) != 0;
  }
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0xc0) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0xac) + iVar1) != '\0') {
        return true;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0xc0));
  }
  return false;
}

