
void __fastcall FUN_004d1cb0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004acb90();
  if (param_1[0x2a] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))();
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_00662510(param_1[0x2a] + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    FUN_006bf840(param_1[0x2a]);
    param_1[0x2a] = 0;
  }
  return;
}

