
void __thiscall FUN_006a4140(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined1 auStack_c8 [4];
  undefined4 uStack_c4;
  int iStack_c0;
  int *piStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  int local_9c;
  int local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e79a8;
  pvStack_c = ExceptionList;
  piStack_b0 = (int *)s_ui_listbox__Render_00755d08;
  piStack_b4 = (int *)0x6a416f;
  ExceptionList = &pvStack_c;
  FUN_006501d0();
  uVar5 = param_1[0xb];
  local_4 = 0;
  if ((uVar5 & 1) != 0) {
    local_7c = param_1[0x14] + param_3;
    local_84 = param_1[0x12] + param_3;
    local_80 = param_1[0x13] + param_2;
    local_64 = param_1[0x11] + param_2;
    iVar3 = 0;
    local_5c = local_80;
    if (param_1[0x3d] != 0) {
      local_5c = local_80 + -0x13;
    }
    local_88 = local_5c;
    if ((uVar5 & 0x100) == 0) {
      uVar1 = uVar5 & 0x600;
      if (uVar1 == 0x400) {
        local_78 = (int *)0x1;
      }
      else if (uVar1 == 0x200) {
        local_78 = (int *)0x2;
      }
      else {
        local_78 = (int *)0x3;
        if (uVar1 != 0x600) {
          local_78 = (int *)0x0;
        }
      }
      local_8c = CONCAT13(0xff,(undefined3)local_8c);
    }
    else {
      local_78 = (int *)0x4;
      local_8c = local_8c & 0xffffff;
    }
    local_60 = local_84;
    local_58 = local_7c;
    local_30 = local_64;
    local_2c = local_84;
    local_28 = local_80;
    local_24 = local_7c;
    if ((uVar5 & 0x400) != 0) {
      piStack_b8 = (int *)param_1[2];
      piStack_b0 = (int *)(~uVar5 >> 9 & 1);
      piStack_b4 = &local_30;
      piStack_bc = (int *)0x6a4273;
      FUN_006a0430();
    }
    local_20 = local_64 + 1;
    local_18 = local_5c + -1;
    local_1c = local_60 + 1;
    piStack_b0 = (int *)0x0;
    piStack_b4 = param_1 + 0x61;
    piStack_b8 = &local_20;
    local_14 = local_58 + -1;
    piStack_bc = (int *)0x6a42bb;
    FUN_0069fcd0();
    local_74 = local_64 + 2;
    local_70 = local_60 + 4;
    local_68 = local_60 + 0x14;
    piStack_b0 = &local_64;
    local_6c = local_5c + -4;
    piStack_b4 = (int *)0x6a42f3;
    FUN_006a17c0();
    if (0 < param_1[0x60]) {
      do {
        iVar4 = param_1[0x5f] + iVar3;
        if ((-1 < iVar4) && (iVar4 < param_1[0x58])) {
          if ((iVar4 == param_1[0x5d]) && (param_1[0x3b] != 0)) {
            piStack_b0 = (int *)0x0;
            if ((param_1[0xb] & 0x200U) == 0) {
              piStack_b4 = &local_9c;
              piStack_b8 = &local_74;
              local_9c = -0x3fffc39c;
              piStack_bc = (int *)0x6a43a2;
              FUN_0069fcd0();
            }
            else {
              piStack_b4 = &local_98;
              piStack_b8 = &local_74;
              local_98 = -0x3fff9b60;
              piStack_bc = (int *)0x6a4360;
              FUN_0069fcd0();
              if ((param_1[0xb] & 0x400U) != 0) {
                piStack_b8 = (int *)param_1[2];
                piStack_b0 = (int *)0x1;
                piStack_b4 = &local_74;
                piStack_bc = (int *)0x6a437b;
                FUN_006a0430();
              }
            }
          }
          local_91 = *(undefined1 *)(iVar4 * 0x58 + 0x57 + param_1[0x59]);
          piStack_b8 = (int *)(iVar4 * 0x58 + param_1[0x59]);
          local_92 = *(undefined1 *)((int)piStack_b8 + 0x56);
          local_93 = *(undefined1 *)((int)piStack_b8 + 0x55);
          local_94 = (undefined1)piStack_b8[0x15];
          local_8d = local_8c._3_1_;
          if (*piStack_b8 == 0) {
            local_91 = 0xff;
            local_92 = 0x80;
            local_93 = 0x80;
            local_94 = 0x80;
            local_8d = 0;
          }
          local_8e = 0;
          local_8f = 0;
          local_90 = 0;
          iVar4 = *param_1;
          local_54 = local_74;
          local_50 = local_70;
          local_4c = local_6c;
          piStack_b0 = (int *)&local_90;
          local_48 = local_68;
          piStack_b4 = (int *)&local_94;
          local_10 = auStack_c8;
          FUN_0042fda0(&local_54);
          (**(code **)(iVar4 + 0x88))();
        }
        local_70 = local_70 + 0x10;
        local_68 = local_68 + 0x10;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[0x60]);
    }
    piStack_b0 = (int *)0x6a448a;
    FUN_006a1990();
    if (param_1[0x3b] != 0) {
      if (param_1[0x3c] == 0) {
        if (param_1[0x55] != 0) {
          piStack_b8 = (int *)param_1[2];
          piStack_b0 = (int *)0x0;
          piStack_b4 = &local_30;
          piStack_bc = (int *)0x6a44f5;
          FUN_006a0430();
        }
      }
      else {
        iStack_c0 = param_1[0x3e];
        piStack_b0 = (int *)0x0;
        piStack_b4 = &local_9c;
        piStack_b8 = (int *)0x0;
        piStack_bc = &local_64;
        local_9c = -1;
        uStack_c4 = 0x6a44d3;
        FUN_0069f570();
      }
      piVar6 = local_78;
      local_50 = local_84;
      local_48 = local_84 + 0x16;
      param_1[0x46] = local_88;
      param_1[0x47] = local_84;
      param_1[0x48] = local_80;
      param_1[0x49] = local_48;
      local_34 = local_7c;
      local_3c = local_7c + -0x16;
      param_1[0x4a] = local_88;
      param_1[0x4b] = local_3c;
      param_1[0x4c] = local_80;
      param_1[0x4d] = local_7c;
      local_54 = local_88;
      local_4c = local_80;
      local_40 = local_88;
      local_38 = local_80;
      local_84 = local_48;
      local_7c = local_3c;
      if (param_1[0x3d] != 0) {
        iStack_c0 = param_1[0x41];
        piStack_b0 = (int *)0x0;
        piStack_b4 = &local_9c;
        piStack_b8 = local_78;
        piStack_bc = &local_88;
        local_9c = -1;
        uStack_c4 = 0x6a45a3;
        FUN_0069f570();
        iStack_c0 = param_1[0x40];
        piStack_b0 = (int *)0x0;
        piStack_b4 = &local_9c;
        piStack_b8 = piVar6;
        piStack_bc = &local_54;
        local_9c = -1;
        uStack_c4 = 0x6a45cf;
        FUN_0069f570();
        iStack_c0 = param_1[0x3f];
        piStack_b0 = (int *)0x0;
        piStack_b4 = &local_9c;
        piStack_b8 = piVar6;
        piStack_bc = &local_40;
        local_9c = -1;
        uStack_c4 = 0x6a45fb;
        FUN_0069f570();
        local_88 = local_88 + 2;
        local_84 = local_84 + 2;
        local_7c = local_7c + -2;
        local_80 = local_80 + -2;
        iVar4 = 0;
        iVar3 = 0;
        local_9c = 0;
        if (0 < param_1[0x58]) {
          piVar2 = (int *)param_1[0x59];
          do {
            if (*piVar2 != 0) {
              iVar4 = iVar4 + 1;
            }
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 0x16;
            local_9c = iVar4;
          } while (iVar3 < param_1[0x58]);
        }
        local_98 = param_1[0x60];
        if (local_98 < local_9c) {
          uVar5 = local_7c - local_84;
          piStack_b0 = (int *)0x6a467f;
          local_8c = uVar5;
          local_9c = __ftol();
          if (local_9c < 0x10) {
            local_9c = 0x10;
          }
          local_98 = uVar5 - local_9c;
          piStack_b0 = (int *)0x6a46b7;
          iVar3 = __ftol();
          local_7c = iVar3 + local_9c + local_84;
          local_84 = iVar3 + local_84;
          piVar6 = local_78;
        }
        iStack_c0 = param_1[0x42];
        piStack_b0 = (int *)0x0;
        piStack_b4 = &local_9c;
        piStack_bc = &local_88;
        local_9c = -1;
        uStack_c4 = 0x6a46fe;
        piStack_b8 = piVar6;
        FUN_0069f570();
      }
      param_1[0x4e] = local_88;
      param_1[0x4f] = local_84;
      param_1[0x50] = local_80;
      param_1[0x51] = local_7c;
    }
    iVar3 = 0;
    if (0 < param_1[6]) {
      do {
        piStack_b0 = (int *)(param_1[0x12] + param_3);
        piStack_b4 = (int *)(param_1[0x11] + param_2);
        piStack_b8 = (int *)0x6a474d;
        (**(code **)(**(int **)(param_1[7] + iVar3 * 4) + 8))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[6]);
    }
  }
  local_4 = 0xffffffff;
  piStack_b0 = (int *)0x6a4769;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

