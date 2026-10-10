
void FUN_005005d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  
  FUN_006628c0();
  iVar1 = FUN_0065f190();
  if (iVar1 != 0) {
    FUN_0065f910();
    FUN_0065f960(&DAT_00762018,0);
    FUN_0065fc10(0);
    FUN_0065f940();
    FUN_0064f0d0(5,1,s_System_Menu_00731368);
    FUN_0064f0d0(5,2,s_Press___again_to_return_to_game_00731348);
    if (DAT_007600ec != 0) {
      uVar2 = FUN_00502d60();
      uVar2 = FUN_00502d60(1,&DAT_0071d38c,uVar2);
      iVar1 = FUN_00647cf0(uVar2);
      FUN_0064f0d0(0x3c - iVar1);
    }
    iVar3 = __ftol();
    iVar1 = iVar3 + -9;
    if (iVar1 <= iVar3 + 9) {
      iVar4 = 5;
      piVar5 = (int *)(&DAT_00760830 + iVar1 * 0x30);
      do {
        if ((0x76082f < (int)piVar5) && (iVar1 < DAT_00762008)) {
          FUN_0064f0d0(5,iVar4,piVar5 + -10);
          if (*piVar5 != 0) {
            FUN_0064f0d0(0x28,iVar4,&PTR_LAB_00731344);
          }
        }
        iVar1 = iVar1 + 1;
        piVar5 = piVar5 + 0xc;
        iVar4 = iVar4 + 1;
      } while (iVar1 <= iVar3 + 9);
    }
    FUN_0064f0d0(2,0xe,&DAT_00730614);
    FUN_0064f0d0(5,3,s_ScreenShotSize____ld_0073132c,DAT_0076019c);
    fVar6 = (float10)FUN_00500500();
    FUN_0064f0d0(0x28,3,s_Speed____2_1f_0073131c,(double)fVar6);
    FUN_0065f430();
    FUN_0065f480();
    return;
  }
  return;
}

