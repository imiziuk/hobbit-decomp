
undefined4 * FUN_004196a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf07f;
  local_c = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)operator_new(0x104);
    local_4 = 0;
  }
  else {
    ExceptionList = &local_c;
    iVar2 = FUN_00647ed0(param_1,s_Ch00_DreamWorld_0071fe78);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x104);
      local_4 = 1;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      *puVar1 = &PTR_FUN_006e9790;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_Ch01_Hobbiton_0071ee70);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x270);
      local_4 = 2;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      *puVar1 = &PTR_FUN_006e976c;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_Ch02_RoastMutton_0071fef4);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x1b8);
      local_4 = 3;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      puVar1[0x69] = 0;
      puVar1[0x68] = 0;
      puVar1[0x6a] = 0;
      puVar1[0x6c] = 0;
      puVar1[0x6b] = 0;
      puVar1[0x66] = 0;
      puVar1[0x67] = 0;
      *puVar1 = &PTR_FUN_006e9748;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_Ch02a_TrollHole_0071fee4);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x138);
      local_4 = 4;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      puVar1[0x4a] = 0;
      puVar1[0x49] = 0;
      puVar1[0x4b] = 0;
      puVar1[0x4d] = 0;
      puVar1[0x4c] = 0;
      puVar1[0x47] = 0;
      puVar1[0x48] = 0;
      *puVar1 = &PTR_FUN_006e9724;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_Ch4_Overhill_0071fed4);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x178);
      local_4 = 5;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      puVar1[0x45] = 0;
      puVar1[0x44] = 0;
      puVar1[0x46] = 0;
      puVar1[0x48] = 0;
      puVar1[0x47] = 0;
      puVar1[0x42] = 0;
      puVar1[0x43] = 0;
      local_4._0_1_ = 7;
      FUN_006a1cb0();
      local_4._0_1_ = 8;
      FUN_006a1cb0();
      local_4 = CONCAT31(local_4._1_3_,9);
      FUN_006a1cb0();
      *puVar1 = &PTR_FUN_006e9700;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_Ch05_Swordlight_0071ce90);
    if (iVar2 == 0) {
      pvVar3 = operator_new(0x1a8);
      local_4 = 10;
      if (pvVar3 == (void *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      puVar1 = (undefined4 *)FUN_00401000();
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_CH06__Mirkwood_0071d97c);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x120);
      local_4 = 0xb;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      *puVar1 = &PTR_FUN_006e96dc;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_CH06a_SpiderBoss_0071fe18);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x104);
      local_4 = 0xc;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      *puVar1 = &PTR_FUN_006e96b8;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_Ch07_BarrelsOutOfBond_0071febc);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x104);
      local_4 = 0xd;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      *puVar1 = &PTR_FUN_006e9694;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_CH08_Laketown_0071f6c8);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x4c8);
      local_4 = 0xe;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      local_4 = CONCAT31(local_4._1_3_,0xf);
      FUN_00417b60();
      puVar1[0x112] = 0;
      puVar1[0x111] = 0;
      puVar1[0x113] = 0;
      puVar1[0x115] = 0;
      puVar1[0x114] = 0;
      puVar1[0x10f] = 0;
      puVar1[0x110] = 0;
      *puVar1 = &PTR_FUN_006e9670;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_Ch09_Smaug_0071feb0);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x118);
      local_4 = 0x10;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      *puVar1 = &PTR_FUN_006e964c;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_Ch10_Lonely_Mountain_0071fe98);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x1680);
      local_4 = 0x11;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      local_4._0_1_ = 0x12;
      FUN_0040e650();
      local_4._0_1_ = 0x13;
      FUN_0040a7e0();
      local_4._0_1_ = 0x14;
      FUN_0040e060();
      local_4._0_1_ = 0x15;
      FUN_0040f0c0();
      local_4 = CONCAT31(local_4._1_3_,0x16);
      FUN_0040f0c0();
      *puVar1 = &PTR_FUN_006e9628;
      ExceptionList = local_c;
      return puVar1;
    }
    iVar2 = FUN_00647ed0(param_1,s_Ch11_CloudsBurst_0071f4a4);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)operator_new(0x10c);
      local_4 = 0x17;
      if (puVar1 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      FUN_0041a000();
      *puVar1 = &PTR_FUN_006e9604;
      ExceptionList = local_c;
      return puVar1;
    }
    puVar1 = (undefined4 *)operator_new(0x104);
    local_4 = 0x18;
  }
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  FUN_0041a000();
  *puVar1 = &PTR_FUN_006e95e0;
  ExceptionList = local_c;
  return puVar1;
}

