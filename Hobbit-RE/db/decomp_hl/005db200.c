
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005db200(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0c5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_40 = param_1;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    if ((DAT_007cc3ec & 1) == 0) {
      DAT_007cc3ec = DAT_007cc3ec | 1;
      DAT_007cc3fc = 0;
      DAT_007cc3f8 = 0;
      _DAT_007cc400 = 0;
      _DAT_007cc408 = 0;
      DAT_007cc404 = 0;
      _DAT_007cc3f0 = 0;
      _DAT_007cc3f4 = 0;
      FUN_006bfe55(&LAB_005db6b0);
    }
    if ((DAT_007cc3ec & 2) == 0) {
      DAT_007cc3ec = DAT_007cc3ec | 2;
      DAT_007cc504 = (int *)0x0;
      DAT_007cc500 = 0;
      DAT_007cc508 = 0;
      DAT_007cc510 = 0;
      DAT_007cc50c = 0;
      _DAT_007cc4f8 = 0;
      _DAT_007cc4fc = 0;
      FUN_006bfe55(&LAB_005db670);
    }
    if ((DAT_007cc3ec & 4) == 0) {
      DAT_007cc3ec = DAT_007cc3ec | 4;
      DAT_007cc4e8 = 0;
      _DAT_007cc4e4 = 0;
      _DAT_007cc4ec = 0;
      _DAT_007cc4f4 = 0;
      DAT_007cc4f0 = 0;
      _DAT_007cc4dc = 0;
      _DAT_007cc4e0 = 0;
      FUN_006bfe55(&LAB_005db650);
    }
    if (DAT_00746580 != 0) {
      DAT_00746580 = 0;
      FUN_0054d730(&DAT_007cc3f0,&DAT_007cc4dc);
      DAT_007cc538 = 0x12;
      local_44 = 0;
      if (0 < DAT_007cc3f8) {
        local_48 = 0;
        do {
          iVar6 = 0;
          FUN_00649b80(local_48 + DAT_007cc3fc);
          local_4 = 0;
          piVar4 = DAT_007cc504;
          iVar1 = DAT_007cc508;
          if (DAT_007cc508 < DAT_007cc500 + 1) {
            if (DAT_007cc510 == 0) {
              iVar1 = DAT_007cc508 / 2;
              iVar5 = 1;
              if (0 < iVar1) {
                iVar5 = iVar1;
              }
              if (iVar5 + DAT_007cc500 < 1) {
                iVar1 = 1;
              }
              else {
                if (iVar1 < 1) {
                  iVar1 = 1;
                }
                iVar1 = iVar1 + DAT_007cc500;
              }
            }
            else {
              iVar1 = DAT_007cc510 + DAT_007cc500;
            }
            local_3c = (int *)operator_new(iVar1 * 0x2c + 4);
            local_4._0_1_ = 1;
            if (local_3c == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = local_3c + 1;
              *local_3c = iVar1;
              FUN_006c043b(piVar4,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            if (0 < DAT_007cc500) {
              iVar5 = 0;
              do {
                FUN_0064a320(iVar5 + (int)DAT_007cc504);
                iVar6 = iVar6 + 1;
                iVar5 = iVar5 + 0x2c;
              } while (iVar6 < DAT_007cc500);
            }
            param_1 = local_40;
            if (DAT_007cc504 != (int *)0x0) {
              FUN_00407f70(3);
              param_1 = local_40;
            }
          }
          DAT_007cc508 = iVar1;
          DAT_007cc504 = piVar4;
          FUN_0064a320(local_38);
          DAT_007cc500 = DAT_007cc500 + 1;
          local_4 = 0xffffffff;
          FUN_00649ba0();
          local_44 = local_44 + 1;
          local_48 = local_48 + 0x4c;
        } while (local_44 < DAT_007cc3f8);
      }
    }
    FUN_00649920(&local_44,s_AIManager_Actions_Action__d_Worl_00747294,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 2;
    uVar2 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 0xc;
      FUN_00647d10(iVar1,uVar2);
      *(undefined4 *)(iVar1 + 0x84) = 0x10;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(int *)(iVar1 + 0xf4) = DAT_007cc500;
      *(undefined **)(iVar1 + 0x100) = &DAT_007cc4f8;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    uVar2 = *(undefined4 *)(DAT_007cc4e8 + DAT_007cc538 * 4);
    FUN_00649920(&local_44,s_AIManager_Actions_Action__d_Worl_0074726c,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 3;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 0xf;
      FUN_00647d10(iVar1,uVar3);
      *(undefined4 *)(iVar1 + 0x84) = 0;
      *(undefined4 *)(iVar1 + 0x100) = uVar2;
      *(undefined4 *)(iVar1 + 0x104) = 1;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_48,s_AIManager_Actions_Action__d_Amou_00746d98,*(undefined4 *)(local_40 + 4)
                );
    local_4 = 4;
    uVar2 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 1;
      FUN_00647d10(iVar1,uVar2);
      *(undefined4 *)(iVar1 + 0x84) = 0;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = local_c;
  return;
}

