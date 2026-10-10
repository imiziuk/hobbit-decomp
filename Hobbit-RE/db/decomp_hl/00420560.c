
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00420560(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 0xfffffffb;
  FUN_00575440(param_1 + 0x454,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               param_1 + 0x14,param_1 + 0x14);
  if (*(int *)(param_1 + 0x5efc) == -1) {
    return;
  }
  FUN_00549470(param_1 + 0x5ef8);
  FUN_00549580(param_1 + 0x5ef8);
  iVar1 = FUN_0053cc70(s_equip_weapon_007202d8);
  if (*(int *)(param_1 + 0x5efc) != iVar1) {
    return;
  }
  if (*(float *)(param_1 + 0x5f04) < _DAT_006e9554) {
    return;
  }
  if (*(int *)(param_1 + 0x4e1c) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4e1c) = 1;
  iVar1 = FUN_00423c80();
  if (iVar1 == 0) {
    uVar2 = FUN_00435870();
    iVar1 = FUN_00435800(uVar2);
    if (iVar1 != 3) goto LAB_0042063a;
    *(undefined4 *)(param_1 + 0x3c0) = 1;
    *(undefined4 *)(param_1 + 0x3c8) = 1;
  }
  else {
LAB_0042063a:
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    *(undefined4 *)(param_1 + 0x3c8) = 0;
    *(undefined4 *)(param_1 + 0x4e60) = 0;
    FUN_00421f80();
  }
  iVar1 = FUN_00423c80();
  if (iVar1 == 0) {
    uVar2 = FUN_00435870();
    iVar1 = FUN_00435800(uVar2);
    if (iVar1 == 5) {
      *(undefined4 *)(param_1 + 0x3d0) = 1;
      *(undefined4 *)(param_1 + 0x3d8) = 1;
      goto LAB_00420692;
    }
  }
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
LAB_00420692:
  iVar1 = FUN_00423c80();
  if (iVar1 == 0) {
    uVar2 = FUN_00435870();
    iVar1 = FUN_00435800(uVar2);
    if (iVar1 == 6) {
      *(undefined4 *)(param_1 + 0x3b0) = 1;
      *(undefined4 *)(param_1 + 0x3b4) = 1;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  return;
}

