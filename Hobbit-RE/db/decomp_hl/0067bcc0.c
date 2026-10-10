
void FUN_0067bcc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_24 [4];
  undefined4 *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = param_1;
  iVar5 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar5 + 0x18);
  iVar2 = *(int *)(iVar5 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(uint *)(param_1 + 0x84) = (uint)(iVar2 != 0);
  local_28 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x20000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  local_34 = *(int *)(iVar5 + 0x1c);
  local_30 = local_34 * 2;
  local_38 = 0x10001;
  puVar6 = local_24;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_10 = DAT_006fe018;
  local_4 = DAT_006fe024;
  local_14 = &local_38;
  local_8 = DAT_006fe020;
  local_2c = 0x100002;
  local_24[2] = 0x40000;
  local_24[0] = 0x24;
  local_24[1] = 0x500c0;
  local_c = DAT_006fe01c;
  param_1 = uVar3;
  (**(code **)(*DAT_00806ba0 + 0xc))(DAT_00806ba0,local_24,&param_1,0);
  (**(code **)(*local_c + 0x34))(local_c,0);
  if (iVar1 * 2 < 0x20000) {
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 **)(iVar4 + 0x78) = local_14;
  }
  else {
    *(undefined4 **)(iVar4 + 0x78) = local_14;
  }
  DAT_00808da8 = DAT_00808da8 + 1;
  return;
}

