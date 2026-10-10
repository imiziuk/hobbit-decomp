
/* WARNING: Removing unreachable block (ram,0x004c2be6) */
/* WARNING: Removing unreachable block (ram,0x004c2c27) */
/* WARNING: Removing unreachable block (ram,0x004c2c6c) */
/* WARNING: Removing unreachable block (ram,0x004c2c75) */
/* WARNING: Removing unreachable block (ram,0x004c2c81) */
/* WARNING: Removing unreachable block (ram,0x004c2cc5) */

void __fastcall FUN_004c2430(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  byte unaff_SI;
  undefined1 uStack_3c4;
  int iStack_39c;
  int local_398;
  int local_394;
  int local_390;
  int local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined1 auStack_374 [12];
  undefined1 local_368 [12];
  undefined1 auStack_35c [12];
  undefined1 local_350 [324];
  undefined1 local_20c;
  undefined4 local_20b;
  undefined1 local_18c;
  undefined4 local_18b;
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4852;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_18c = DAT_0075b6e0;
  puVar4 = &local_18b;
  for (iVar7 = 0x1f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_20c = DAT_0075b6e0;
  puVar4 = &local_20b;
  for (iVar7 = 0x1f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_4 = 0;
  local_390 = 0x7f7fffff;
  local_38c = 0x7f7fffff;
  local_388 = 0x7f7fffff;
  local_384 = 0xff7fffff;
  local_380 = 0xff7fffff;
  local_37c = 0xff7fffff;
  local_398 = 0;
  local_394 = 1;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  FUN_00649600();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00640480();
  FUN_006403a0();
  FUN_006403e0();
  FUN_00640480();
  (**(code **)(*param_1 + 0x48))();
  FUN_00640500();
  FUN_006403a0();
  FUN_006404b0();
  FUN_006405b0();
  FUN_006405b0();
  FUN_006405b0();
  FUN_006405b0();
  FUN_006405b0();
  FUN_006405b0();
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_00649720();
  FUN_00649600();
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  FUN_006405b0();
  *(ushort *)((int)param_1 + 0x15a) =
       *(ushort *)((int)param_1 + 0x15a) & 0x20 ^ *(ushort *)((int)param_1 + 0x15a);
  FUN_006405b0();
  *(ushort *)((int)param_1 + 0x15a) =
       *(ushort *)((int)param_1 + 0x15a) & 0x40 ^ *(ushort *)((int)param_1 + 0x15a);
  FUN_006405b0();
  uVar3 = *(ushort *)((int)param_1 + 0x15a) & 0x400 ^ *(ushort *)((int)param_1 + 0x15a);
  *(ushort *)((int)param_1 + 0x15a) = uVar3;
  bVar1 = (byte)(uVar3 >> 10);
  bVar6 = (bVar1 << 1 ^ *(byte *)((int)param_1 + 0x15d)) & 2 ^ *(byte *)((int)param_1 + 0x15d);
  *(byte *)((int)param_1 + 0x15d) = (bVar1 << 2 ^ bVar6) & 4 ^ bVar6;
  if (((uVar3 >> 10 & 1) != 0) && (param_1[0x51] == 0)) {
    puVar4 = (undefined4 *)operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[2] = 0x7fffffff;
      puVar4[3] = 0x7fffffff;
      *puVar4 = 0;
      puVar4[1] = 0xbf800000;
    }
    param_1[0x51] = (int)puVar4;
  }
  FUN_006405b0();
  *(byte *)((int)param_1 + 0x15d) =
       *(byte *)((int)param_1 + 0x15d) & 2 ^ *(byte *)((int)param_1 + 0x15d);
  FUN_006405b0();
  *(byte *)((int)param_1 + 0x15d) =
       *(byte *)((int)param_1 + 0x15d) & 4 ^ *(byte *)((int)param_1 + 0x15d);
  if (param_1[0x51] != 0) {
    FUN_00640480();
    FUN_00649b20();
    puStack_8._0_1_ = 3;
    uVar5 = FUN_00434eb0();
    *(undefined4 *)param_1[0x51] = uVar5;
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    FUN_00649ba0();
    FUN_00647d10();
    FUN_00640480();
    FUN_00549430();
    FUN_00647d10();
    FUN_00640480();
    FUN_00549430();
  }
  FUN_006405b0();
  bVar1 = *(byte *)((int)param_1 + 0x15d) & 1 ^ *(byte *)((int)param_1 + 0x15d);
  *(byte *)((int)param_1 + 0x15d) = bVar1;
  if ((bVar1 & 1) != 0) {
    if (param_1[0x52] == 0) {
      puVar4 = (undefined4 *)operator_new(8);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0x7fffffff;
        puVar4[1] = 0x7fffffff;
      }
      param_1[0x52] = (int)puVar4;
    }
    FUN_00647d10();
    FUN_00640480();
    FUN_00549430();
    FUN_00647d10();
    FUN_00640480();
    FUN_00549430();
    param_1[4] = param_1[4] | 0x40000000;
  }
  FUN_006405b0();
  *(ushort *)((int)param_1 + 0x15a) =
       *(ushort *)((int)param_1 + 0x15a) & 0x800 ^ *(ushort *)((int)param_1 + 0x15a);
  FUN_006405b0();
  (**(code **)(*param_1 + 0x8c))();
  FUN_006405b0();
  *(ushort *)((int)param_1 + 0x15a) =
       ((ushort)unaff_SI << 8 ^ *(ushort *)((int)param_1 + 0x15a)) & 0x100 ^
       *(ushort *)((int)param_1 + 0x15a);
  FUN_00640420();
  uVar2 = __ftol();
  *(undefined1 *)(param_1 + 0x57) = uVar2;
  FUN_00640450();
  *(undefined1 *)((int)param_1 + 0x15e) = uStack_3c4;
  FUN_004d0e10();
  FUN_00425250(auStack_374);
  FUN_004c08b0(auStack_35c,local_350,local_368,&iStack_39c);
  FUN_00640480();
  FUN_004c7010();
  iVar7 = FUN_00647cf0();
  if (iVar7 != 0) {
    *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 1;
  }
  if ((((*(ushort *)((int)param_1 + 0x15a) & 0x400) != 0) ||
      ((*(byte *)((int)param_1 + 0x15d) & 6) != 0)) ||
     ((*(ushort *)((int)param_1 + 0x15a) & 0x10) != 0)) {
    *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 1;
  }
  FUN_00640420();
  FUN_004c74d0();
  FUN_00640420();
  FUN_004c7520();
  FUN_00640420();
  FUN_004c74f0();
  FUN_006405b0();
  FUN_004c77d0();
  if (param_1[0x50] != 0) {
    uVar5 = *(undefined4 *)(param_1[0x50] + 0x94);
    FUN_006405b0();
    *(undefined4 *)(param_1[0x50] + 0x94) = uVar5;
  }
  (**(code **)(*param_1 + 0xd0))();
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_00649720();
  FUN_006405b0();
  FUN_006405b0();
  FUN_00649600();
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_00649720();
  FUN_004c7930();
  iVar7 = FUN_004c71a0();
  if (iVar7 != 0) {
    FUN_004c7660();
  }
  (**(code **)(*param_1 + 0x40))();
  param_1[0x11] = 0;
  param_1[0x12] = iStack_39c;
  param_1[0x13] = local_398;
  param_1[0x14] = local_394;
  param_1[0x15] = local_390;
  param_1[0x16] = local_38c;
  param_1[0xb] = param_1[0x11];
  param_1[0xc] = param_1[0x12];
  param_1[0xd] = param_1[0x13];
  param_1[0xe] = param_1[0x14];
  param_1[0xf] = param_1[0x15];
  param_1[0x10] = param_1[0x16];
  param_1[0xb] = (int)(-(float)param_1[5] + (float)param_1[0xb]);
  param_1[0xc] = (int)(-(float)param_1[6] + (float)param_1[0xc]);
  param_1[0xd] = (int)(-(float)param_1[7] + (float)param_1[0xd]);
  param_1[0xe] = (int)(-(float)param_1[5] + (float)param_1[0xe]);
  param_1[0xf] = (int)(-(float)param_1[6] + (float)param_1[0xf]);
  param_1[0x10] = (int)(-(float)param_1[7] + (float)param_1[0x10]);
  (**(code **)(*param_1 + 0x44))();
  uStack_14 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_1c;
  return;
}

