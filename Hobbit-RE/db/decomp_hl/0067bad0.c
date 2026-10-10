
void FUN_0067bad0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EDI;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int local_48;
  undefined4 local_38;
  int local_34;
  int local_30;
  int *local_2c;
  undefined2 local_28;
  int local_24 [4];
  undefined4 *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = param_1;
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x84) = 1;
  if ((puVar1[9] == 0) || (puVar1[9] == -1)) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  uVar9 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar4 = puVar1[2];
  local_48 = 0;
  if (puVar1[6] * 2 - iVar4 == 0) {
    puVar1[5] = 1;
  }
  iVar2 = puVar1[5];
  if (iVar2 == 0) {
    iVar4 = (iVar4 + 0x23U) / 0x24 << 7;
  }
  else if ((iVar2 != 1) && (iVar2 != 2)) goto LAB_0067bb5f;
  local_48 = iVar4;
LAB_0067bb5f:
  local_28 = 0;
  local_34 = puVar1[7];
  local_30 = local_34 * 2;
  local_38 = 0x10001;
  piVar5 = local_24;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_2c = (int *)0x100002;
  iVar4 = 0x2274;
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar4 = 0;
  }
  local_24[2] = iVar4 + local_48;
  local_10 = DAT_006fe018;
  local_4 = DAT_006fe024;
  local_14 = &local_38;
  local_c = DAT_006fe01c;
  local_24[0] = 0x24;
  local_24[1] = 0x500c0;
  local_8 = DAT_006fe020;
  param_1 = uVar9;
  (**(code **)(*DAT_00806ba0 + 0xc))(DAT_00806ba0,local_24,&param_1,0);
  DAT_00808da8 = DAT_00808da8 + 1;
  if (puVar1[5] == 0) {
    FUN_0067b860(local_c,*puVar1,puVar1[2],0,0);
  }
  else {
    FUN_0067ba30(local_c,*puVar1,puVar1[2],0);
  }
  if (*(int *)(iVar3 + 0x84) == 0) {
    uVar9 = 0;
    puVar8 = &stack0xffffffa8;
    puVar7 = &stack0xffffffb0;
    puVar6 = &stack0xffffffb4;
    (**(code **)(*local_c + 0x2c))(local_c,unaff_EDI,iVar4,&stack0xffffffac,puVar6,puVar7,puVar8,0);
    (**(code **)(*local_2c + 0x4c))(local_2c,puVar7,uVar9,puVar8,puVar6);
  }
  (**(code **)(*local_c + 0x34))(local_c,0);
  *(undefined4 **)(iVar3 + 0x78) = local_14;
  return;
}

