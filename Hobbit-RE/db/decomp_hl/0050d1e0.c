
void __fastcall FUN_0050d1e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = FUN_006a3270(0x400);
  if (iVar1 == 0) {
    iVar1 = FUN_006a3270(0x400);
    if (iVar1 == 0) {
      iVar1 = FUN_006a3270(0x400);
      if (iVar1 == 0) {
        iVar1 = FUN_006a3270(0x400);
        if (iVar1 == 0) {
          iVar1 = FUN_006a3270(0x400);
          if (iVar1 == 0) {
            iVar1 = FUN_006a3270(0x400);
            if (iVar1 != 0) {
              iVar2 = 5;
            }
          }
          else {
            iVar2 = 4;
          }
        }
        else {
          iVar2 = 3;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 != *(int *)(param_1 + 0x170)) {
    FUN_00659600(s_CursorMove_00731fe0,1);
    *(int *)(param_1 + 0x170) = iVar2;
  }
  return;
}

