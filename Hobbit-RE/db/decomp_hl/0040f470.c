
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0040f470(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int *local_b0;
  undefined1 *local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [12];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_5c;
  undefined1 local_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006cedf0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00647d10(param_1,param_2);
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x88) = *param_9;
  *(undefined4 *)(param_1 + 0x8c) = param_9[1];
  *(undefined4 *)(param_1 + 0x90) = param_9[2];
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x437a0000;
  *(undefined4 *)(param_1 + 0xa0) = 0x437a0000;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x100) = DAT_0071e940;
  FUN_00649920(&local_b0,s_WaterPuzzleSwitch__s_0071ea34,param_2);
  uVar10 = 0;
  local_c = 0;
  uVar3 = FUN_00649940(0);
  uVar9 = FUN_0054c210(uVar3,uVar10);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  local_c = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_b0,s_AA_Switch_Water_Room__s_0071ea1c,param_2);
  uVar10 = 0;
  local_c = 1;
  uVar3 = FUN_00649940(0);
  uVar9 = FUN_0054c210(uVar3,uVar10);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  local_c = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_b0,s_WaterPuzzleInfluencer__s_0071ea00,param_2);
  uVar10 = 0;
  local_c = 2;
  uVar3 = FUN_00649940(0);
  uVar9 = FUN_0054c210(uVar3,uVar10);
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  local_c = 0xffffffff;
  FUN_00649950();
  uVar9 = FUN_0054c210(s_WaterPuzzleCursor_0071e9ec,0);
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  uVar9 = FUN_0054c210(param_3,0);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  uVar9 = FUN_0054c210(param_4,0);
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  uVar9 = FUN_0054c210(param_5,0);
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  uVar9 = FUN_0054c210(param_6,0);
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  uVar9 = FUN_0054c210(param_7,0);
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  uVar9 = FUN_0054c210(param_8,0);
  *(undefined8 *)(param_1 + 0x78) = uVar9;
  *(undefined4 *)(param_1 + 0x20) = 1;
  if (*(int *)(param_1 + 0x30) == 0 && *(int *)(param_1 + 0x34) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x38) == 0 && *(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x40) == 0 && *(int *)(param_1 + 0x44) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x48) == 0 && *(int *)(param_1 + 0x4c) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  FUN_0040f380();
  local_a8 = 0;
  local_a4 = 0;
  local_ac = (undefined1 *)(param_1 + 0x8c0);
  piVar6 = (int *)(param_1 + 0x4f8);
  do {
    iVar7 = 0;
    do {
      *local_ac = 0;
      *piVar6 = 0;
      piVar6[1] = 0;
      FUN_00649920(&local_b0,s_WP__s__1d__1d_0071e9dc,param_1,iVar7,local_a4);
      uVar10 = 0;
      local_c = 3;
      uVar3 = FUN_00649940(0);
      uVar9 = FUN_0054c210(uVar3,uVar10);
      *(undefined8 *)piVar6 = uVar9;
      local_c = 0xffffffff;
      FUN_00649950();
      if (*piVar6 != 0 || piVar6[1] != 0) {
        local_a8 = local_a8 + 1;
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 2;
      local_ac = local_ac + 1;
    } while (iVar7 < 0xb);
    local_a4 = local_a4 + 1;
  } while (local_a4 < 0xb);
  FUN_0064e7d0(s_FOUND__d_Canals_0071e9c8,local_a8);
  local_ac = (undefined1 *)0x1;
  puVar8 = (uint *)(param_1 + 0x110);
  local_a4 = 0xb;
  do {
    local_a8 = 1;
    do {
      FUN_0064f190(local_58,s_WP__s__1d__1d_0071e9dc,param_1,local_a8,local_ac);
      FUN_00649920(local_90,&DAT_0071e9bc,local_58,&DAT_0071e9c4);
      uVar10 = 0;
      local_c = 4;
      uVar3 = FUN_00649940(0);
      uVar9 = FUN_0054c210(uVar3,uVar10);
      local_c = 0xffffffff;
      local_80 = uVar9;
      FUN_00649950();
      FUN_00649920(local_8c,&DAT_0071e9bc,local_58,&DAT_0071e9b8);
      uVar10 = 0;
      local_c = 5;
      uVar3 = FUN_00649940(0);
      uVar9 = FUN_0054c210(uVar3,uVar10);
      local_c = 0xffffffff;
      local_78 = uVar9;
      FUN_00649950();
      FUN_00649920(local_98,&DAT_0071e9bc,local_58,&DAT_0071e9b4);
      uVar10 = 0;
      local_c = 6;
      uVar3 = FUN_00649940(0);
      uVar9 = FUN_0054c210(uVar3,uVar10);
      local_c = 0xffffffff;
      local_70 = uVar9;
      FUN_00649950();
      FUN_00649920(local_94,&DAT_0071e9bc,local_58,&DAT_0071e9b0);
      uVar10 = 0;
      local_c = 7;
      uVar3 = FUN_00649940(0);
      uVar9 = FUN_0054c210(uVar3,uVar10);
      local_c = 0xffffffff;
      local_68 = uVar9;
      FUN_00649950();
      uVar4 = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      while (*(int *)(&local_80 + uVar4) == 0 && *(int *)((int)&local_80 + uVar4 * 8 + 4) == 0) {
        uVar4 = uVar4 + 1;
        if (3 < (int)uVar4) goto LAB_0040fb12;
      }
      local_a0 = *(uint *)(&local_80 + uVar4);
      local_9c = *(uint *)((int)&local_80 + uVar4 * 8 + 4);
      *puVar8 = local_a0;
      puVar8[1] = local_9c;
      puVar8[2] = uVar4;
      FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
      iVar5 = (int)*(short *)(&DAT_0076cd88 + ((local_a0 ^ local_9c) * -0xfb & 0xfff) * 2);
      for (iVar7 = iVar5; iVar7 != -1; iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe)) {
      }
      if (iVar5 == -1) {
LAB_0040f9e4:
        local_c = 0xffffffff;
        FUN_00649720();
        piVar6 = (int *)0x0;
      }
      else {
        do {
          local_b0 = (int *)(DAT_0076f648 + iVar5 * 0x14);
          iVar7 = *local_b0;
          if (((iVar7 != 0) && (local_5c = *(uint *)(iVar7 + 0xc), *(uint *)(iVar7 + 8) == local_a0)
              ) && (local_5c == local_9c)) {
            if (iVar5 == -1) goto LAB_0040f9e4;
            local_b0 = *(int **)(DAT_0076f648 + iVar5 * 0x14);
            local_c = 0xffffffff;
            FUN_00649720();
            piVar6 = local_b0;
            goto LAB_0040fa1c;
          }
          iVar5 = (int)*(short *)((int)local_b0 + 0xe);
        } while (iVar5 != -1);
        local_c = 0xffffffff;
        FUN_00649720();
        piVar6 = (int *)0x0;
      }
LAB_0040fa1c:
      *(byte *)((int)piVar6 + 0x7f) = *(byte *)((int)piVar6 + 0x7f) & 0xfe ^ 1;
      iVar7 = (**(code **)(*piVar6 + 0x30))();
      local_b0 = (int *)(*(float *)(iVar7 + 4) * _DAT_006e9560 * _DAT_006e955c);
      uVar3 = __ftol();
      FUN_0064e7d0(s_InitialR__3d_0071e9a0,uVar3);
      piVar6 = local_b0;
      if ((float)local_b0 < DAT_006e92e4 != (NAN((float)local_b0) || NAN(DAT_006e92e4))) {
        do {
          local_b0 = (int *)((float)local_b0 + _DAT_006e9558);
          piVar6 = local_b0;
        } while ((float)local_b0 < DAT_006e92e4 != (NAN((float)local_b0) || NAN(DAT_006e92e4)));
      }
      for (; _DAT_006e9558 < (float)piVar6; piVar6 = (int *)((float)piVar6 - _DAT_006e9558)) {
      }
      puVar8[3] = 0xffffffff;
      local_b0 = (int *)0x0;
      do {
        fVar2 = (float)piVar6 - (float)(int)local_b0;
        if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
          fVar2 = -fVar2;
        }
        if (fVar2 < _DAT_006e9554 != (NAN(fVar2) || NAN(_DAT_006e9554))) {
          uVar4 = (int)local_b0 / 0x5a & 0x80000003;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
          }
          puVar8[3] = uVar4;
          FUN_0064e7d0(s_Dir__3d__3d_0071e990,uVar4 * 0x5a,uVar4);
          break;
        }
        local_b0 = (int *)((int)local_b0 + 0x5a);
      } while ((int)local_b0 < 0x169);
      puVar8[4] = puVar8[3];
LAB_0040fb12:
      puVar8[5] = local_a4 + 1 + local_a8;
      puVar8[6] = ((int)local_ac + 1) * 0xb + local_a8;
      uVar4 = local_a4 + -1 + local_a8;
      uVar1 = local_a4 + -0xb + local_a8;
      local_a8 = local_a8 + 2;
      puVar8[7] = uVar4;
      puVar8[8] = uVar1;
      puVar8 = puVar8 + 10;
    } while (local_a8 < 0xb);
    local_a4 = local_a4 + 0x16;
    local_ac = (undefined1 *)((int)local_ac + 2);
    if (0x78 < local_a4) {
      FUN_004104c0();
      ExceptionList = local_14;
      return;
    }
  } while( true );
}

