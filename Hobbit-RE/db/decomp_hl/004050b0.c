
void __fastcall FUN_004050b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar2 = 4;
  do {
    FUN_004062d0(0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  switch(*(undefined4 *)(*(int *)(param_1 + 8) + 8)) {
  case 0:
    if (*(int *)(param_1 + 0x230) != 0) {
      FUN_00406dc0();
      uVar1 = FUN_0053cc70(s_mine_cart_6b_0071d28c);
      FUN_0053b700(uVar1,1);
      FUN_00406360(1);
      return;
    }
    FUN_00406dc0();
    uVar1 = FUN_0053cc70(s_mine_cart_2b_0071d27c);
    FUN_0053b700(uVar1,1);
    FUN_00406360(2);
    return;
  default:
    return;
  case 2:
  case 6:
    FUN_00406dc0();
    uVar1 = FUN_0053cc70(s_mine_cart_5b_0071d25c);
    FUN_0053b700(uVar1,0);
    FUN_00406360(2);
    return;
  case 3:
  case 0xd:
    FUN_00406dc0();
    uVar1 = FUN_0053cc70(s_mine_cart_1f_0071d12c);
    uVar4 = 0;
    break;
  case 4:
    if (*(int *)(param_1 + 0x240) == 0) {
      FUN_00406dc0();
      pcVar3 = s_mine_cart_32b_0071d26c;
    }
    else {
      FUN_00406dc0();
      pcVar3 = s_mine_cart_8b_0071d13c;
    }
    uVar1 = FUN_0053cc70(pcVar3);
    FUN_0053b700(uVar1,0);
    FUN_00406360(2);
    FUN_00406360(3);
    return;
  case 5:
    FUN_00406dc0();
    pcVar3 = s_mine_cart_4f_0071d29c;
    goto LAB_0040530e;
  case 7:
    FUN_00406dc0();
    uVar1 = FUN_0053cc70(s_mine_cart_31f_0071d23c);
    FUN_0053b700(uVar1,0);
    FUN_00406360(4);
    return;
  case 8:
    FUN_00406dc0();
    uVar1 = FUN_0053cc70(s_mine_cart_31b_0071d2ac);
    FUN_0053b700(uVar1,0);
    FUN_00406360(3);
    return;
  case 9:
  case 0xc:
    FUN_00406dc0();
    pcVar3 = s_mine_cart_5f_0071d2ec;
LAB_0040530e:
    uVar1 = FUN_0053cc70(pcVar3);
    FUN_0053b700(uVar1,0);
    FUN_00406360(1);
    return;
  case 10:
    if (*(int *)(param_1 + 0x238) != 0) {
      FUN_00406dc0();
      uVar1 = FUN_0053cc70(s_mine_cart_4b_0071d2bc);
      FUN_0053b700(uVar1,0);
      FUN_00406360(3);
      FUN_00406360(2);
      return;
    }
    FUN_00406dc0();
    uVar1 = FUN_0053cc70(s_mine_cart_6f_0071d320);
    FUN_0053b700(uVar1,0);
    FUN_00406360(0);
    FUN_00406360(2);
    return;
  case 0xb:
    if (*(int *)(param_1 + 0x234) != 0) {
      FUN_00406dc0();
      uVar1 = FUN_0053cc70(s_mine_cart_2f_0071d310);
      FUN_0053b700(uVar1,1);
      FUN_00406360(0);
      FUN_00406360(1);
      return;
    }
    FUN_00406dc0();
    uVar1 = FUN_0053cc70(s_mine_cart_32f_0071d2cc);
    FUN_0053b700(uVar1,1);
    FUN_00406360(1);
    return;
  case 0xe:
    pcVar3 = s_mine_cart_31b_0071d2ac;
    uVar1 = FUN_00406d80(s_mine_cart_31b_0071d2ac,0);
    FUN_0053b700(uVar1,pcVar3);
    FUN_00406360(3);
    return;
  case 0xf:
    uVar4 = 0;
    uVar1 = FUN_00406d80(s_mine_cart_1f_0071d12c,0);
  }
  FUN_0053b700(uVar1,uVar4);
  FUN_00405f80();
  FUN_00406360(0);
  return;
}

