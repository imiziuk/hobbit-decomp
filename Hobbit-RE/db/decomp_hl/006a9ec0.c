
void __fastcall FUN_006a9ec0(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_00660cc0(*(int *)(param_1 + 0x5c));
  }
  if (*(HGDIOBJ *)(param_1 + 0x50) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x50));
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}

