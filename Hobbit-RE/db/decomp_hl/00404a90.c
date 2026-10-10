
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00404a90(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  char *pcVar7;
  
  iVar5 = 0;
  do {
    FUN_004062d0(iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  fVar6 = (float10)FUN_0053bfb0(DAT_006e9310);
  *(float *)(param_1 + 0x204) = (float)fVar6;
  if ((*(int *)(param_1 + 500) != 0) &&
     (*(int *)(*(int *)(param_1 + 8) + 8) == *(int *)(param_1 + 500))) {
    FUN_0053b700(1,0);
    FUN_00406360(0);
    *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
    return;
  }
  iVar5 = *(int *)(param_1 + 8);
  switch(*(undefined4 *)(iVar5 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 0x19c) = 0;
    uVar2 = *(uint *)(iVar5 + 4);
    uVar3 = uVar2 * 2;
    if (((uVar3 ^ uVar2) & 0x7fffffff ^ uVar3) != 0xffffffff) {
      FUN_00549470((uint *)(iVar5 + 4));
    }
    uVar4 = FUN_0053cc70(s_mine_cart_1f_0071d12c);
    FUN_0053b700(uVar4,0);
    *(undefined4 *)(param_1 + 0x34c) = 0;
    FUN_00659600(s_MinecartImpactWall_0071d2fc,1);
    FUN_00405f80();
    FUN_00406360(0);
    fVar6 = (float10)FUN_0053be70(DAT_006e9310);
    *(float *)(param_1 + 0x204) = (float)fVar6;
    goto LAB_00404f7d;
  case 1:
    puVar1 = (uint *)(iVar5 + 4);
    uVar2 = *puVar1;
    uVar3 = uVar2 * 2;
    if (*(int *)(param_1 + 0x230) == 0) {
      if (((uVar3 ^ uVar2) & 0x7fffffff ^ uVar3) != 0xffffffff) {
        FUN_00549470(puVar1);
      }
      uVar4 = FUN_0053cc70(s_mine_cart_6f_0071d320);
      FUN_0053b700(uVar4,0);
      FUN_00406360(0);
      FUN_00406360(2);
      FUN_004063f0(1,0);
      goto switchD_00404b0c_default;
    }
    if (((uVar3 ^ uVar2) & 0x7fffffff ^ uVar3) != 0xffffffff) {
      FUN_00549470(puVar1);
    }
    uVar4 = FUN_0053cc70(s_mine_cart_2f_0071d310);
    FUN_0053b700(uVar4,0);
    FUN_00406360(0);
    uVar4 = 1;
    break;
  case 2:
  case 0xc:
    uVar2 = *(uint *)(iVar5 + 4) * 2;
    if (((uVar2 ^ *(uint *)(iVar5 + 4)) & 0x7fffffff ^ uVar2) != 0xffffffff) {
      FUN_00549470(iVar5 + 4);
    }
    uVar4 = FUN_0053cc70(s_mine_cart_1b_0071d24c);
    FUN_0053b700(uVar4,0);
    goto switchD_00404b0c_default;
  case 3:
    uVar2 = *(uint *)(iVar5 + 4) * 2;
    if (((uVar2 ^ *(uint *)(iVar5 + 4)) & 0x7fffffff ^ uVar2) == 0xffffffff) {
      pcVar7 = s_mine_cart_5f_0071d2ec;
    }
    else {
      FUN_00549470(iVar5 + 4);
      pcVar7 = s_mine_cart_5f_0071d2ec;
    }
    goto LAB_00404dfa;
  case 4:
    if (*(int *)(param_1 + 0x23c) == 0) {
      FUN_00406dc0();
      uVar4 = FUN_0053cc70(s_mine_cart_7b_0071d14c);
      FUN_0053b700(uVar4,0);
      FUN_00406360(3);
      FUN_004063f0(3,0);
      goto switchD_00404b0c_default;
    }
    FUN_00406dc0();
    uVar4 = FUN_0053cc70(s_mine_cart_4b_0071d2bc);
    FUN_0053b700(uVar4,0);
    FUN_00406360(3);
    uVar4 = 2;
    break;
  case 5:
    if (*(int *)(param_1 + 0x240) == 1) {
      FUN_00406dc0();
      pcVar7 = s_mine_cart_8f_0071d2dc;
    }
    else {
      uVar2 = *(uint *)(iVar5 + 4) * 2;
      if (((uVar2 ^ *(uint *)(iVar5 + 4)) & 0x7fffffff ^ uVar2) != 0xffffffff) {
        FUN_00549470(iVar5 + 4);
      }
      pcVar7 = s_mine_cart_32f_0071d2cc;
    }
    uVar4 = FUN_0053cc70(pcVar7);
    FUN_0053b700(uVar4,0);
    uVar4 = 4;
    break;
  case 6:
    uVar2 = *(uint *)(iVar5 + 4) * 2;
    if (((uVar2 ^ *(uint *)(iVar5 + 4)) & 0x7fffffff ^ uVar2) != 0xffffffff) {
      FUN_00549470(iVar5 + 4);
    }
    uVar4 = FUN_0053cc70(s_mine_cart_31b_0071d2ac);
    FUN_0053b700(uVar4,0);
    goto LAB_00404fec;
  case 7:
    FUN_00406dc0();
    pcVar7 = s_mine_cart_5f_0071d2ec;
    goto LAB_00404dfa;
  case 8:
  case 0xd:
    FUN_00406dc0();
    pcVar7 = s_mine_cart_5b_0071d25c;
    goto LAB_00404e6f;
  case 9:
  case 0xf:
    FUN_00406dc0();
    uVar4 = FUN_0053cc70(s_mine_cart_31f_0071d23c);
    FUN_0053b700(uVar4,0);
    uVar4 = 4;
    break;
  case 10:
    if (*(int *)(param_1 + 0x238) != 0) {
      FUN_00406dc0();
      uVar4 = FUN_0053cc70(s_mine_cart_32b_0071d26c);
      FUN_0053b700(uVar4,0);
      FUN_00406360(2);
      FUN_00406360(3);
      FUN_004063f0(2,0);
      goto switchD_00404b0c_default;
    }
    FUN_00406dc0();
    pcVar7 = s_mine_cart_2b_0071d27c;
LAB_00404e6f:
    uVar4 = FUN_0053cc70(pcVar7);
    FUN_0053b700(uVar4,0);
    uVar4 = 2;
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x234) == 0) {
      FUN_00406dc0();
      pcVar7 = s_mine_cart_4f_0071d29c;
    }
    else {
      uVar2 = *(uint *)(iVar5 + 4) * 2;
      if (((uVar2 ^ *(uint *)(iVar5 + 4)) & 0x7fffffff ^ uVar2) != 0xffffffff) {
        FUN_00549470(iVar5 + 4);
      }
      pcVar7 = s_mine_cart_6b_0071d28c;
    }
LAB_00404dfa:
    uVar4 = FUN_0053cc70(pcVar7);
    FUN_0053b700(uVar4,0);
    uVar4 = 1;
    break;
  case 0xe:
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x34c) = 0;
    FUN_00659600(s_MinecartImpactWall_0071d2fc,1);
    FUN_00405f80();
    _DAT_0075b6ac = 1;
    *(undefined4 *)(param_1 + 0x328) = 0x45aece29;
    *(undefined4 *)(param_1 + 0x32c) = 0xc4c8cc7b;
    *(undefined4 *)(param_1 + 0x330) = 0xc58553ae;
    goto LAB_00404f87;
  case 0x10:
    uVar2 = *(uint *)(iVar5 + 4) * 2;
    if (((uVar2 ^ *(uint *)(iVar5 + 4)) & 0x7fffffff ^ uVar2) != 0xffffffff) {
      FUN_00549470(iVar5 + 4);
    }
    uVar4 = FUN_0053cc70(s_mine_cart_31b_0071d2ac);
    FUN_0053b700(uVar4,0);
    FUN_004062d0(4);
LAB_00404fec:
    uVar4 = 3;
    break;
  case 0x11:
    *(undefined4 *)(param_1 + 0x19c) = 0;
    uVar2 = *(uint *)(iVar5 + 4);
    uVar3 = uVar2 * 2;
    if (((uVar3 ^ uVar2) & 0x7fffffff ^ uVar3) != 0xffffffff) {
      FUN_00549470((uint *)(iVar5 + 4));
    }
    uVar4 = FUN_0053cc70(s_mine_cart_8b_0071d13c);
    FUN_0053b700(uVar4,0);
    *(undefined4 *)(param_1 + 0x34c) = 0;
    FUN_00659600(s_MinecartImpactWall_0071d2fc,1);
    FUN_00405f80();
LAB_00404f7d:
    _DAT_0075b6ac = 1;
LAB_00404f87:
    iVar5 = FUN_0054c0f0(s_Set_TRKMineCartLp2_MineCartStop_0071d21c,1);
    if (iVar5 != 0) {
      FUN_00539290();
    }
  default:
    goto switchD_00404b0c_default;
  }
  FUN_00406360(uVar4);
switchD_00404b0c_default:
  FUN_004060a0();
  FUN_0064e7d0(s_Increment_from__s_to__s_0071d200,&DAT_0071cf50 + *(int *)(param_1 + 0x200) * 4,
               &DAT_0071cf50 + *(int *)(*(int *)(param_1 + 8) + 8) * 4);
  return;
}

