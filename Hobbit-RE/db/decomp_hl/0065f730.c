
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065f730(void)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  
  uVar2 = (DAT_007f00ac == 0xffffffff) - 1 & DAT_007f00ac;
  FUN_0064cbe0();
  FUN_0064cc30();
  FUN_0064cc50();
  fVar3 = (float10)FUN_0064cd30();
  _DAT_007f0060 = (float)fVar3;
  FUN_0064cbe0();
  FUN_0064cc00();
  GetClientRect((HWND)(&DAT_007f0088)[uVar2],(LPRECT)&DAT_007eff78);
  if (DAT_007edaf8 == 0) {
    iVar1 = FUN_0065f190();
    if (iVar1 != 0) {
      FUN_0065f430();
    }
    if (DAT_007edaf8 == 0) {
      return;
    }
  }
  FUN_0064cc30();
  _DAT_007f0314 = 0;
  FUN_0064cc00();
  FUN_0067d640();
  FUN_0064cc50();
  FUN_0067d1e0();
  fVar3 = (float10)FUN_0065c190();
  FUN_0064f0d0(0,0,s_FPS___4_2f_0074f09c,(double)fVar3);
  (**(code **)(*DAT_007f1000 + 0x8c))();
  DAT_007edaf8 = 0;
  if (DAT_007f0464 == 0) {
    puVar4 = (undefined1 *)0x0;
    uVar5 = DAT_007edadc;
  }
  else {
    puVar4 = &stack0xffffffbc;
    uVar5 = 0;
  }
  (**(code **)(*DAT_007f1000 + 0x3c))(DAT_007f1000,puVar4,0,uVar5,0);
  FUN_00671320();
  FUN_0065f670();
  FUN_0064cc50();
  fVar3 = (float10)FUN_0064cd30();
  _DAT_007f0064 = (float)fVar3;
  FUN_0064cc30();
  FUN_0064cc00();
  return;
}

