
void __thiscall FUN_004d5180(int param_1,undefined4 param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int local_40c;
  int *local_408;
  int local_404;
  int local_400;
  undefined1 local_3f8 [4];
  undefined1 local_3f4 [4];
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_39c;
  undefined1 local_398 [44];
  undefined4 local_36c [21];
  undefined1 local_318 [64];
  undefined1 local_2d8;
  undefined4 local_2d7;
  undefined1 local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5177;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_treasure_chest__OnImport_0072dad4);
  local_4 = 0;
  FUN_006405b0(&DAT_0072dacc,param_1 + 0x160);
  FUN_00640450(s_Value_0072dac4,param_1 + 0x188);
  local_2d8 = 0;
  puVar6 = &local_2d7;
  for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  FUN_00640480(s_Contents_0072dab8,local_318);
  iVar5 = param_1 + 0x1fc;
  FUN_0064a2e0(local_318);
  FUN_00640450(s_TrapNumGadgets_0072daa8,param_1 + 0x16c);
  FUN_00640450(s_TrapDifficulty_0072da98,param_1 + 0x170);
  FUN_00640420(s_TrapTime_0072da8c,param_1 + 0x174);
  FUN_00640450(s_TrapDamageType_0072da7c,param_1 + 0x178);
  FUN_00640480(s_ContentsResource_0072da68,local_20c);
  pfVar1 = (float *)(param_1 + 0x1f8);
  FUN_00640420(s_ContentsScale_0072da58,pfVar1);
  if (*pfVar1 < DAT_006e92e4 != (*pfVar1 == DAT_006e92e4)) {
    uVar2 = FUN_00434e80(6);
    iVar3 = FUN_0064a940(iVar5,uVar2);
    if (iVar3 == 0) {
      *pfVar1 = 1.0;
    }
    else {
      iVar3 = FUN_00434eb0(iVar5);
      *pfVar1 = *(float *)(&DAT_0072d93c + iVar3 * 4);
    }
  }
  *pfVar1 = 1.0;
  uVar2 = FUN_00434e80(4);
  iVar5 = FUN_0064aae0(iVar5,uVar2);
  if (iVar5 == 0) {
    uVar2 = FUN_005496c0(local_20c,0);
    uVar2 = FUN_0064b130(uVar2);
    local_4._0_1_ = 2;
  }
  else {
    uVar2 = FUN_005496c0(local_20c,s_Props_00720224);
    uVar2 = FUN_0064b130(uVar2);
    local_4._0_1_ = 1;
  }
  FUN_0064b7f0(uVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0064b190();
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x188);
  FUN_00640450(s_Contents_Count_0072da34,(undefined4 *)(param_1 + 0x194));
  local_404 = 0;
  if (0 < *(int *)(param_1 + 0x194)) {
    do {
      FUN_006499d0();
      local_4._0_1_ = 3;
      FUN_006499d0();
      local_4._0_1_ = 4;
      local_3dc = 0;
      local_3d8 = 0;
      local_3d4 = 0;
      local_3d0 = 0;
      local_3cc = 0;
      uVar2 = FUN_0064b130(&DAT_0075b6e0);
      local_4._0_1_ = 5;
      FUN_0064a360(uVar2);
      local_4._0_1_ = 4;
      FUN_0064b190();
      local_39c = 0x3f800000;
      FUN_0064a2e0(&DAT_0075b6e0);
      local_36c[0] = 1;
      local_4._0_1_ = 6;
      FUN_00649920(local_3f4,s_Contents_Item_03d_Type_0072da1c,local_404);
      puVar7 = &local_2d8;
      local_4._0_1_ = 7;
      uVar2 = FUN_00649940(puVar7);
      FUN_00640480(uVar2,puVar7);
      local_4._0_1_ = 6;
      FUN_00649950();
      FUN_0064a2e0(&local_2d8);
      uVar8 = 0;
      uVar2 = FUN_00434eb0(local_398);
      uVar2 = FUN_00435940(uVar2);
      uVar2 = FUN_005496c0(uVar2,uVar8);
      uVar2 = FUN_0064b130(uVar2);
      local_4._0_1_ = 8;
      FUN_0064a360(uVar2);
      local_4._0_1_ = 6;
      FUN_0064b190();
      FUN_00649920(local_3f8,s_Contents_Item_03d_Value_0072d9e8,local_404);
      puVar6 = local_36c;
      local_4._0_1_ = 9;
      uVar2 = FUN_00649940(puVar6);
      FUN_00640450(uVar2,puVar6);
      local_4._0_1_ = 6;
      FUN_00649950();
      local_40c = *(int *)(param_1 + 0x230);
      if (*(int *)(param_1 + 0x238) < local_40c + 1) {
        if (*(int *)(param_1 + 0x240) == 0) {
          iVar3 = *(int *)(param_1 + 0x238) / 2;
          iVar5 = 1;
          if (0 < iVar3) {
            iVar5 = iVar3;
          }
          if (iVar5 + local_40c < 1) {
            local_40c = 1;
          }
          else {
            if (iVar3 < 1) {
              iVar3 = 1;
            }
            local_40c = local_40c + iVar3;
          }
        }
        else {
          local_40c = *(int *)(param_1 + 0x240) + local_40c;
        }
        piVar4 = (int *)operator_new(local_40c * 0x78 + 4);
        local_4._0_1_ = 10;
        if (piVar4 == (int *)0x0) {
          local_408 = (int *)0x0;
        }
        else {
          local_408 = piVar4 + 1;
          *piVar4 = local_40c;
          FUN_006c043b(local_408,0x78,local_40c,FUN_004d8dc0,FUN_004d5130);
        }
        local_4._0_1_ = 6;
        local_400 = 0;
        if (0 < *(int *)(param_1 + 0x230)) {
          piVar4 = local_408 + 4;
          do {
            iVar5 = *(int *)(param_1 + 0x234) + (-0x10 - (int)local_408);
            piVar4[-4] = *(int *)((int)piVar4 + *(int *)(param_1 + 0x234) + (-0x10 - (int)local_408)
                                 );
            piVar4[-3] = *(int *)((int)piVar4 + iVar5 + 4);
            piVar4[-2] = *(int *)((int)piVar4 + iVar5 + 8);
            piVar4[-1] = *(int *)((int)piVar4 + iVar5 + 0xc);
            *piVar4 = *(int *)((int)piVar4 + iVar5 + 0x10);
            FUN_0064a320((int)piVar4 + iVar5 + 0x14);
            piVar4[0xc] = *(int *)((int)piVar4 + iVar5 + 0x40);
            FUN_0064a320((int)piVar4 + iVar5 + 0x44);
            piVar4[0x18] = *(int *)((int)piVar4 + iVar5 + 0x70);
            local_400 = local_400 + 1;
            piVar4 = piVar4 + 0x1e;
          } while (local_400 < *(int *)(param_1 + 0x230));
        }
        if (*(int *)(param_1 + 0x234) != 0) {
          FUN_004d8bb0(3);
        }
        *(int **)(param_1 + 0x234) = local_408;
        *(int *)(param_1 + 0x238) = local_40c;
      }
      FUN_004d8c10(&local_3dc);
      *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
      local_4._0_1_ = 0xb;
      FUN_00649ba0();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649ba0();
      local_404 = local_404 + 1;
    } while (local_404 < *(int *)(param_1 + 0x194));
  }
  FUN_006403a0(s_CameraPos_0072da4c,&local_3f0);
  *(undefined4 *)(param_1 + 0x248) = local_3f0;
  *(undefined4 *)(param_1 + 0x24c) = local_3ec;
  *(undefined4 *)(param_1 + 0x250) = local_3e8;
  FUN_004c2430(param_2);
  FUN_00549470(param_1 + 0x13c);
  FUN_00549580(param_1 + 0x13c);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

