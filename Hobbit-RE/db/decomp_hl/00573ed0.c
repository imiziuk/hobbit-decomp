
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573ed0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  char *pcVar12;
  char *local_1ec;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int *local_1cc;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  char *local_190 [6];
  undefined1 local_178;
  undefined4 local_177;
  undefined1 local_138 [44];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db9a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_event_mgr__HandleContactAudioEve_0073ffa8);
  local_178 = 0;
  puVar6 = &local_177;
  for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_4 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  uVar4 = FUN_0053f310(0);
  FUN_00647d10(&local_178,uVar4);
  local_1ec = (char *)0x0;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar8 = FUN_00406ce0(param_3,param_4);
  local_4._0_1_ = 0;
  if (iVar8 == -1) {
    FUN_00649720();
    local_1cc = (int *)0x0;
LAB_00573f8e:
    if ((DAT_00772cd4 != 0) || (DAT_00772cd8 != 0)) {
      FUN_0064e870(7,s_CONTACT__BADOBJCT____s_0073ff8c,&local_178);
    }
  }
  else {
    uVar9 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
    piVar10 = (int *)(-(uint)((*(byte *)(uVar9 + 0x7f) & 0x10) != 0) & uVar9);
    FUN_00649720();
    local_1cc = piVar10;
    if ((piVar10 == (int *)0x0) || ((char)piVar10[0x1f] != '\x12')) goto LAB_00573f8e;
    iVar8 = piVar10[0x2a];
    iVar7 = piVar10[0x2b];
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 2;
    iVar8 = FUN_00406ce0(iVar8,iVar7);
    local_4._0_1_ = 0;
    if (iVar8 == -1) {
      FUN_00649720();
      goto LAB_005746e4;
    }
    uVar9 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
    uVar9 = -(uint)((*(byte *)(uVar9 + 0x7f) & 0x10) != 0) & uVar9;
    FUN_00649720();
    if ((uVar9 == 0) ||
       (((cVar3 = *(char *)(uVar9 + 0x7c), cVar3 != '\x0e' && (cVar3 != '\x05')) &&
        (cVar3 != '\x06')))) goto LAB_005746e4;
    cVar3 = FUN_004d1120();
    switch(cVar3) {
    case '\x01':
      pcVar12 = s_Stone_0073ff84;
      break;
    case '\x02':
      pcVar12 = &DAT_0073ff7c;
      break;
    case '\x03':
      pcVar12 = s_Leaves_0073ff74;
      break;
    case '\x04':
      pcVar12 = s_Grass_0073ff6c;
      break;
    case '\x05':
      pcVar12 = s_Water_0072a5f4;
      break;
    case '\x06':
      pcVar12 = &DAT_0072dcf8;
      break;
    case '\a':
      pcVar12 = &DAT_00723054;
      break;
    case '\b':
      pcVar12 = s_Grass_0073ff6c;
      break;
    case '\t':
      uVar4 = FUN_0052a650();
      switch(uVar4) {
      case 0:
      case 1:
      case 3:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
        local_1ec = s_BoardCreak_0073ff60;
        break;
      case 2:
        local_1ec = s_RaftCreak_0073ff54;
        break;
      case 4:
      case 5:
        local_1ec = s_RopeBridgeCreak_0073ff44;
      }
      goto switchD_00574112_default;
    default:
      pcVar12 = &DAT_0073ff7c;
    }
    local_1ec = (char *)FUN_00647dc0(&local_178,pcVar12);
switchD_00574112_default:
    if ((char)piVar10[0x1f] == '\x12') {
      iVar8 = FUN_0041bcc0();
      if (*(int *)(iVar8 + 0x8c4) != 0) {
        local_1ec = s_BilboWadeWater_0073ff34;
      }
      iVar8 = FUN_0041bcc0();
      if (*(int *)(iVar8 + 0x4668) != 0) {
        iVar8 = FUN_0041bcc0();
        uVar4 = *(undefined4 *)(iVar8 + 0x3a50);
        uVar1 = *(undefined4 *)(iVar8 + 0x3a54);
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 3;
        iVar8 = FUN_00406ce0(uVar4,uVar1);
        local_4._0_1_ = 0;
        if (iVar8 == -1) {
          FUN_00649720();
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
          uVar9 = -(uint)((*(byte *)(uVar9 + 0x7f) & 0x10) != 0) & uVar9;
          FUN_00649720();
        }
        iVar8 = *(int *)(uVar9 + 0x188);
        if (iVar8 == 0) {
          local_1ec = s_BilboRopeClimbVine_0073ff20;
        }
        else if (iVar8 == 1) {
          local_1ec = s_BilboRopeClimbRope_00724664;
        }
        else if (iVar8 == 2) {
          local_1ec = s_BilboRopeClimbChain_00724688;
        }
        FUN_0041bcc0();
      }
    }
    iVar8 = piVar10[0x6c];
    if (((((iVar8 != 0x1a) && (iVar8 != 0x1b)) &&
         ((iVar8 != 0x1c && ((iVar8 != 0x1d && (iVar8 != 0x1e)))))) && (iVar8 != 0x1f)) &&
       ((((iVar8 != 0x20 && (iVar8 != 0x21)) && (iVar8 != 0x22)) && (iVar8 != 0x23)))) {
      pfVar5 = (float *)(**(code **)(*piVar10 + 0x38))();
      FUN_00401f00(pfVar5[3] - *pfVar5,pfVar5[4] - pfVar5[1],pfVar5[5] - pfVar5[2]);
      fStack_1d0 = (float)local_190[1] / _DAT_006f3edc;
      if ((cVar3 != '\x05') && (iVar8 = FUN_0041bcc0(), *(int *)(iVar8 + 0x748) == 2)) {
        pfVar5 = (float *)(**(code **)(*piVar10 + 0x28))();
        fStack_1dc = *pfVar5;
        fStack_1d8 = pfVar5[1];
        fStack_1d4 = pfVar5[2];
        iVar8 = (**(code **)(*piVar10 + 0x154))();
        if (DAT_0073fae4 == -1) {
          FUN_00549470(iVar8);
          FUN_00549580(iVar8);
          DAT_0073fae4 = FUN_0053cb40(s_Bilbo_Bone_Leg_Foot_L_0073ff08,0);
        }
        if (DAT_0073fae8 == -1) {
          FUN_00549470(iVar8);
          FUN_00549580(iVar8);
          DAT_0073fae8 = FUN_0053cb40(s_Bilbo_Bone_Leg_Foot_R_0073fef0,0);
        }
        iVar7 = DAT_0073fae4;
        if (*(int *)(iVar8 + 0x13c) != 0) {
          FUN_005423d0();
        }
        iVar2 = DAT_0073fae8;
        fStack_1c0 = *(float *)(*(int *)(iVar8 + 0x140) + iVar7 * 0xc);
        iVar7 = *(int *)(iVar8 + 0x140) + iVar7 * 0xc;
        fStack_1bc = *(float *)(iVar7 + 4);
        fStack_1b8 = *(float *)(iVar7 + 8);
        if (*(int *)(iVar8 + 0x13c) != 0) {
          FUN_005423d0();
        }
        iVar8 = *(int *)(iVar8 + 0x140);
        fStack_1dc = *(float *)(iVar8 + iVar2 * 0xc);
        fStack_198 = *(float *)(iVar8 + 4 + iVar2 * 0xc);
        fStack_194 = *(float *)(iVar8 + iVar2 * 0xc + 8);
        fStack_1d8 = fStack_198;
        fStack_1d4 = fStack_194;
        if (fStack_1bc < fStack_198 != (NAN(fStack_1bc) || NAN(fStack_198))) {
          fStack_1dc = fStack_1c0;
          fStack_1d8 = fStack_1bc;
          fStack_1d4 = fStack_1b8;
        }
        iVar8 = piVar10[0x2a];
        iVar7 = piVar10[0x2b];
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 4;
        iVar8 = FUN_00406ce0(iVar8,iVar7);
        local_4._0_1_ = 0;
        if (iVar8 == -1) {
          FUN_00649720();
        }
        else {
          uVar9 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
          uVar9 = -(uint)((*(byte *)(uVar9 + 0x7f) & 0x10) != 0) & uVar9;
          FUN_00649720();
          if (((uVar9 != 0) && ((*(uint *)(uVar9 + 0x10) & 0x1800) != 0)) &&
             ((*(byte *)(uVar9 + 0x127) & 8) != 0)) {
            fStack_1b0 = fStack_1d8 + _DAT_006e9554;
            fStack_1b4 = fStack_1dc;
            fStack_1a8 = fStack_1dc;
            fStack_1ac = fStack_1d4;
            fStack_1a4 = fStack_1d8 - _DAT_006e99a0;
            fStack_1a0 = fStack_1d4;
            FUN_00579720(0,0,&fStack_1b4,&fStack_1a8,0x1800);
            iVar8 = FUN_00577e70();
            uVar1 = DAT_00773524;
            uVar4 = DAT_00773520;
            if (iVar8 != 0) {
              FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
              local_4._0_1_ = 5;
              iVar8 = FUN_00406ce0(uVar4,uVar1);
              local_4._0_1_ = 0;
              if (iVar8 == -1) {
                FUN_00649720();
              }
              else {
                uVar9 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
                uVar9 = -(uint)((*(byte *)(uVar9 + 0x7f) & 0x10) != 0) & uVar9;
                FUN_00649720();
                if ((uVar9 != 0) && ((*(byte *)(uVar9 + 0x127) & 8) != 0)) {
                  piVar10[0x165c] = 0x3dcccccd;
                }
              }
            }
          }
        }
        FUN_0041b160(&fStack_1dc,fStack_1bc < fStack_198 != (NAN(fStack_1bc) || NAN(fStack_198)));
        fStack_1b4 = fStack_1d0;
        fStack_1b0 = fStack_1d0;
        fStack_1ac = fStack_1d0;
        fStack_1a8 = 0.0;
        fStack_1a4 = 0.0;
        fStack_1a0 = 0.0;
        lVar11 = FUN_00488d30(s_Footfall_00724204,&fStack_1dc,&fStack_1a8,&fStack_1b4);
        if (lVar11 != 0) {
          FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
          iVar7 = (int)*(short *)(&DAT_0076cd88 +
                                 (((uint)lVar11 ^ (uint)((ulonglong)lVar11 >> 0x20)) * -0xfb & 0xfff
                                 ) * 2);
          for (iVar8 = iVar7; iVar8 != -1;
              iVar8 = (int)*(short *)(DAT_0076f648 + iVar8 * 0x14 + 0xe)) {
          }
          while (iVar7 != -1) {
            piVar10 = (int *)(DAT_0076f648 + iVar7 * 0x14);
            iVar8 = *piVar10;
            if ((iVar8 != 0) && (lVar11 == *(longlong *)(iVar8 + 8))) {
              if (iVar7 != -1) {
                uVar9 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
                local_4._0_1_ = 0;
                piVar10 = (int *)(-(uint)((*(byte *)(uVar9 + 0x7f) & 0x10) != 0) & uVar9);
                FUN_00649720();
                goto LAB_005746c6;
              }
              break;
            }
            iVar7 = (int)*(short *)((int)piVar10 + 0xe);
          }
          local_4._0_1_ = 0;
          FUN_00649720();
          piVar10 = (int *)0x0;
LAB_005746c6:
          (**(code **)(*piVar10 + 0x100))(DAT_006e92e8 / fStack_1d0);
        }
      }
    }
    if (local_1ec != (char *)0x0) goto LAB_005746fd;
  }
LAB_005746e4:
  local_1ec = (char *)FUN_00647dc0(&local_178,&DAT_0073ff7c);
LAB_005746fd:
  local_10c[0] = '\0';
  if ((char)local_1cc[0x1f] == '\x1c') {
    local_10c[0] = '\0';
    puVar6 = (undefined4 *)FUN_00573650(local_138,param_3,param_4);
    uVar4 = *puVar6;
    FUN_00649ba0();
    FUN_00647dc0(local_10c,uVar4);
    FUN_00647dc0(local_10c,&local_178);
    local_1ec = local_10c;
  }
  iVar8 = FUN_00659650(local_1ec,param_2,1);
  if ((DAT_00772ce0 == 0) &&
     ((((iVar8 == 0 && (DAT_007edac8 == 2)) && (DAT_00772cd4 != 0)) || (DAT_00772cd8 != 0)))) {
    local_190[0] = s_FINE_0073fe3c;
    local_190[1] = s_DISTCLIP_0073fe30;
    local_190[2] = s_NOTFOUND_0073fe24;
    local_190[3] = s_PRIORITY_0073fe18;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar7 = (int)*(short *)(&DAT_0076cd88 + ((param_3 ^ param_4) * -0xfb & 0xfff) * 2);
    for (iVar8 = iVar7; iVar8 != -1; iVar8 = (int)*(short *)(DAT_0076f648 + iVar8 * 0x14 + 0xe)) {
    }
    if (iVar7 == -1) {
LAB_00574886:
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
    }
    else {
      do {
        iVar8 = *(int *)(DAT_0076f648 + iVar7 * 0x14);
        if (((iVar8 != 0) && (*(uint *)(iVar8 + 8) == param_3)) &&
           (*(uint *)(iVar8 + 0xc) == param_4)) {
          if (iVar7 == -1) goto LAB_00574886;
          uVar9 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
          local_4 = (uint)local_4._1_3_ << 8;
          uVar9 = -(uint)((*(byte *)(uVar9 + 0x7f) & 0x10) != 0) & uVar9;
          FUN_00649720();
          if (((uVar9 == 0) || (*(char *)(uVar9 + 0x7c) != '\x1c')) || (DAT_00772cdc == 0))
          goto LAB_005748d1;
          goto LAB_005748ef;
        }
        iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe);
      } while (iVar7 != -1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
    }
LAB_005748d1:
    FUN_0064e870(7,s_CONTACT___s____s_0073fedc,local_190[DAT_007edac8],local_1ec);
  }
LAB_005748ef:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

