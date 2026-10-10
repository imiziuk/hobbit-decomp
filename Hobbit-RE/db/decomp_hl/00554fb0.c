
char FUN_00554fb0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int unaff_EDI;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_1d;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9cd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = FUN_00554730(&local_1d);
  local_1c = 0x7fffffff;
  local_18 = 0x7fffffff;
  uVar1 = FUN_00555ab0(&param_1,0);
  iVar2 = FUN_00555900(&param_1);
  if (iVar2 == 0x7ffffff8) {
    if (((byte)uVar1 & 0xf) != 0xe) {
      FUN_00649920(&stack0x00000008,s_PCSetupFrameBlend_failure__inval_0073d914,param_1);
      local_4 = 0;
      goto LAB_00555655;
    }
    uVar3 = 0;
    if (uVar1 == 0xe) {
      uVar3 = 0xf;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((uVar1 & 0x40000000) != 0) {
      uVar3 = uVar3 | 7;
    }
    iVar4 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xa8,uVar3);
    uVar1 = FUN_00555ab0(&param_1,0);
    iVar2 = FUN_00555900(&param_1);
  }
  else {
    iVar4 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xa8,0xf);
  }
  bVar7 = iVar4 != 0;
  if ((uVar1 == 0x7fffffff) || (uVar1 == 0x7ffffffe)) {
    FUN_00649920(&stack0x00000008,s_PCSetupFrameBlend_failure__no_bl_0073d794,param_1);
    local_4 = 1;
  }
  else {
    do {
      while (iVar2 == 4) {
        uVar3 = FUN_00555ab0(&param_1,0);
        if ((uVar3 == 0x7ffffffe) || (uVar3 == 0x7fffffff)) {
          FUN_00649920(&stack0x00000008,s_PCSetupFrameBlend_failure__modul_0073d83c,param_1);
          local_4 = 2;
          goto LAB_00555655;
        }
        if (uVar3 == 1) {
          uVar3 = uVar1;
          uVar1 = 1;
LAB_00555113:
          if (local_1c != 0x7fffffff) {
            FUN_00649920(&stack0x00000008,s_PCSetupFrameBlend_failure__tryin_0073d8ac,param_1);
            local_4 = 3;
            goto LAB_00555655;
          }
          iVar2 = FUN_00555730(uVar3);
          local_1c = iVar2;
        }
        else {
          if (uVar1 == 1) goto LAB_00555113;
          if (uVar1 != 0xe) {
            ExceptionList = local_c;
            return '\0';
          }
          if (local_18 != 0x7fffffff) {
            FUN_00649920(&stack0x00000008,s_PCSetupFrameBlend_failure__tryin_0073d870,param_1);
            local_4 = 4;
            goto LAB_00555655;
          }
          iVar2 = FUN_00555730(uVar3);
          local_18 = iVar2;
        }
        if (iVar2 == 0x7fffffff) {
          ExceptionList = local_c;
          return '\0';
        }
        iVar2 = FUN_00555900(&param_1);
      }
      if ((iVar2 != 7) && (iVar2 != 0x7ffffff9)) {
        FUN_00649920(auStack_10,s_PCSetupFrameBlend_failure__inval_0073d808,param_1);
        local_4 = 7;
        uVar5 = FUN_00649940();
        FUN_0064e7d0(uVar5);
        goto LAB_00555666;
      }
      if (uVar1 == 1) {
        if (local_1c == 0x7fffffff) {
          local_1c = 2;
        }
      }
      else {
        if (uVar1 != 0xe) {
          FUN_00649920(&stack0x00000008,s_PCSetupFrameBlend_failure__could_0073d7c8,param_1);
          local_4 = 5;
          goto LAB_00555655;
        }
        if (local_18 == 0x7fffffff) {
          local_18 = 2;
        }
      }
      if (iVar2 == 0x7ffffff9) {
LAB_005552d5:
        if (local_18 == 0x7fffffff) {
          local_18 = 1;
        }
        if (local_1c == 0x7fffffff) {
          local_1c = 1;
        }
        iVar2 = local_1c;
        cVar6 = '\0';
        if ((local_18 == 1) && (local_1c == 2)) {
          iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,0);
        }
        else {
          iVar9 = 0x13;
          iVar4 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,local_1c);
          if ((iVar4 != 0) || (bVar7)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          iVar4 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xab,1);
          if ((iVar4 != 0) || (bVar7)) {
            bVar7 = true;
          }
          iVar4 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,unaff_EDI);
          if ((iVar4 != 0) || (bVar7)) {
            bVar7 = true;
          }
          cVar6 = '\x01';
          if (iVar2 == 5) {
            if ((unaff_EDI != 6) && (unaff_EDI != 2)) {
LAB_005555b9:
              iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,0);
              if ((iVar2 != 0) || (local_4 = 0, bVar7)) {
                local_4 = 1;
              }
              cVar6 = '\x01';
              goto LAB_005555e1;
            }
            if ((char)local_1c == '\0') {
              iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,1);
              if ((iVar2 != 0) || (bVar7)) {
                bVar7 = true;
              }
              iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x19,5);
              if ((iVar2 != 0) || (bVar7)) {
                bVar7 = true;
              }
              iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x18,0);
            }
            else {
              if (iVar9 == 0) {
                iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,1);
                if ((iVar2 != 0) || (bVar7)) {
                  bVar7 = true;
                }
                iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x19,7);
                if ((iVar2 != 0) || (bVar7)) {
                  bVar7 = true;
                }
                iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x18,0x80);
                if ((iVar2 != 0) || (local_4 = 0, bVar7)) {
                  local_4 = 1;
                }
                cVar6 = '\0';
                goto LAB_005555e1;
              }
              iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,0);
            }
          }
          else {
            if ((iVar2 != 6) || ((unaff_EDI != 5 && (unaff_EDI != 2)))) goto LAB_005555b9;
            if ((char)local_1c == '\0') {
              iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,1);
              if ((iVar2 != 0) || (bVar7)) {
                bVar7 = true;
              }
              iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x19,2);
              if ((iVar2 != 0) || (bVar7)) {
                uVar8 = 0xff;
                bVar7 = true;
                uVar5 = 0x18;
              }
              else {
                uVar8 = 0xff;
                uVar5 = 0x18;
              }
            }
            else {
              if (iVar9 == 0) {
                iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,1);
                if ((iVar2 != 0) || (bVar7)) {
                  bVar7 = true;
                }
                iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x19,4);
                if ((iVar2 != 0) || (bVar7)) {
                  bVar7 = true;
                }
                iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x18,0x7f);
                if ((iVar2 != 0) || (local_4 = 0, bVar7)) {
                  local_4 = 1;
                }
                cVar6 = '\0';
                goto LAB_005555e1;
              }
              uVar8 = 0;
              uVar5 = 0xf;
            }
            iVar2 = (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,uVar5,uVar8);
          }
        }
        if ((iVar2 != 0) || (bVar7)) {
          local_4 = 1;
        }
        else {
          local_4 = 0;
        }
LAB_005555e1:
        (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x1b,cVar6);
        (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe,cVar6 == '\0');
        (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x34,0);
        (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x2f,0);
        ExceptionList = local_c;
        return cVar6;
      }
      uVar1 = FUN_00555ab0(&param_1,0);
      iVar2 = FUN_00555900(&param_1);
      if (uVar1 == 0x7ffffffe) goto LAB_005552d5;
    } while (uVar1 != 0x7fffffff);
    FUN_00649920(&stack0x00000008,s_PCSetupFrameBlend_failure__synta_0073d8e4,param_1);
    local_4 = 6;
  }
LAB_00555655:
  uVar5 = FUN_00649940();
  FUN_0064e7d0(uVar5);
LAB_00555666:
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return '\0';
}

