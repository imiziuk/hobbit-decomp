
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0067b620(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_00806adc;
  if (DAT_00806adc != 0) {
    FUN_006538e0();
    FUN_006bf840(iVar2);
  }
  _DAT_00808dac = 0;
  uVar3 = *(uint *)(param_1 + 0xc);
  if (uVar3 < *(uint *)(param_1 + 0x10)) {
    do {
      piVar1 = *(int **)(uVar3 + 0x78);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        DAT_00808da8 = DAT_00808da8 + -1;
      }
      *(undefined4 *)(uVar3 + 0x78) = 0;
      *(undefined4 *)(uVar3 + 0x80) = 0;
      uVar3 = uVar3 + 0x88;
    } while (uVar3 < *(uint *)(param_1 + 0x10));
  }
  (**(code **)(*DAT_00806a64 + 8))(DAT_00806a64);
  (**(code **)(*DAT_00806ba0 + 8))(DAT_00806ba0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00806ae0);
  return;
}

