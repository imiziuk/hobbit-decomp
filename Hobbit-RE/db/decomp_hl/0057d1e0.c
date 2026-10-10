
void __thiscall
FUN_0057d1e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined1 *local_c4;
  undefined1 *local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 *local_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  char *local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined1 local_38 [12];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbe38;
  local_c = ExceptionList;
  local_a4 = s_Coll_ApplyAABBoxToCylinder_0074049c;
  local_a8 = (undefined1 *)0x57d20f;
  ExceptionList = &local_c;
  FUN_00649600();
  uVar1 = *(undefined4 *)(param_1 + 0x42d8);
  uVar2 = *(undefined4 *)(param_1 + 0x42dc);
  iVar3 = *(int *)(param_1 + 0x42d0) * 0x164;
  iVar5 = 0;
  local_4 = 0;
  if (0 < *(int *)(iVar3 + 0x3ee8 + param_1)) {
    iVar4 = 0x3df8;
    do {
      local_a4 = local_1c;
      local_a8 = local_2c;
      local_ac = local_38;
      local_b4 = *(undefined4 *)(iVar3 + 0x3dc0 + param_1);
      local_b0 = &local_90;
      local_b8 = iVar4 + iVar3 + 0x78 + param_1;
      local_bc = iVar3 + iVar4 + param_1;
      local_c0 = (undefined1 *)param_2;
      local_c4 = (undefined1 *)0x57d289;
      iVar3 = FUN_006082e0();
      if (iVar3 != 0) {
        local_a8 = *(undefined1 **)(param_2 + 0x10);
        local_a4 = (char *)0x0;
        local_ac = (undefined1 *)0x0;
        local_b0 = (undefined4 *)0x9;
        local_b4 = param_5;
        local_c0 = local_1c;
        local_c4 = local_2c;
        local_c8 = local_38;
        local_cc = local_90;
        local_d0 = 0x57d2dc;
        local_bc = uVar1;
        local_b8 = uVar2;
        FUN_0057ddb0();
        local_44 = (undefined1 *)&local_e8;
        local_e8 = local_8c;
        local_e4 = local_88;
        local_e0 = local_84;
        local_dc = local_80;
        local_d8 = local_7c;
        local_d4 = local_78;
        local_d0 = local_74;
        local_cc = local_70;
        local_c8 = (undefined1 *)local_6c;
        local_c4 = (undefined1 *)local_68;
        local_c0 = (undefined1 *)local_64;
        local_bc = local_60;
        local_b8 = local_5c;
        local_b4 = local_58;
        local_b0 = local_54;
        local_ac = local_50;
        local_a8 = local_4c;
        local_a4 = (char *)local_48;
        FUN_0057da20();
      }
      iVar3 = *(int *)(param_1 + 0x42d0) * 0x164;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < *(int *)(iVar3 + 0x3ee8 + param_1));
  }
  local_4 = 0xffffffff;
  local_a4 = (char *)0x57d3ba;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

