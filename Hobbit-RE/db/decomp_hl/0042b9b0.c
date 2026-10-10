
void FUN_0042b9b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  if (*(int *)(param_2 + 0x14) == 0) {
    FUN_006bf840(*(undefined4 *)(param_2 + 0xc));
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
    if (*(int *)(iVar1 + 0x10) < 1) {
      iVar2 = *(int *)(iVar1 + 0x18);
      if ((iVar2 == 0) && (iVar2 = *(int *)(iVar1 + 0x10) / 2, iVar2 < 1)) {
        iVar2 = 1;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 0;
    iVar2 = *(int *)(iVar1 + 8);
    iVar4 = iVar2 + 1;
    *(int *)(iVar1 + 8) = iVar4;
    if (*(int *)(iVar1 + 0x10) < iVar2 + 2) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10) / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + iVar4 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + iVar4;
        }
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x18) + iVar4;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 1;
    iVar2 = *(int *)(iVar1 + 8);
    iVar4 = iVar2 + 1;
    *(int *)(iVar1 + 8) = iVar4;
    if (*(int *)(iVar1 + 0x10) < iVar2 + 2) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10) / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + iVar4 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + iVar4;
        }
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x18) + iVar4;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    return;
  case 3:
  case 4:
  case 5:
    if (*(int *)(iVar1 + 0x10) < 1) {
      iVar2 = *(int *)(iVar1 + 0x18);
      if ((iVar2 == 0) && (iVar2 = *(int *)(iVar1 + 0x10) / 2, iVar2 < 1)) {
        iVar2 = 1;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 3;
    iVar2 = *(int *)(iVar1 + 8);
    iVar4 = iVar2 + 1;
    *(int *)(iVar1 + 8) = iVar4;
    if (*(int *)(iVar1 + 0x10) < iVar2 + 2) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10) / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + iVar4 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + iVar4;
        }
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x18) + iVar4;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 4;
    iVar2 = *(int *)(iVar1 + 8);
    iVar4 = iVar2 + 1;
    *(int *)(iVar1 + 8) = iVar4;
    if (*(int *)(iVar1 + 0x10) < iVar2 + 2) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10) / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + iVar4 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + iVar4;
        }
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x18) + iVar4;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 5;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    return;
  case 6:
  case 7:
  case 8:
    if (*(int *)(iVar1 + 0x10) < 1) {
      iVar2 = *(int *)(iVar1 + 0x18);
      if ((iVar2 == 0) && (iVar2 = *(int *)(iVar1 + 0x10) / 2, iVar2 < 1)) {
        iVar2 = 1;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 6;
    iVar2 = *(int *)(iVar1 + 8);
    iVar4 = iVar2 + 1;
    *(int *)(iVar1 + 8) = iVar4;
    if (*(int *)(iVar1 + 0x10) < iVar2 + 2) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10) / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + iVar4 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + iVar4;
        }
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x18) + iVar4;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 7;
    iVar2 = *(int *)(iVar1 + 8);
    iVar4 = iVar2 + 1;
    *(int *)(iVar1 + 8) = iVar4;
    if (*(int *)(iVar1 + 0x10) < iVar2 + 2) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10) / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + iVar4 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + iVar4;
        }
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x18) + iVar4;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 8;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    return;
  case 9:
  case 10:
  case 0xb:
    if (*(int *)(iVar1 + 0x10) < 1) {
      iVar2 = *(int *)(iVar1 + 0x18);
      if ((iVar2 == 0) && (iVar2 = *(int *)(iVar1 + 0x10) / 2, iVar2 < 1)) {
        iVar2 = 1;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 9;
    iVar2 = *(int *)(iVar1 + 8);
    iVar4 = iVar2 + 1;
    *(int *)(iVar1 + 8) = iVar4;
    if (*(int *)(iVar1 + 0x10) < iVar2 + 2) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10) / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + iVar4 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + iVar4;
        }
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x18) + iVar4;
      }
      pvVar3 = operator_new(iVar2 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar3;
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = 10;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    local_8 = 0xb;
    puVar5 = &local_8;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    local_100 = 0xc;
    FUN_00417a80(&local_100);
    local_80 = 0xd;
    FUN_00417a80(&local_80);
    local_f8 = 0xe;
    puVar5 = &local_f8;
    break;
  case 0xf:
  case 0x10:
  case 0x11:
    local_40 = 0xf;
    FUN_00417a80(&local_40);
    local_f0 = 0x10;
    FUN_00417a80(&local_f0);
    local_78 = 0x11;
    puVar5 = &local_78;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
    local_e8 = 0x12;
    FUN_00417a80(&local_e8);
    local_20 = 0x13;
    FUN_00417a80(&local_20);
    local_e0 = 0x14;
    puVar5 = &local_e0;
    break;
  case 0x15:
  case 0x16:
  case 0x17:
    local_70 = 0x15;
    FUN_00417a80(&local_70);
    local_d8 = 0x16;
    FUN_00417a80(&local_d8);
    local_38 = 0x17;
    puVar5 = &local_38;
    break;
  case 0x18:
  case 0x19:
    local_d0 = 0x18;
    FUN_00417a80(&local_d0);
    local_68 = 0x19;
    FUN_00417a80(&local_68);
    return;
  case 0x1a:
  case 0x1b:
  case 0x1c:
    local_c8 = 0x1a;
    FUN_00417a80(&local_c8);
    local_10 = 0x1b;
    FUN_00417a80(&local_10);
    local_c0 = 0x1c;
    FUN_00417a80(&local_c0);
    return;
  case 0x1d:
  case 0x1e:
  case 0x1f:
    local_60 = 0x1d;
    FUN_00417a80(&local_60);
    local_b8 = 0x1e;
    FUN_00417a80(&local_b8);
    local_30 = 0x1f;
    FUN_00417a80(&local_30);
    return;
  case 0x20:
  case 0x21:
  case 0x22:
    local_b0 = 0x20;
    FUN_00417a80(&local_b0);
    local_58 = 0x21;
    FUN_00417a80(&local_58);
    local_a8 = 0x22;
    FUN_00417a80(&local_a8);
    return;
  default:
    goto switchD_0042b9f6_caseD_23;
  case 0x26:
  case 0x27:
    local_5c = 0x26;
    FUN_00417a80(&local_5c);
    local_54 = 0x27;
    FUN_00417a80(&local_54);
    return;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x4e:
    puVar5 = &param_1;
    break;
  case 0x2c:
  case 0x2e:
    local_1c = 0x2c;
    FUN_00417a80(&local_1c);
    local_14 = 0x2e;
    puVar5 = &local_14;
    break;
  case 0x2d:
  case 0x2f:
    local_c = 0x2d;
    FUN_00417a80(&local_c);
    local_4 = 0x2f;
    FUN_00417a80(&local_4);
    return;
  case 0x30:
  case 0x36:
    local_18 = 0x30;
    FUN_00417a80(&local_18);
    local_a0 = 0x36;
    FUN_00417a80(&local_a0);
    return;
  case 0x31:
  case 0x37:
    local_50 = 0x31;
    FUN_00417a80(&local_50);
    local_98 = 0x37;
    puVar5 = &local_98;
    break;
  case 0x32:
  case 0x38:
    local_28 = 0x32;
    FUN_00417a80(&local_28);
    local_90 = 0x38;
    FUN_00417a80(&local_90);
    return;
  case 0x33:
  case 0x39:
    local_48 = 0x33;
    FUN_00417a80(&local_48);
    local_88 = 0x39;
    FUN_00417a80(&local_88);
    return;
  case 0x34:
  case 0x3a:
    local_108 = 0x34;
    FUN_00417a80(&local_108);
    local_104 = 0x3a;
    puVar5 = &local_104;
    break;
  case 0x35:
  case 0x3b:
    local_fc = 0x35;
    FUN_00417a80(&local_fc);
    local_f4 = 0x3b;
    FUN_00417a80(&local_f4);
    return;
  case 0x3c:
  case 0x3d:
    local_ec = 0x3c;
    FUN_00417a80(&local_ec);
    local_e4 = 0x3d;
    FUN_00417a80(&local_e4);
    return;
  case 0x3e:
  case 0x3f:
    local_dc = 0x3e;
    FUN_00417a80(&local_dc);
    local_d4 = 0x3f;
    puVar5 = &local_d4;
    break;
  case 0x40:
  case 0x41:
    local_cc = 0x40;
    FUN_00417a80(&local_cc);
    local_c4 = 0x41;
    FUN_00417a80(&local_c4);
    return;
  case 0x42:
  case 0x43:
    local_bc = 0x42;
    FUN_00417a80(&local_bc);
    local_b4 = 0x43;
    FUN_00417a80(&local_b4);
    return;
  case 0x44:
  case 0x45:
    local_ac = 0x44;
    FUN_00417a80(&local_ac);
    local_a4 = 0x45;
    puVar5 = &local_a4;
    break;
  case 0x46:
  case 0x47:
    local_9c = 0x46;
    FUN_00417a80(&local_9c);
    local_94 = 0x47;
    FUN_00417a80(&local_94);
    return;
  case 0x48:
  case 0x49:
    local_8c = 0x48;
    FUN_00417a80(&local_8c);
    local_84 = 0x49;
    FUN_00417a80(&local_84);
    return;
  case 0x4a:
  case 0x4b:
    local_7c = 0x4a;
    FUN_00417a80(&local_7c);
    local_74 = 0x4b;
    puVar5 = &local_74;
    break;
  case 0x4c:
  case 0x4d:
    local_6c = 0x4c;
    FUN_00417a80(&local_6c);
    local_64 = 0x4d;
    FUN_00417a80(&local_64);
    return;
  case 0x4f:
  case 0x50:
    local_4c = 0x4f;
    FUN_00417a80(&local_4c);
    local_44 = 0x50;
    puVar5 = &local_44;
    break;
  case 0x51:
  case 0x52:
    local_3c = 0x51;
    FUN_00417a80(&local_3c);
    local_34 = 0x52;
    FUN_00417a80(&local_34);
    return;
  case 0x53:
  case 0x54:
    local_2c = 0x53;
    FUN_00417a80(&local_2c);
    local_24 = 0x54;
    FUN_00417a80(&local_24);
    return;
  }
  FUN_00417a80(puVar5);
switchD_0042b9f6_caseD_23:
  return;
}

