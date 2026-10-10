
void __thiscall FUN_005418d0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8 [17];
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [12];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  FUN_00549470(param_1 + 0xd0);
  FUN_00549580(param_1 + 0xd0);
  iVar4 = FUN_0053f210(2);
  if (*(int *)(param_1 + 300) != 0) {
    FUN_00542230();
  }
  iVar3 = *(int *)(param_1 + 0x130);
  FUN_0053f260(local_d8 + 0x10,1);
  local_e4 = local_d8[0x10];
  local_e0 = local_94;
  local_dc = local_90;
  local_d8[0xc] = 0;
  local_d8[8] = 0;
  local_d8[4] = 0;
  local_d8[0xd] = 0;
  local_d8[9] = 0;
  local_d8[1] = 0;
  local_d8[0xe] = 0;
  local_d8[6] = 0;
  local_d8[2] = 0;
  local_d8[0xb] = 0;
  local_d8[7] = 0;
  local_d8[3] = 0;
  local_d8[0] = 0x3f800000;
  local_d8[5] = 0x3f800000;
  local_d8[10] = 0x3f800000;
  local_d8[0xf] = 0x3f800000;
  FUN_00463c20(&local_e4);
  uVar5 = FUN_0064e040(local_40,local_80,local_d8);
  FUN_00406570(uVar5);
  puVar6 = (undefined4 *)FUN_0064e040(local_40,iVar4 * 0x40 + iVar3,local_d8);
  if ((local_d8 != puVar6) && (puVar1 = puVar6 + 0x10, puVar6 != puVar1)) {
    puVar7 = local_d8 + 2;
    iVar4 = (int)puVar6 - (int)local_d8;
    do {
      puVar7[-2] = *puVar6;
      puVar7[-1] = puVar6[1];
      *puVar7 = *(undefined4 *)(iVar4 + (int)puVar7);
      puVar7[1] = puVar6[3];
      puVar6 = puVar6 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar6 != puVar1);
  }
  puVar6 = (undefined4 *)FUN_004065c0(local_8c);
  uVar5 = puVar6[1];
  uVar2 = puVar6[2];
  *param_2 = *puVar6;
  param_2[1] = uVar5;
  param_2[2] = uVar2;
  return;
}

