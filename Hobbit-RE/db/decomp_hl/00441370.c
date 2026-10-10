
void __fastcall FUN_00441370(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_10 [4];
  undefined1 local_c [12];
  
  FUN_00434cf0(0xad);
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar5 = 0x3e000000;
  uVar4 = 1;
  uVar3 = 0;
  uVar1 = FUN_0053cc70(s_mine_cart_idle_00724318);
  FUN_00540840(uVar1,uVar3,uVar4,uVar5);
  *(undefined4 *)(param_1 + 0x460) = 1;
  *(undefined4 *)(param_1 + 0x554) = 1;
  FUN_00540900(0x3f800000,local_c,local_10);
  FUN_004430e0(0);
  DAT_0075b674 = 1;
  uVar1 = FUN_00435870();
  iVar2 = FUN_00435800(uVar1);
  if (iVar2 == 3) {
    *(undefined4 *)(param_1 + 0x4e60) = 0;
    FUN_00421f80();
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    *(undefined4 *)(param_1 + 0x3c8) = 0;
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3b4) = 0;
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    *(undefined4 *)(param_1 + 0x3d8) = 0;
  }
  return;
}

