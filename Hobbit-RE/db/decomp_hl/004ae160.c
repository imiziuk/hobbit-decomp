
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ae160(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *local_88;
  undefined4 *local_84;
  char *local_80;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined4 local_24 [3];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3f28;
  local_c = ExceptionList;
  local_80 = s_path__RenderCustom_0072ba80;
  local_84 = (undefined4 *)0x4ae18c;
  ExceptionList = &local_c;
  FUN_00649600();
  iVar4 = 0;
  local_4 = 0;
  if (((*(int *)(param_1 + 0xc0) != 0) && (*(int *)(param_1 + 0xc4) != 0)) &&
     (0 < *(int *)(param_1 + 0xc0))) {
    do {
      local_80 = (char *)(iVar4 * 0xe + *(int *)(param_1 + 0xc4));
      local_84 = &local_3c;
      local_88 = (undefined4 *)0x4ae1ce;
      FUN_004adb90();
      if (iVar4 == 0) {
        local_84 = &local_3c;
        local_80 = (char *)0xffff0000;
        local_88 = (undefined4 *)0x4ae1f2;
        FUN_0066a800();
      }
      else {
        local_48 = local_54;
        local_44 = local_50;
        local_40 = local_4c;
      }
      local_88 = local_3c;
      local_84 = (undefined4 *)local_38;
      local_80 = (char *)local_34;
      puVar2 = (undefined4 *)FUN_004adfa0(local_30);
      local_54 = *puVar2;
      local_50 = puVar2[1];
      local_80 = (char *)0x0;
      local_4c = puVar2[2];
      local_84 = &local_54;
      local_88 = local_24;
      FUN_0065fce0(0);
      pfVar3 = (float *)FUN_00673820();
      puVar2 = (undefined4 *)*pfVar3;
      fVar1 = pfVar3[1];
      local_80 = (char *)0x1;
      local_84 = (undefined4 *)0x5;
      local_88 = (undefined4 *)0x4ae27f;
      FUN_0066c3a0();
      local_80 = (char *)0xffff0000;
      local_84 = (undefined4 *)0x4ae29c;
      FUN_0066ddd0();
      local_84 = (undefined4 *)(fVar1 - _DAT_006e999c);
      local_80 = (char *)0x0;
      local_88 = puVar2;
      FUN_0066dfc0();
      local_88 = (undefined4 *)((float)puVar2 - _DAT_006e999c);
      local_80 = (char *)0x0;
      local_84 = (undefined4 *)fVar1;
      FUN_0066dfc0();
      local_84 = (undefined4 *)(fVar1 + _DAT_006e999c);
      local_80 = (char *)0x0;
      local_88 = puVar2;
      FUN_0066dfc0();
      local_88 = (undefined4 *)((float)puVar2 + _DAT_006e999c);
      local_80 = (char *)0x0;
      local_84 = (undefined4 *)fVar1;
      FUN_0066dfc0();
      local_80 = (char *)0x4ae310;
      FUN_0066d9a0();
      if (iVar4 == 0) {
        FUN_004adb90(&local_88,*(int *)(param_1 + 0xc0) * 0xe + -0xe + *(int *)(param_1 + 0xc4));
        puVar2 = (undefined4 *)FUN_004adfa0(local_18);
        local_48 = *puVar2;
        local_44 = puVar2[1];
        local_40 = puVar2[2];
      }
      local_80 = (char *)0x0;
      local_84 = (undefined4 *)0x1;
      local_88 = (undefined4 *)0x4ae362;
      FUN_0066c3a0();
      local_88 = &local_48;
      FUN_0066de80();
      FUN_0066de80(&local_54);
      local_80 = (char *)0x4ae37e;
      FUN_0066d9a0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc0));
  }
  local_4 = 0xffffffff;
  local_80 = (char *)0x4ae39e;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

