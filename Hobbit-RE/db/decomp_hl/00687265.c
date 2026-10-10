
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00687265(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_158 [256];
  undefined8 local_58;
  double local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int *local_3c;
  int local_38 [2];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  void *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_20 = (void *)0x0;
  iVar3 = FUN_00690691();
  if (iVar3 != 0) {
    return 0x80004005;
  }
  local_8 = FUN_0068e371("1.0.5",0,FUN_0068725a);
  if ((local_8 == 0) || (local_c = FUN_006907a1(), local_c == 0)) goto LAB_00687648;
  iVar3 = __setjmp3(local_8);
  if (iVar3 == 0) {
    local_48 = param_1;
    local_44 = param_2;
    FUN_00690652();
    FUN_0068e474(local_8,local_c);
    FUN_0068ec3b(local_8,local_c,local_38,&local_18,&local_28,&local_30,0,0,0);
    if (local_30 == 0) {
      *local_3c = 0x32;
    }
    else if (local_30 == 2) {
      *local_3c = 0x14;
    }
    else if (local_30 == 3) {
      *local_3c = 0x29;
    }
    else if (local_30 == 4) {
      *local_3c = 0x33;
    }
    else if (local_30 == 6) {
      *local_3c = 0x15;
    }
    if (local_28 == 0x10) {
      FUN_0068eeed();
    }
    if (local_28 < 8) {
      FUN_0068edaf();
    }
    if ((local_30 == 0) && (local_28 < 8)) {
      FUN_0068ef2c();
    }
    iVar3 = FUN_0068ec10();
    if (iVar3 == 0) {
      iVar3 = FUN_0068ebe7();
      if (iVar3 != 0) {
        FUN_0068eef6(local_8,_DAT_006f9e98,local_58);
      }
    }
    else {
      FUN_0069058f();
    }
    if ((*local_3c != 0x29) && (iVar3 = FUN_0068eba1(), iVar3 != 0)) {
      FUN_0068ef2c();
      if (*local_3c == 0x14) {
        *local_3c = 0x15;
      }
      else if (*local_3c == 0x32) {
        *local_3c = 0x33;
      }
    }
    if ((*local_3c == 0x14) || (*local_3c == 0x15)) {
      FUN_0068eda6();
    }
    if (*local_3c == 0x14) {
      FUN_0068ede1();
      *local_3c = 0x16;
    }
    FUN_0068e5e8(local_8);
    iVar3 = *local_3c;
    if (iVar3 == 0x14) {
      local_10 = 3;
    }
    else if ((iVar3 == 0x15) || (iVar3 == 0x16)) {
      local_10 = 4;
    }
    else if ((iVar3 == 0x29) || (iVar3 == 0x32)) {
      local_10 = 1;
    }
    else if (iVar3 == 0x33) {
      local_10 = 2;
    }
    uVar4 = FUN_0068ebd1(local_8);
    if (local_10 == (uVar4 & 0xff)) {
      local_3c[5] = local_38[0];
      local_3c[3] = 0;
      local_3c[4] = 0;
      local_3c[6] = local_18;
      iVar3 = FUN_0068ebbb(local_8);
      local_3c[2] = iVar3;
      pvVar5 = operator_new(iVar3 * local_18);
      local_3c[1] = (int)pvVar5;
      if (pvVar5 != (void *)0x0) {
        local_3c[8] = 1;
        local_20 = operator_new(local_18 << 2);
        if (local_20 != (void *)0x0) {
          uVar4 = 0;
          if (local_18 != 0) {
            do {
              *(uint *)((int)local_20 + uVar4 * 4) = local_3c[2] * uVar4 + local_3c[1];
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_18);
          }
          FUN_0068e9b0(local_8);
          if (*local_3c == 0x29) {
            local_2c = 0;
            local_24 = 0;
            iVar3 = FUN_0068eba1();
            if (iVar3 != 0) {
              FUN_0068ed0c(local_8,local_c,&local_14);
            }
            iVar3 = FUN_0068eba1();
            if (iVar3 != 0) {
              FUN_0068ed3f(local_8,local_c,&local_40,&local_2c);
            }
            if ((*(float *)(local_8 + 0x130) <= (float)_DAT_006f9e90) ||
               (*(float *)(local_8 + 0x134) <= (float)_DAT_006f9e90)) {
              iVar3 = 0;
              do {
                auStack_158[iVar3] = (char)iVar3;
                iVar3 = iVar3 + 1;
              } while (iVar3 < 0x100);
            }
            else {
              local_1c = 0;
              local_50 = (double)((float)_DAT_006ec030 /
                                 (*(float *)(local_8 + 0x130) * *(float *)(local_8 + 0x134)));
              do {
                FUN_006c05f0();
                uVar2 = __ftol();
                iVar3 = local_1c + 1;
                puVar1 = auStack_158 + local_1c;
                local_1c = iVar3;
                *puVar1 = uVar2;
              } while (iVar3 < 0x100);
            }
            pvVar5 = operator_new(0x400);
            local_3c[7] = (int)pvVar5;
            if (pvVar5 == (void *)0x0) goto LAB_00687648;
            iVar3 = 0;
            local_3c[9] = 1;
            if (0 < local_2c) {
              iVar8 = 0;
              do {
                iVar6 = iVar3 * 4;
                *(undefined1 *)(iVar6 + local_3c[7]) = auStack_158[*(byte *)(iVar8 + local_14)];
                *(undefined1 *)(iVar6 + 1 + local_3c[7]) =
                     auStack_158[*(byte *)(iVar8 + 1 + local_14)];
                *(undefined1 *)(iVar6 + 2 + local_3c[7]) =
                     auStack_158[*(byte *)(iVar8 + 2 + local_14)];
                puVar1 = (undefined1 *)(iVar3 + local_40);
                iVar3 = iVar3 + 1;
                *(undefined1 *)(iVar6 + 3 + local_3c[7]) = *puVar1;
                iVar8 = iVar8 + 3;
              } while (iVar3 < local_2c);
            }
            if (iVar3 < local_24) {
              iVar8 = iVar3 * 3;
              do {
                iVar6 = iVar3 * 4;
                *(undefined1 *)(iVar6 + local_3c[7]) = auStack_158[*(byte *)(iVar8 + local_14)];
                *(undefined1 *)(iVar6 + 1 + local_3c[7]) =
                     auStack_158[*(byte *)(iVar8 + 1 + local_14)];
                *(undefined1 *)(iVar6 + 2 + local_3c[7]) =
                     auStack_158[*(byte *)(iVar8 + 2 + local_14)];
                *(undefined1 *)(iVar6 + 3 + local_3c[7]) = 0xff;
                iVar3 = iVar3 + 1;
                iVar8 = iVar8 + 3;
              } while (iVar3 < local_24);
            }
            if (iVar3 < 0x100) {
              iVar3 = iVar3 << 2;
              do {
                *(undefined1 *)(iVar3 + local_3c[7]) = 0xff;
                *(undefined1 *)(iVar3 + 1 + local_3c[7]) = 0xff;
                *(undefined1 *)(iVar3 + 2 + local_3c[7]) = 0xff;
                *(undefined1 *)(iVar3 + 3 + local_3c[7]) = 0xff;
                iVar3 = iVar3 + 4;
              } while (iVar3 < 0x400);
            }
          }
          uVar7 = 0;
          goto LAB_0068774c;
        }
      }
LAB_00687648:
      uVar7 = 0x8007000e;
      goto LAB_0068774c;
    }
  }
  uVar7 = 0x80004005;
LAB_0068774c:
  if (local_8 != 0) {
    FUN_0068eb20();
  }
  if (local_20 != (void *)0x0) {
    FUN_006bf840();
  }
  return uVar7;
}

