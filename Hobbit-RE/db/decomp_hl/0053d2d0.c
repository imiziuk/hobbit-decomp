
undefined4
FUN_0053d2d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_14c [17];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [12];
  undefined4 local_b4;
  undefined4 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  local_d0 = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_cc = 0;
  local_dc = 0;
  local_fc = 0;
  local_c8 = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_d4 = 0;
  local_e4 = 0;
  local_f4 = 0;
  local_100 = 0x3f800000;
  local_ec = 0x3f800000;
  local_d8 = 0x3f800000;
  local_c4 = 0x3f800000;
  FUN_0053cff0(param_2,&local_100,param_4,local_80);
  local_14c[0x10] = *param_3;
  local_108 = param_3[1];
  local_14c[0xc] = 0;
  local_104 = param_3[2];
  local_14c[8] = 0;
  local_14c[4] = 0;
  local_14c[0xd] = 0;
  local_14c[9] = 0;
  local_14c[1] = 0;
  local_14c[0xe] = 0;
  local_14c[6] = 0;
  local_14c[2] = 0;
  local_14c[0xb] = 0;
  local_14c[7] = 0;
  local_14c[3] = 0;
  local_14c[0] = 0x3f800000;
  local_14c[5] = 0x3f800000;
  local_14c[10] = 0x3f800000;
  local_14c[0xf] = 0x3f800000;
  FUN_00425720(local_14c + 0x10);
  local_b4 = 0;
  local_a4 = 0;
  local_94 = 0;
  local_84 = 0x3f800000;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  uVar2 = FUN_0064e040(local_40,local_c0,local_14c);
  FUN_00406570(uVar2);
  puVar3 = (undefined4 *)FUN_0064e040(local_40,local_80,local_14c);
  if ((local_14c != puVar3) && (puVar1 = puVar3 + 0x10, puVar3 != puVar1)) {
    puVar4 = local_14c + 2;
    iVar5 = (int)puVar3 - (int)local_14c;
    do {
      puVar4[-2] = *puVar3;
      puVar4[-1] = puVar3[1];
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4[1] = puVar3[3];
      puVar3 = puVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar3 != puVar1);
  }
  FUN_004065c0(param_1);
  return param_1;
}

