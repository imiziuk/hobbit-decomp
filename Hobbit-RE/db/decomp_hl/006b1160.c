
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b1160(void)

{
  int iVar1;
  int *extraout_ECX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  int iStack00000014;
  void *in_stack_000312d8;
  void *local_14;
  int *local_10;
  int local_c;
  float local_8;
  
  local_c = 0xffffffff;
  local_10 = (int *)&LAB_006e8230;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_006c04f0();
  iVar4 = 0;
  local_c = 0;
  local_10 = extraout_ECX;
  FUN_00642400();
  iVar1 = FUN_00642490();
  if (iVar1 == 0) {
    FUN_00649920();
    FUN_00649940();
    FUN_00649950();
  }
  FUN_006424d0();
  if (0 < *extraout_ECX) {
    local_14 = (void *)0x0;
    do {
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642c70();
      iVar4 = iVar4 + 1;
      local_14 = (void *)((int)local_14 + 0x130);
    } while (iVar4 < *extraout_ECX);
  }
  FUN_006424d0();
  iVar1 = 0;
  if (0 < extraout_ECX[3]) {
    local_14 = (void *)0x0;
    do {
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642c70();
      iVar1 = iVar1 + 1;
      local_14 = (void *)((int)local_14 + 0x160);
    } while (iVar1 < extraout_ECX[3]);
  }
  FUN_006424d0();
  local_14 = (void *)0x0;
  if (0 < extraout_ECX[3]) {
    iStack0000000c = 0;
    do {
      iVar1 = local_10[4] + iStack0000000c;
      iVar4 = 0;
      if (0 < *(int *)(local_10[4] + 0x1c + iStack0000000c)) {
        iVar2 = iVar1 + 0xc1;
        do {
          local_8 = (float)*(byte *)(iVar2 + 2) * _DAT_006ed3a4;
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642c70();
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < *(int *)(iVar1 + 0x1c));
      }
      local_14 = (void *)((int)local_14 + 1);
      iStack0000000c = iStack0000000c + 0x160;
    } while ((int)local_14 < local_10[3]);
  }
  FUN_006424d0();
  local_14 = (void *)0x0;
  if (0 < local_10[3]) {
    iStack00000010 = 0;
    do {
      iVar1 = local_10[4];
      if (0 < *(int *)(iVar1 + 0x14 + iStack00000010)) {
        iVar4 = 0;
        do {
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642c70();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + iStack00000010 + 0x14));
      }
      local_14 = (void *)((int)local_14 + 1);
      iStack00000010 = iStack00000010 + 0x160;
    } while ((int)local_14 < local_10[3]);
  }
  FUN_006424d0();
  local_14 = (void *)0x0;
  if (0 < local_10[3]) {
    iStack00000008 = 0;
    do {
      iVar1 = local_10[4];
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x18 + iStack00000008)) {
        do {
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642c70();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + iStack00000008 + 0x18));
      }
      iStack00000008 = iStack00000008 + 0x160;
      local_14 = (void *)((int)local_14 + 1);
    } while ((int)local_14 < local_10[3]);
  }
  FUN_006424d0();
  local_14 = (void *)0x0;
  if (0 < local_10[3]) {
    iStack00000014 = 0;
    do {
      iVar1 = local_10[4];
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x10 + iStack00000014)) {
        do {
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642c70();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + iStack00000014 + 0x10));
      }
      iStack00000014 = iStack00000014 + 0x160;
      local_14 = (void *)((int)local_14 + 1);
    } while ((int)local_14 < local_10[3]);
  }
  piVar3 = local_10;
  FUN_006424d0();
  iVar1 = 0;
  if (0 < piVar3[5]) {
    iVar4 = 0;
    do {
      iVar2 = local_10[6];
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642c70();
      local_c = local_c + *(int *)(iVar2 + iVar4 + 4);
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x5c;
      piVar3 = local_10;
    } while (iVar1 < local_10[5]);
  }
  FUN_006424d0();
  local_14 = (void *)0x0;
  if (0 < piVar3[5]) {
    local_c = 0;
    do {
      iVar4 = local_10[6] + local_c;
      iVar1 = 0;
      if (0 < *(int *)(local_10[6] + 4 + local_c)) {
        do {
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642c70();
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(iVar4 + 4));
      }
      local_c = local_c + 0x5c;
      local_14 = (void *)((int)local_14 + 1);
    } while ((int)local_14 < local_10[5]);
  }
  piVar3 = local_10;
  FUN_006424d0();
  iVar1 = 0;
  if (0 < piVar3[0xb]) {
    do {
      FUN_00642590();
      FUN_00642590();
      FUN_00642c70();
      iVar1 = iVar1 + 1;
      piVar3 = local_10;
    } while (iVar1 < local_10[0xb]);
  }
  FUN_006424d0();
  iVar1 = 0;
  if (0 < piVar3[7]) {
    do {
      FUN_00642590();
      FUN_00642590();
      FUN_00642c70();
      iVar1 = iVar1 + 1;
      piVar3 = local_10;
    } while (iVar1 < local_10[7]);
  }
  FUN_006424d0();
  if (0 < piVar3[9]) {
    local_c = 0;
    iVar1 = 0;
    do {
      iVar4 = piVar3[10] + local_c;
      FUN_00647d10();
      switch(*(undefined4 *)(iVar4 + 0x108)) {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
      }
      FUN_00647d10();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642c70();
      local_c = local_c + 0x338;
      iVar1 = iVar1 + 1;
      piVar3 = local_10;
    } while (iVar1 < local_10[9]);
  }
  FUN_006424d0();
  local_14 = (void *)0x0;
  if (0 < piVar3[9]) {
    local_c = 0;
    do {
      iVar1 = piVar3[10] + local_c;
      iVar4 = 0;
      if (0 < *(int *)(piVar3[10] + 0x134 + local_c)) {
        iVar2 = iVar1 + 0x175;
        do {
          switch(*(undefined4 *)(iVar2 + -0x3d)) {
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
          }
          FUN_00647d10();
          switch(*(undefined4 *)(iVar2 + -0x35)) {
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
            break;
          case 9:
            break;
          case 10:
            break;
          case 0xb:
            break;
          case 0xc:
            break;
          case 0xd:
            break;
          case 0xe:
            break;
          case 0xf:
            break;
          case 0x10:
            break;
          case 0x11:
          }
          FUN_00647d10();
          FUN_00647d10();
          FUN_00647d10();
          FUN_00647d10();
          FUN_00647d10();
          switch(*(undefined4 *)(iVar2 + -0x21)) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          default:
            goto switchD_006b1ffb_default;
          }
          FUN_00647d10();
switchD_006b1ffb_default:
          switch(*(undefined4 *)(iVar2 + -0xd)) {
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
          }
          FUN_00647d10();
          FUN_00647d10();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642590();
          FUN_00642c70();
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 0x40;
          piVar3 = local_10;
        } while (iVar4 < *(int *)(iVar1 + 0x134));
      }
      local_14 = (void *)((int)local_14 + 1);
      local_c = local_c + 0x338;
    } while ((int)local_14 < piVar3[9]);
  }
  FUN_006424d0();
  iVar1 = 0;
  if (0 < piVar3[0xd]) {
    do {
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642590();
      FUN_00642c70();
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_10[0xd]);
  }
  thunk_FUN_00642420();
  FUN_00642420();
  ExceptionList = in_stack_000312d8;
  return;
}

