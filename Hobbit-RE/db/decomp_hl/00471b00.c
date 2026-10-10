
undefined4 * FUN_00471b00(undefined4 param_1)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1590;
  local_c = ExceptionList;
  switch(param_1) {
  case 1:
    ExceptionList = &local_c;
    puVar3 = (undefined4 *)operator_new(0x1c);
    if (puVar3 != (undefined4 *)0x0) {
      *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xf8;
      *(undefined2 *)(puVar3 + 3) = 0;
      *(undefined2 *)((int)puVar3 + 0xe) = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      *puVar3 = &PTR_FUN_006ecf84;
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    puVar3 = (undefined4 *)operator_new(0x90);
    if (puVar3 != (undefined4 *)0x0) {
      *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xf8;
      *puVar3 = &PTR_FUN_006ed02c;
      *(undefined2 *)(puVar3 + 3) = 0;
      *(undefined2 *)((int)puVar3 + 0xe) = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      local_4._0_1_ = 8;
      local_4._1_3_ = 0;
      FUN_006499d0();
      puVar1 = puVar3 + 0x15;
      *puVar1 = puVar3[0x15] | 0x7fffffff;
      local_4._0_1_ = 9;
      FUN_00406bd0(0);
      local_4._0_1_ = 10;
      FUN_006a1cb0();
      local_4 = CONCAT31(local_4._1_3_,0xb);
      *puVar3 = &PTR_FUN_006ecf4c;
      puVar3[8] = 0;
      puVar3[9] = 0;
      FUN_0064a2e0(&DAT_0075b6e0);
      puVar3[0x18] = 0;
      puVar3[0x16] = 1;
      puVar3[0x19] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x1a] = 0xffffffff;
      puVar3[0x1c] = 0;
      *puVar1 = *puVar1 | 0x7fffffff;
      FUN_00406bd0(0);
      puVar3[0x17] = 1;
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x4c);
    local_4 = 6;
    if (pvVar2 != (void *)0x0) {
      puVar3 = (undefined4 *)FUN_0047c520();
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x80);
    local_4 = 4;
    if (pvVar2 != (void *)0x0) {
      puVar3 = (undefined4 *)FUN_004775c0();
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x60);
    local_4 = 3;
    if (pvVar2 != (void *)0x0) {
      puVar3 = (undefined4 *)FUN_00476570();
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    puVar3 = (undefined4 *)operator_new(0x68);
    if (puVar3 != (undefined4 *)0x0) {
      *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xf8;
      *puVar3 = &PTR_FUN_006ed02c;
      *(undefined2 *)(puVar3 + 3) = 0;
      *(undefined2 *)((int)puVar3 + 0xe) = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      FUN_006499d0();
      *(ushort *)(puVar3 + 4) = *(ushort *)(puVar3 + 4) | 1;
      local_4 = CONCAT31(local_4._1_3_,2);
      *puVar3 = &PTR_FUN_006ecff4;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 1;
      FUN_0064a2e0(&DAT_0075b6e0);
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    puVar3 = (undefined4 *)operator_new(0x28);
    if (puVar3 != (undefined4 *)0x0) {
      *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xf8;
      *(undefined2 *)(puVar3 + 3) = 0;
      *(undefined2 *)((int)puVar3 + 0xe) = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      *puVar3 = &PTR_FUN_006ecfbc;
      puVar3[8] = 0;
      puVar3[9] = 0;
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x38);
    local_4 = 5;
    if (pvVar2 != (void *)0x0) {
      puVar3 = (undefined4 *)FUN_0047a3c0();
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 9:
    ExceptionList = &local_c;
    puVar3 = (undefined4 *)operator_new(0x58);
    local_4 = 0xc;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_004742d0();
      local_4._0_1_ = 0xd;
      FUN_006499d0();
      local_4 = CONCAT31(local_4._1_3_,0xe);
      *puVar3 = &PTR_FUN_006ecf14;
      puVar3[8] = 0;
      puVar3[9] = 0;
      FUN_0064a2e0(&DAT_0075b6e0);
      puVar3[0x15] = puVar3[0x15] & 0xfffffffd | 0xd;
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 10:
    ExceptionList = &local_c;
    puVar3 = (undefined4 *)operator_new(0x48);
    local_4 = 0xf;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_004742d0();
      local_4._0_1_ = 0x10;
      FUN_006499d0();
      local_4 = CONCAT31(local_4._1_3_,0x11);
      *puVar3 = &PTR_FUN_006ecedc;
      FUN_0064a2e0(&DAT_0075b6e0);
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 0xb:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x4c);
    local_4 = 0x12;
    if (pvVar2 != (void *)0x0) {
      puVar3 = (undefined4 *)FUN_00480790();
      ExceptionList = local_c;
      return puVar3;
    }
    break;
  case 0xc:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x30);
    local_4 = 0x13;
    if (pvVar2 != (void *)0x0) {
      puVar3 = (undefined4 *)FUN_0047bb60();
      ExceptionList = local_c;
      return puVar3;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

