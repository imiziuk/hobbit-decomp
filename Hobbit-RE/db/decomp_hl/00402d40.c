
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00402d40(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined1 local_68 [28];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x11c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  local_10 = 0;
  local_20 = 0;
  local_30 = 0;
  local_c = 0;
  local_1c = 0;
  local_3c = 0;
  local_8 = 0;
  local_28 = 0;
  local_38 = 0;
  local_14 = 0;
  local_24 = 0;
  local_34 = 0;
  local_40 = 0x3f800000;
  local_2c = 0x3f800000;
  local_18 = 0x3f800000;
  local_4 = 0x3f800000;
  FUN_00406570(&local_40);
  if (param_2 == 0) {
    FUN_00406dc0();
    uVar1 = FUN_0053cc70(s_mine_cart_1f_0071d12c);
    FUN_0053b700(uVar1,0);
    FUN_00406360(0);
    FUN_004062d0(1);
    FUN_004062d0(2);
    FUN_004062d0(3);
  }
  else {
    if (param_2 == 1) {
      FUN_00406dc0();
      uVar1 = FUN_0053cc70(s_mine_cart_8b_0071d13c);
      FUN_0053b700(uVar1,0);
      FUN_004062d0(0);
      FUN_004062d0(1);
      FUN_004062d0(2);
      FUN_004062d0(3);
      FUN_00406360(4);
      goto LAB_00402ec7;
    }
    if (param_2 != 2) goto LAB_00402ec7;
    FUN_00406dc0();
    uVar1 = FUN_0053cc70(s_mine_cart_7b_0071d14c);
    FUN_0053b700(uVar1,0);
    FUN_004062d0(0);
    FUN_004062d0(1);
    FUN_004062d0(2);
    FUN_00406360(3);
  }
  FUN_004062d0(4);
LAB_00402ec7:
  FUN_00405f80();
  FUN_00405ed0();
  FUN_0053b910(local_68);
  *(undefined4 *)(param_1 + 0x14) = local_4c;
  *(undefined4 *)(param_1 + 0x18) = local_48;
  *(undefined4 *)(param_1 + 0x1c) = local_44;
  *(undefined4 *)(param_1 + 0x20) = local_4c;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  puVar3 = (undefined4 *)(param_1 + 0x34);
  iVar4 = 9;
  do {
    puVar3[-2] = *(undefined4 *)(param_1 + 0x14);
    puVar3[-1] = *(undefined4 *)(param_1 + 0x18);
    *puVar3 = *(undefined4 *)(param_1 + 0x1c);
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  _DAT_0075b6ac = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0x3f800000;
  fVar5 = (float10)FUN_0053be70(DAT_006e9310);
  *(float *)(param_1 + 0x204) = (float)fVar5;
  _DAT_0075b6c0 = 0;
  piVar2 = (int *)FUN_0054c0f0(s_MineCart_Start_000_0071d118,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
    uStack_80 = *puVar3;
    fStack_7c = (float)puVar3[1];
    uStack_78 = puVar3[2];
    *(undefined4 *)(param_1 + 0x334) = uStack_80;
    *(float *)(param_1 + 0x338) = fStack_7c;
    *(undefined4 *)(param_1 + 0x33c) = uStack_78;
    fStack_7c = fStack_7c - _DAT_006e9334;
    uStack_6c = uStack_78;
    (**(code **)(*piVar2 + 0x14))(&uStack_80,0);
  }
  piVar2 = (int *)FUN_0054c0f0(s_MineCart_Start_001_0071d104,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
    uStack_80 = *puVar3;
    fStack_7c = (float)puVar3[1];
    uStack_78 = puVar3[2];
    *(undefined4 *)(param_1 + 0x340) = uStack_80;
    *(float *)(param_1 + 0x344) = fStack_7c;
    *(undefined4 *)(param_1 + 0x348) = uStack_78;
    fStack_7c = fStack_7c - _DAT_006e9334;
    uStack_6c = uStack_78;
    (**(code **)(*piVar2 + 0x14))(&uStack_80,0);
  }
  return;
}

