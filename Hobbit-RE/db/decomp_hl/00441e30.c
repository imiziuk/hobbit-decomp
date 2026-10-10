
void __fastcall FUN_00441e30(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [16];
  
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  puVar1 = (undefined4 *)(param_1 + 0x4a0);
  local_40[0xc] = 0;
  local_40[8] = 0;
  local_40[4] = 0;
  local_40[0xd] = 0;
  local_40[9] = 0;
  local_40[1] = 0;
  local_40[0xe] = 0;
  local_40[6] = 0;
  local_40[2] = 0;
  local_40[0xb] = 0;
  local_40[7] = 0;
  local_40[3] = 0;
  local_40[0] = 0x3f800000;
  local_40[5] = 0x3f800000;
  local_40[10] = 0x3f800000;
  local_40[0xf] = 0x3f800000;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  if (puVar1 != local_40) {
    puVar3 = local_40;
    puVar2 = (undefined4 *)(param_1 + 0x4a8);
    do {
      puVar2[-2] = *puVar3;
      puVar2[-1] = puVar3[1];
      *puVar2 = *(undefined4 *)(((int)local_40 - (int)puVar1) + (int)puVar2);
      puVar2[1] = *(undefined4 *)((int)local_40 + (4 - (int)puVar1) + (int)puVar2);
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != (undefined4 *)&stack0x00000000);
  }
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x554) = 0;
  FUN_00434dd0(0xad,0x3f800000);
  if (*(int *)(param_1 + 0x8d8) != 0x1e) {
    FUN_004057b0();
  }
  return;
}

