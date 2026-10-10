
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005dc0b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
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
  puStack_8 = &LAB_006e0dbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_40 = param_1;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    if ((DAT_007cc484 & 1) == 0) {
      DAT_007cc484 = DAT_007cc484 | 1;
      DAT_007cc3dc = 0;
      DAT_007cc3d8 = 0;
      _DAT_007cc3e0 = 0;
      _DAT_007cc3e8 = 0;
      DAT_007cc3e4 = 0;
      _DAT_007cc3d0 = 0;
      _DAT_007cc3d4 = 0;
      FUN_006bfe55(&LAB_005dc570);
    }
    if ((DAT_007cc484 & 2) == 0) {
      DAT_007cc484 = DAT_007cc484 | 2;
      DAT_007cc368 = (int *)0x0;
      DAT_007cc364 = 0;
      DAT_007cc36c = 0;
      DAT_007cc374 = 0;
      DAT_007cc370 = 0;
      _DAT_007cc35c = 0;
      _DAT_007cc360 = 0;
      FUN_006bfe55(&LAB_005dc530);
    }
    if ((DAT_007cc484 & 4) == 0) {
      DAT_007cc484 = DAT_007cc484 | 4;
      DAT_007cc438 = 0;
      _DAT_007cc434 = 0;
      _DAT_007cc43c = 0;
      _DAT_007cc444 = 0;
      DAT_007cc440 = 0;
      _DAT_007cc42c = 0;
      _DAT_007cc430 = 0;
      FUN_006bfe55(&LAB_005dc510);
    }
    if (DAT_00746584 != 0) {
      DAT_00746584 = 0;
      FUN_0054d730(&DAT_007cc3d0,&DAT_007cc42c);
      _DAT_007cc53c = 0x12;
      local_44 = 0;
      if (0 < DAT_007cc3d8) {
        local_48 = 0;
        do {
          FUN_00649b80(local_48 + DAT_007cc3dc);
          local_4 = 0;
          piVar4 = DAT_007cc368;
          iVar2 = DAT_007cc36c;
          if (DAT_007cc36c < DAT_007cc364 + 1) {
            if (DAT_007cc374 == 0) {
              iVar2 = DAT_007cc36c / 2;
              iVar6 = 1;
              if (0 < iVar2) {
                iVar6 = iVar2;
              }
              if (iVar6 + DAT_007cc364 < 1) {
                iVar2 = 1;
              }
              else {
                if (iVar2 < 1) {
                  iVar2 = 1;
                }
                iVar2 = iVar2 + DAT_007cc364;
              }
            }
            else {
              iVar2 = DAT_007cc364 + DAT_007cc374;
            }
            local_3c = (int *)operator_new(iVar2 * 0x2c + 4);
            local_4._0_1_ = 1;
            if (local_3c == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = local_3c + 1;
              *local_3c = iVar2;
              FUN_006c043b(piVar4,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
            }
            iVar6 = 0;
            local_4 = (uint)local_4._1_3_ << 8;
            if (0 < DAT_007cc364) {
              iVar5 = 0;
              do {
                FUN_0064a320(iVar5 + (int)DAT_007cc368);
                iVar6 = iVar6 + 1;
                iVar5 = iVar5 + 0x2c;
              } while (iVar6 < DAT_007cc364);
            }
            param_1 = local_40;
            if (DAT_007cc368 != (int *)0x0) {
              piVar1 = DAT_007cc368 + -1;
              FUN_006c026a(DAT_007cc368,0x2c,DAT_007cc368[-1],FUN_00649ba0);
              FUN_006bf840(piVar1);
              param_1 = local_40;
            }
          }
          DAT_007cc36c = iVar2;
          DAT_007cc368 = piVar4;
          FUN_0064a320(local_38);
          DAT_007cc364 = DAT_007cc364 + 1;
          local_4 = 0xffffffff;
          FUN_00649ba0();
          local_44 = local_44 + 1;
          local_48 = local_48 + 0x4c;
        } while (local_44 < DAT_007cc3d8);
      }
    }
    iVar2 = FUN_005265f0();
    FUN_00649920(&local_40,s_AIManager_Actions_Action__d_Stri_007473fc,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 2;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar6 = FUN_00425010();
      *(undefined4 *)(iVar6 + 0x80) = 0xd;
      FUN_00647d10(iVar6,uVar3);
      *(undefined4 *)(iVar6 + 0x84) = 0;
      *(undefined4 *)(iVar6 + 0xf0) = 0;
      *(undefined4 *)(iVar6 + 0xf4) = *(undefined4 *)(iVar2 + 8);
      *(int *)(iVar6 + 0x100) = iVar2;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_40,s_AIManager_Actions_Action__d_Scro_007473d8,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 3;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 3;
      FUN_00647d10(iVar2,uVar3);
      *(undefined4 *)(iVar2 + 0x84) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_44,s_AIManager_Actions_Action__d_Dela_007473b0,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 4;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 2;
      FUN_00647d10(iVar2,uVar3);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
      *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = local_c;
  return;
}

