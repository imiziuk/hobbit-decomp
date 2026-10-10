
void __thiscall FUN_005d2900(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar1 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e02bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    FUN_00649920(&uStack_18,s_AIManager_Actions_Action__d_Dial_00746ca8,*(undefined4 *)(param_1 + 4)
                );
    uStack_4 = 0;
    param_2 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xc;
      FUN_00647d10(iVar2,param_2);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(param_1 + 0x68);
      *(int *)(iVar2 + 0x100) = param_1 + 0x60;
    }
    uStack_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Dial_00746c7c,*(undefined4 *)(param_1 + 4));
    uStack_4 = 1;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 1;
      FUN_00647d10(iVar2,uVar3);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
    }
    uStack_4 = 0xffffffff;
    FUN_00649950();
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        iVar2 = param_2;
        FUN_00649920(&uStack_18,s_AIManager_Actions_Action__d_Dial_00746c50,
                     *(undefined4 *)(param_1 + 4),param_2);
        uStack_4 = 2;
        uVar3 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar2 = FUN_00425010();
          *(undefined4 *)(iVar2 + 0x80) = 0xd;
          FUN_00647d10(iVar2,uVar3);
          *(undefined4 *)(iVar2 + 0x84) = 0;
          *(undefined4 *)(iVar2 + 0xf0) = 0;
          *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(param_1 + 0x48);
          *(int *)(iVar2 + 0x100) = param_1 + 0x40;
          iVar2 = param_2;
        }
        uStack_4 = 0xffffffff;
        FUN_00649950();
        param_2 = iVar2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x24));
    }
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Spea_00746b90,*(undefined4 *)(param_1 + 4));
    uStack_4 = 3;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0x10;
      FUN_00647d10(iVar2,uVar3);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined4 *)(iVar2 + 0x100) = 0x50;
      *(undefined4 *)(iVar2 + 0x104) = 1;
    }
    uStack_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_At_S_00746b60,*(undefined4 *)(param_1 + 4));
    uStack_4 = 4;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 3;
      FUN_00647d10(iVar2,uVar3);
      *(undefined4 *)(iVar2 + 0x84) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(auStack_14,s_AIManager_Actions_Action__d_Bilb_00746b34,*(undefined4 *)(param_1 + 4)
                );
    uStack_4 = 5;
    uStack_18 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 0x10) < iVar2 + 1) {
        if (*(int *)(iVar1 + 0x18) == 0) {
          param_2 = *(int *)(iVar1 + 0x10) / 2;
          iVar5 = 1;
          if (0 < param_2) {
            iVar5 = param_2;
          }
          if (iVar2 + iVar5 < 1) {
            param_2 = 1;
          }
          else {
            if (param_2 < 1) {
              param_2 = 1;
            }
            param_2 = iVar2 + param_2;
          }
        }
        else {
          param_2 = *(int *)(iVar1 + 0x18) + iVar2;
        }
        iVar2 = param_2;
        pvVar4 = operator_new(param_2 * 0x108);
        uStack_4._0_1_ = 6;
        pvStack_10 = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else if (-1 < iVar2 + -1) {
          do {
            FUN_00437830();
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        uStack_4 = CONCAT31(uStack_4._1_3_,5);
        if (0 < *(int *)(iVar1 + 8)) {
          iVar5 = 0;
          iVar2 = 0;
          do {
            FUN_00437630(*(int *)(iVar1 + 0xc) + iVar5);
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 0x108;
          } while (iVar2 < *(int *)(iVar1 + 8));
        }
        FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
        *(void **)(iVar1 + 0xc) = pvVar4;
        *(int *)(iVar1 + 0x10) = param_2;
      }
      iVar5 = *(int *)(iVar1 + 8) + 1;
      iVar2 = iVar5 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
      *(int *)(iVar1 + 8) = iVar5;
      *(undefined4 *)(iVar2 + 0x80) = 3;
      FUN_00647d10(iVar2,uStack_18);
      *(undefined4 *)(iVar2 + 0x84) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = pvStack_c;
  return;
}

