
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401490(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = FUN_0052d730();
  if (iVar1 == 0) {
    iVar1 = FUN_00405ff0();
    if (iVar1 == 0) {
      iVar1 = FUN_00405fc0();
      if (iVar1 != 0) {
        iVar1 = FUN_0065f190(s_MineCartRideHUD_0071cecc);
        if ((iVar1 != 0) && (_DAT_0075eb9c <= DAT_006e92e4)) {
          iStack_10 = 1;
          iStack_8 = 0xc9;
          iStack_c = -1;
          iStack_4 = 199;
          uStack_11 = 0xff;
          uStack_12 = 0;
          uStack_13 = 0;
          uStack_14 = 0;
          uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_IN_CART_0071cea0);
          puVar6 = &uStack_14;
          uVar5 = 0x12;
          piVar4 = &iStack_10;
          uVar3 = FUN_0069fa60(s_large_0071ceac);
          FUN_0069fb40(uVar3,piVar4,uVar5,puVar6,uVar2);
          iStack_10 = iStack_10 + -1;
          iStack_8 = iStack_8 + -1;
          iStack_c = iStack_c + -1;
          iStack_4 = iStack_4 + -1;
          uStack_11 = 0xff;
          uStack_12 = 0xff;
          uStack_13 = 0xff;
          uStack_14 = 0xff;
          uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_IN_CART_0071cea0);
          goto LAB_004016b3;
        }
      }
    }
    else {
      iVar1 = FUN_0065f190(s_MineCartRideHUD_0071cecc);
      if ((iVar1 != 0) && (_DAT_0075eb9c <= DAT_006e92e4)) {
        iStack_10 = 1;
        iStack_8 = 0xc9;
        iStack_c = -1;
        iStack_4 = 199;
        uStack_11 = 0xff;
        uStack_12 = 0;
        uStack_13 = 0;
        uStack_14 = 0;
        uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_IN_CART_MOVEING_0071ceb8);
        puVar6 = &uStack_14;
        uVar5 = 0x12;
        piVar4 = &iStack_10;
        uVar3 = FUN_0069fa60(s_large_0071ceac);
        FUN_0069fb40(uVar3,piVar4,uVar5,puVar6,uVar2);
        iStack_10 = iStack_10 + -1;
        iStack_8 = iStack_8 + -1;
        iStack_c = iStack_c + -1;
        iStack_4 = iStack_4 + -1;
        uStack_11 = 0xff;
        uStack_12 = 0xff;
        uStack_13 = 0xff;
        uStack_14 = 0xff;
        uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_IN_CART_MOVEING_0071ceb8);
LAB_004016b3:
        puVar6 = &uStack_14;
        piVar4 = &iStack_10;
        uVar5 = 0x12;
        uVar3 = FUN_0069fa60(s_large_0071ceac);
        FUN_0069fb40(uVar3,piVar4,uVar5,puVar6,uVar2);
        FUN_0065f430();
        return;
      }
    }
  }
  return;
}

