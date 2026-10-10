
undefined4 FUN_006401e0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5d06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bin_in__GetField_0074b35c);
  uVar3 = param_2;
  iVar6 = 0;
  local_4 = 0;
  iVar4 = FUN_006400f0(param_2);
  if (iVar4 == 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
  puVar7 = *(uint **)(param_1 + 0x2c);
  iVar4 = FUN_00648010(uVar3,0x3a);
  iVar4 = iVar4 + 1;
  iVar5 = FUN_00647cf0(iVar4);
  if (0 < iVar5) {
    puVar8 = &param_2;
    do {
      switch(*(undefined1 *)(iVar4 + iVar6)) {
      case 0x44:
      case 100:
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 1;
        *(uint *)*puVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        break;
      case 0x46:
      case 0x66:
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 1;
        *(uint *)*puVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        break;
      case 0x47:
      case 0x67:
        puVar2 = (uint *)puVar8[1];
        puVar8 = puVar8 + 1;
        puVar2[1] = *puVar7;
        *puVar2 = 0;
        *puVar2 = *puVar2 | puVar7[1];
        puVar2[1] = puVar2[1];
        puVar7 = puVar7 + 2;
        break;
      case 0x53:
      case 0x73:
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 1;
        FUN_00647d10(*puVar1,puVar7);
        iVar5 = FUN_00647cf0(puVar7);
        puVar7 = (uint *)((int)puVar7 + (iVar5 + 0x24U & 0xffffffe0));
      }
      iVar6 = iVar6 + 1;
      iVar5 = FUN_00647cf0(iVar4);
    } while (iVar6 < iVar5);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

