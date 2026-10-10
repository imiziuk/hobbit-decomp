
void __thiscall
FUN_004f7e10(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  float10 fVar10;
  undefined4 uVar11;
  char *local_2a0;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6201;
  local_c = ExceptionList;
  local_2a0 = s_hud__RenderTarget_0072f984;
  ExceptionList = &local_c;
  FUN_00649600();
  local_2a0 = (char *)0x7f7fffff;
  local_4 = 0;
  FUN_00404870(0x7f7fffff,0x7f7fffff);
  local_2a0 = (char *)0xff7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff);
  if (DAT_007600e0 == 0) {
    piVar8 = (int *)(param_1 + 0xc48);
    iVar7 = 0;
    piVar6 = piVar8;
    while ((param_5 != *piVar6 || (param_6 != piVar6[1]))) {
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 2;
      if (0x4c < iVar7) goto code_r0x004f7eb7;
    }
    local_2a0 = (char *)0x4f7ee3;
    fVar10 = (float10)FUN_00557bb0();
    *(float *)(param_1 + 0xb10 + iVar7 * 4) = (float)fVar10;
    uVar2 = *(uint *)(param_1 + 0x8a8 + iVar7 * 8);
    uVar3 = *(uint *)(param_1 + 0x8ac + iVar7 * 8);
    local_2a0 = s_obj_mgr__LockObject_Guid__0071cef0;
    FUN_00649600();
    iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
    for (iVar7 = iVar4; iVar7 != -1; iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe)) {
    }
    do {
      if (iVar4 == -1) {
LAB_004f7f7c:
        local_4 = (uint)local_4._1_3_ << 8;
        local_2a0 = (char *)0x4f7f8d;
        FUN_00649720();
        piVar8 = (int *)0x0;
LAB_004f7fb6:
        local_2a0 = (char *)0x4f7fbd;
        FUN_004c73d0();
        if (param_4 == 0) {
          puVar9 = (uint *)(param_1 + 0x1390);
        }
        else {
          puVar9 = (uint *)(param_1 + 0x138c);
        }
        uVar2 = *puVar9 * 2;
        local_2a0 = (char *)((extraout_ECX & 0x7fffffff ^ (uVar2 ^ *puVar9) & 0x7fffffff ^ uVar2) &
                             0x7fffffff ^ extraout_ECX & 0x7fffffff);
        FUN_005492b0(&local_2a0,0);
        if ((int)*puVar9 < 0) {
          FUN_00549470(&local_2a0);
        }
        uVar5 = FUN_00549620(puVar9);
        FUN_00549670(&local_2a0,uVar5);
        (**(code **)(*piVar8 + 0x10c))();
        iVar7 = __ftol();
        iVar4 = 0;
        do {
          if (iVar7 < iVar4) {
            uVar5 = 1;
            if (param_3 == 0) {
              uVar11 = (&DAT_0072f438)[iVar4];
            }
            else {
              uVar11 = (&DAT_0072f488)[iVar4];
            }
          }
          else {
            uVar5 = 0;
            if (param_3 == 0) {
              uVar11 = (&DAT_0072f438)[iVar4];
            }
            else {
              uVar11 = (&DAT_0072f488)[iVar4];
            }
          }
          FUN_004d0a70(uVar11,uVar5);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x14);
        (**(code **)(*piVar8 + 0x120))(0x3f800000);
        (**(code **)(*piVar8 + 0x14))(local_4,0);
        (**(code **)(*piVar8 + 0x1c))(&stack0xfffffd64);
        local_2a0 = (char *)0x0;
        FUN_004d22c0();
        break;
      }
      piVar8 = (int *)(DAT_0076f648 + iVar4 * 0x14);
      iVar7 = *piVar8;
      if (((iVar7 != 0) && (*(uint *)(iVar7 + 8) == uVar2)) && (*(uint *)(iVar7 + 0xc) == uVar3)) {
        if (iVar4 == -1) goto LAB_004f7f7c;
        uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        piVar8 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
        local_2a0 = (char *)0x4f7fb6;
        FUN_00649720();
        goto LAB_004f7fb6;
      }
      iVar4 = (int)*(short *)((int)piVar8 + 0xe);
    } while( true );
  }
LAB_004f836f:
  local_4 = 0xffffffff;
  local_2a0 = (char *)0x4f8383;
  FUN_00649720();
  ExceptionList = local_c;
  return;
code_r0x004f7eb7:
  iVar7 = 0;
  while (*piVar8 != 0 || piVar8[1] != 0) {
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 2;
    if (0x4c < iVar7) goto LAB_004f836f;
  }
  if (iVar7 == -1) goto LAB_004f836f;
  *(int *)(param_1 + 0xc48 + iVar7 * 8) = param_5;
  *(int *)(param_1 + 0xc4c + iVar7 * 8) = param_6;
  local_2a0 = (char *)0x4f811f;
  fVar10 = (float10)FUN_00557bb0();
  *(float *)(param_1 + 0xb10 + iVar7 * 4) = (float)fVar10;
  *(undefined4 *)(param_1 + 0xeb0 + iVar7 * 4) = 7;
  puVar1 = (undefined4 *)(param_1 + (iVar7 * 3 + 0x3f9) * 4);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  uVar2 = *(uint *)(param_1 + 0x8a8 + iVar7 * 8);
  uVar3 = *(uint *)(param_1 + 0x8ac + iVar7 * 8);
  local_2a0 = s_obj_mgr__LockObject_Guid__0071cef0;
  FUN_00649600();
  iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
  for (iVar7 = iVar4; iVar7 != -1; iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe)) {
  }
  do {
    if (iVar4 == -1) {
LAB_004f81df:
      local_4 = (uint)local_4._1_3_ << 8;
      local_2a0 = (char *)0x4f81f0;
      FUN_00649720();
      piVar8 = (int *)0x0;
LAB_004f8219:
      local_2a0 = (char *)0x4f8220;
      FUN_004c73d0();
      puVar9 = (uint *)(param_1 + 0x138c);
      if (param_4 == 0) {
        puVar9 = (uint *)(param_1 + 0x1390);
      }
      uVar2 = *puVar9 * 2;
      local_2a0 = (char *)((extraout_ECX_00 & 0x7fffffff ^ (uVar2 ^ *puVar9) & 0x7fffffff ^ uVar2) &
                           0x7fffffff ^ extraout_ECX_00 & 0x7fffffff);
      FUN_005492b0(&local_2a0,0);
      if ((int)*puVar9 < 0) {
        FUN_00549470(&local_2a0);
      }
      uVar5 = FUN_00549620(puVar9);
      FUN_00549670(&local_2a0,uVar5);
      (**(code **)(*piVar8 + 0x10c))();
      iVar7 = __ftol();
      iVar4 = 0;
      do {
        if (iVar7 < iVar4) {
          uVar5 = 1;
          if (param_3 == 0) {
            uVar11 = (&DAT_0072f438)[iVar4];
          }
          else {
            uVar11 = (&DAT_0072f488)[iVar4];
          }
        }
        else {
          uVar5 = 0;
          if (param_3 == 0) {
            uVar11 = (&DAT_0072f438)[iVar4];
          }
          else {
            uVar11 = (&DAT_0072f488)[iVar4];
          }
        }
        FUN_004d0a70(uVar11,uVar5);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x14);
      (**(code **)(*piVar8 + 0x120))(0x3f800000);
      (**(code **)(*piVar8 + 0x14))(local_4,0);
      local_280 = 0;
      uStack_27c = 0;
      local_278 = 0;
      (**(code **)(*piVar8 + 0x1c))(&local_280);
      (**(code **)(*piVar8 + 0x8c))(1,0xffffffff);
      local_2a0 = (char *)0x0;
      FUN_004d22c0();
      local_2a0 = (char *)0xffffffff;
      FUN_004d0bc0(0xffffffff);
      goto LAB_004f836f;
    }
    piVar8 = (int *)(DAT_0076f648 + iVar4 * 0x14);
    iVar7 = *piVar8;
    if (((iVar7 != 0) && (*(uint *)(iVar7 + 8) == uVar2)) && (*(uint *)(iVar7 + 0xc) == uVar3)) {
      if (iVar4 == -1) goto LAB_004f81df;
      uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      local_4 = (uint)local_4._1_3_ << 8;
      piVar8 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
      local_2a0 = (char *)0x4f8219;
      FUN_00649720();
      goto LAB_004f8219;
    }
    iVar4 = (int)*(short *)((int)piVar8 + 0xe);
  } while( true );
}

