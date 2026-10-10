
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0054edf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  int local_bc [4];
  int local_ac;
  int local_a8;
  undefined1 local_a4 [76];
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d99f3;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x2098) != 0) && (DAT_00762afc != 0)) {
    DAT_0075fbd8 = 1;
    ExceptionList = &local_c;
    iVar1 = FUN_0065f190(s_SubTitleRender_0073d28c);
    if (iVar1 != 0) {
      if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x24) == 0)) {
        FUN_0065f8a0(local_bc,&local_a8);
        local_ac = local_a8 + -10;
        local_bc[2] = local_a8 + -0x5a;
        local_bc[3] = local_bc[0] + -0x19;
        local_bc[1] = 0x19;
        FUN_0064b0f0(param_1 + 0x1058);
        puVar6 = local_a4;
        puVar5 = &local_c0;
        uVar4 = 0x12;
        piVar3 = local_bc + 1;
        local_4 = 0;
        local_bd = 0xff;
        local_be = 0xff;
        local_bf = 0xff;
        local_c0 = 0xff;
        uVar2 = FUN_0069fa60(s_large_0071ceac);
        FUN_0069fbc0(uVar2,piVar3,uVar4,puVar5,puVar6);
        local_4 = 0xffffffff;
        FUN_0064b190();
        local_bc[3] = local_bc[0];
        local_bc[1] = 0;
        local_bc[2] = 0;
        local_ac = 0x6e;
        FUN_0064b0f0(param_1 + 0x2058);
        puVar6 = local_58;
        puVar5 = &local_c4;
        uVar4 = 0x12;
        piVar3 = local_bc + 1;
        local_4 = 1;
        local_c1 = 0xff;
        local_c2 = 0xff;
        local_c3 = 0xff;
        local_c4 = 0xff;
        uVar2 = FUN_0069fa60(s_large_0071ceac);
        FUN_0069fbc0(uVar2,piVar3,uVar4,puVar5,puVar6);
        local_4 = 0xffffffff;
        FUN_0064b190();
      }
      else {
        if ((*(int *)(param_1 + 0x1c) == 0) && (*(short *)(param_1 + 0x1058) != 0)) {
          FUN_00526640(&DAT_0073201c,param_1 + 0x1058,0);
          FUN_005268b0(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(param_1 + 0x1c) = 1;
        }
        FUN_00526890(param_1 + 0x1058);
      }
      FUN_0065f430();
    }
  }
  ExceptionList = local_c;
  return;
}

