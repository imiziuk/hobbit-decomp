
void FUN_00574c00(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  float10 fVar6;
  char acStack_d0 [4];
  float *pfStack_cc;
  undefined4 *puStack_c8;
  char *pcStack_c4;
  char *pcStack_c0;
  char *pcStack_bc;
  float local_a8;
  char *local_a4;
  undefined4 local_8c [16];
  char local_4c;
  undefined4 local_4b;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dba27;
  local_c = ExceptionList;
  pcStack_bc = s_event_mgr__HandlePainEvent_007400d4;
  pcStack_c0 = (char *)0x574c31;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4c = '\0';
  puVar5 = &local_4b;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  pcStack_bc = (char *)0x0;
  local_4 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  local_a8 = -1.0;
  pcStack_c0 = (char *)0x574c65;
  fVar6 = (float10)FUN_0053f230();
  pcStack_bc = s_obj_mgr__LockObject_Guid__0071cef0;
  local_a4 = (char *)(float)fVar6;
  pcStack_c0 = (char *)0x574c77;
  FUN_00649600();
  pcStack_bc = (char *)param_4;
  pcStack_c0 = (char *)param_3;
  local_4._0_1_ = 1;
  pcStack_c4 = (char *)0x574c99;
  iVar2 = FUN_00406ce0();
  local_4._0_1_ = 0;
  if (iVar2 == -1) {
    pcStack_bc = (char *)0x574cae;
    FUN_00649720();
  }
  else {
    uVar4 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
    piVar3 = (int *)(-(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4);
    pcStack_bc = (char *)0x574cd6;
    FUN_00649720();
    if (piVar3 != (int *)0x0) {
      pcStack_bc = (char *)0x574ce5;
      iVar2 = (**(code **)(*piVar3 + 0x24))();
      if (iVar2 != 0) {
        if ((char)piVar3[0x1f] != '\x12') {
          pcStack_bc = (char *)piVar3[0x6c];
          pcStack_c0 = (char *)local_8c;
          pcStack_c4 = (char *)0x574df7;
          FUN_004675a0();
          pcStack_bc = (char *)local_8c[0];
          pcStack_c0 = &local_4c;
          local_4._0_1_ = 2;
          pcStack_c4 = (char *)0x574e0e;
          FUN_00647d10();
          local_4._0_1_ = 0;
          pcStack_bc = (char *)0x574e21;
          FUN_00649ba0();
          goto LAB_00574e21;
        }
        pcStack_bc = (char *)0x574cfc;
        FUN_0041bcc0();
        pcStack_c0 = &local_4c;
        pcStack_bc = s_BILBO_0072023c;
        pcStack_c4 = (char *)0x574d0d;
        FUN_00647d10();
        pcStack_bc = (char *)0x0;
        pcStack_c0 = (char *)0x574d18;
        pcStack_bc = (char *)FUN_0053f310();
        pcStack_c0 = (char *)local_8c;
        pcStack_c4 = (char *)0x574d23;
        FUN_00647d10();
        puStack_c8 = local_8c;
        pcStack_c4 = s_STING_SWING_007400c8;
        pfStack_cc = (float *)0x574d32;
        iVar2 = FUN_00647ed0();
        if (iVar2 == 0) {
LAB_00574dca:
          pcStack_bc = (char *)0x574dd1;
          fVar6 = (float10)FUN_004272a0();
          local_a8 = (float)fVar6;
        }
        else {
          pcStack_c0 = (char *)local_8c;
          pcStack_bc = s_STAFF_SWING_007400bc;
          pcStack_c4 = (char *)0x574d4c;
          iVar2 = FUN_00647ed0();
          if (iVar2 == 0) goto LAB_00574dca;
          pcStack_c0 = (char *)local_8c;
          pcStack_bc = s_STAFF_AE_JUMP_007400ac;
          pcStack_c4 = (char *)0x574d62;
          iVar2 = FUN_00647ed0();
          if (iVar2 == 0) {
            pcStack_bc = (char *)0x574d70;
            fVar6 = (float10)FUN_00427320();
            local_a8 = (float)fVar6;
            pcStack_bc = (char *)0x574d7b;
            fVar6 = (float10)FUN_00427340();
            local_a4 = (char *)(float)(fVar6 * (float10)(float)local_a4);
          }
          else {
            pcStack_c0 = (char *)local_8c;
            pcStack_bc = s_STING_JUMP_007400a0;
            pcStack_c4 = (char *)0x574d97;
            iVar2 = FUN_00647ed0();
            if (iVar2 != 0) {
              pcStack_c0 = (char *)local_8c;
              pcStack_bc = s_STAFF_JUMP_00740094;
              pcStack_c4 = (char *)0x574dad;
              iVar2 = FUN_00647ed0();
              if (iVar2 != 0) {
                pcStack_c0 = (char *)local_8c;
                pcStack_bc = s_THROW_0074008c;
                pcStack_c4 = (char *)0x574dc3;
                iVar2 = FUN_00647ed0();
                if (iVar2 == 0) goto LAB_00574dca;
                goto LAB_00574e21;
              }
            }
            pcStack_bc = (char *)0x574dde;
            fVar6 = (float10)FUN_004272d0();
            local_a8 = (float)fVar6;
          }
        }
LAB_00574e21:
        pcStack_c0 = &local_4c;
        pcStack_bc = &DAT_0073fe00;
        pcStack_c4 = (char *)0x574e30;
        FUN_00647dc0();
      }
    }
  }
  pcStack_bc = s_obj_mgr__LockObject_Guid__0071cef0;
  pcStack_c0 = (char *)0x574e41;
  FUN_00649600();
  iVar1 = (int)*(short *)(&DAT_0076cd88 + ((param_3 ^ param_4) * -0xfb & 0xfff) * 2);
  for (iVar2 = iVar1; iVar2 != -1; iVar2 = (int)*(short *)(DAT_0076f648 + iVar2 * 0x14 + 0xe)) {
  }
  if (iVar1 == -1) {
LAB_00574ed7:
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_bc = (char *)0x574ee7;
    FUN_00649720();
    uVar4 = 0;
  }
  else {
    do {
      iVar2 = *(int *)(DAT_0076f648 + iVar1 * 0x14);
      if (((iVar2 != 0) && (*(uint *)(iVar2 + 8) == param_3)) && (*(uint *)(iVar2 + 0xc) == param_4)
         ) {
        if (iVar1 == -1) goto LAB_00574ed7;
        uVar4 = *(uint *)(DAT_0076f648 + iVar1 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        uVar4 = -(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4;
        pcStack_bc = (char *)0x574f0f;
        FUN_00649720();
        goto LAB_00574f0f;
      }
      iVar1 = (int)*(short *)(DAT_0076f648 + iVar1 * 0x14 + 0xe);
    } while (iVar1 != -1);
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_bc = (char *)0x574ece;
    FUN_00649720();
    uVar4 = 0;
  }
LAB_00574f0f:
  pcStack_bc = (char *)0x574f14;
  iVar2 = FUN_0041bcc0();
  if ((uVar4 == 0) || (*(char *)(uVar4 + 0x7c) != '\x12')) {
LAB_00574f6d:
    pcStack_bc = (char *)0x0;
    pcStack_c0 = (char *)0x574f75;
    pcStack_bc = (char *)FUN_0053f310();
LAB_00574f7b:
    pcStack_c0 = &local_4c;
    pcStack_c4 = (char *)0x574f80;
    FUN_00647dc0();
  }
  else {
    if (*(int *)(iVar2 + 0x3c0) != 0) {
      pcStack_bc = (char *)0x0;
      pcStack_c0 = (char *)0x574f32;
      pcStack_bc = (char *)FUN_0053f310();
      pcStack_c0 = (char *)local_8c;
      pcStack_c4 = (char *)0x574f3d;
      FUN_00647d10();
      puStack_c8 = local_8c;
      pcStack_c4 = s_STING_SWING_007400c8;
      pfStack_cc = (float *)0x574f4c;
      iVar2 = FUN_00647ed0();
      if (iVar2 != 0) {
        pcStack_c0 = (char *)local_8c;
        pcStack_bc = s_STING_JUMP_007400a0;
        pcStack_c4 = (char *)0x574f62;
        iVar2 = FUN_00647ed0();
        if (iVar2 != 0) goto LAB_00575050;
      }
      goto LAB_00574f6d;
    }
    if (*(int *)(iVar2 + 0x3d0) != 0) {
      pcStack_bc = (char *)0x0;
      pcStack_c0 = (char *)0x575093;
      pcStack_bc = (char *)FUN_0053f310();
      pcStack_c0 = (char *)local_8c;
      pcStack_c4 = (char *)0x57509e;
      FUN_00647d10();
      puStack_c8 = local_8c;
      pcStack_c4 = s_STING_SWING_007400c8;
      pfStack_cc = (float *)0x5750ad;
      iVar2 = FUN_00647ed0();
      if (iVar2 == 0) {
        pcStack_c0 = (char *)local_8c;
        pcStack_bc = s_STAFF_SWING_007400bc;
        pcStack_c4 = (char *)0x5750c3;
        FUN_00647d10();
      }
      pcStack_bc = (char *)local_8c;
      goto LAB_00574f7b;
    }
  }
  if (DAT_006e92e4 < local_a8) {
    pcStack_c0 = &local_4c;
    pcStack_bc = &DAT_0073fe00;
    pcStack_c4 = (char *)0x574fa3;
    FUN_00647dc0();
    pcStack_c4 = (char *)0x574fac;
    pcStack_c4 = (char *)__ftol();
    pfStack_cc = &local_a8;
    puStack_c8 = (undefined4 *)&DAT_007328e4;
    acStack_d0[0] = -0x44;
    acStack_d0[1] = 'O';
    acStack_d0[2] = 'W';
    acStack_d0[3] = '\0';
    FUN_00649920();
    local_4._0_1_ = 4;
    pcStack_bc = (char *)0x574fce;
    pcStack_bc = (char *)FUN_00649940();
    pcStack_c0 = &local_4c;
    pcStack_c4 = (char *)0x574fd9;
    FUN_00647dc0();
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_bc = (char *)0x574fec;
    FUN_00649950();
  }
  pcStack_bc = &local_4c;
  pcStack_c0 = (char *)0x574ff6;
  iVar2 = FUN_00647cf0();
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if ((&local_4c)[iVar1] == ' ') {
        (&local_4c)[iVar1] = '_';
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  pcStack_bc = (char *)0x0;
  pcStack_c0 = (char *)0xffffffff;
  pcStack_c4 = local_a4;
  local_a4 = acStack_d0;
  FUN_004357e0(param_2);
  FUN_00572ce0(&local_4c,param_3,param_4);
LAB_00575050:
  local_4 = 0xffffffff;
  pcStack_bc = (char *)0x575064;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

