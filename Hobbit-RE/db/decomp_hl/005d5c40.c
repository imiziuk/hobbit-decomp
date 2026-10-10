
void __thiscall FUN_005d5c40(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *local_70;
  int local_6c;
  int local_68;
  int local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  int local_4c;
  int local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e069b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4c = param_1;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    FUN_00649920(&local_60,s_AIManager_Actions_Action__d_Spaw_0074701c,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 0;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar4 = FUN_00425010();
      *(undefined4 *)(iVar4 + 0x80) = 1;
      FUN_00647d10(iVar4,uVar3);
      *(undefined4 *)(iVar4 + 0x84) = 2;
      *(undefined4 *)(iVar4 + 0xf0) = 0;
      *(undefined4 *)(iVar4 + 0xf4) = 0xffffffff;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    local_60 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        iVar4 = local_60;
        FUN_00649920(local_5c,s_AIManager_Actions_Action__d_Spaw_00746ff4,
                     *(undefined4 *)(param_1 + 4),local_60);
        local_4 = 1;
        uVar3 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar5 = FUN_00425010();
          *(undefined4 *)(iVar5 + 0x80) = 5;
          FUN_00647d10(iVar5,uVar3);
          *(undefined4 *)(iVar5 + 0x84) = 0x17;
          *(undefined4 *)(iVar5 + 0x100) = 0;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(local_58,s_AIManager_Actions_Action__d_Spaw_00746fc8,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 2;
        uVar3 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar5 = FUN_00425010();
          *(undefined4 *)(iVar5 + 0x80) = 0xf;
          FUN_00647d10(iVar5,uVar3);
          *(undefined4 *)(iVar5 + 0x84) = 0;
          *(undefined4 *)(iVar5 + 0x100) = 0x1c;
          *(undefined4 *)(iVar5 + 0x104) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(local_54,s_AIManager_Actions_Action__d_Spaw_00746f98,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 3;
        uVar3 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar5 = FUN_00425010();
          *(undefined4 *)(iVar5 + 0x80) = 0xf;
          FUN_00647d10(iVar5,uVar3);
          *(undefined4 *)(iVar5 + 0x84) = 0;
          *(undefined4 *)(iVar5 + 0x100) = 0x2f;
          *(undefined4 *)(iVar5 + 0x104) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(local_50,s_AIManager_Actions_Action__d_Spaw_00746f6c,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 4;
        uVar3 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar5 = FUN_00425010();
          *(undefined4 *)(iVar5 + 0x80) = 0xf;
          FUN_00647d10(iVar5,uVar3);
          *(undefined4 *)(iVar5 + 0x84) = 0;
          *(undefined4 *)(iVar5 + 0x100) = 0x2f;
          *(undefined4 *)(iVar5 + 0x104) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        iVar5 = *(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
        uVar3 = *(undefined4 *)(iVar5 + 0x20);
        uVar1 = *(undefined4 *)(iVar5 + 0x24);
        FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
        local_4 = 5;
        iVar5 = FUN_00406ce0(uVar3,uVar1);
        local_4 = 0xffffffff;
        if (iVar5 == -1) {
          FUN_00649720();
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(DAT_0076f648 + iVar5 * 0x14);
          FUN_00649720();
        }
        iVar8 = *(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
        if (*(int *)(iVar8 + 0x14) == 0) {
          if (*(int *)(iVar8 + 0xc) != 0) {
            FUN_00407f70(3);
          }
          *(undefined4 *)(iVar8 + 0xc) = 0;
          *(undefined4 *)(iVar8 + 0x10) = 0;
        }
        *(undefined4 *)(iVar8 + 8) = 0;
        if (iVar5 == 0) {
          FUN_00649b20(&DAT_00720670);
          local_4 = 7;
          FUN_00469980(local_38);
          local_4 = 0xffffffff;
          FUN_00649ba0();
        }
        else {
          iVar5 = FUN_0059aa60();
          local_68 = 0;
          if (0 < *(int *)(iVar5 + 8)) {
            local_6c = 0;
            do {
              iVar2 = *(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
              iVar8 = *(int *)(iVar2 + 8);
              local_48 = *(int *)(iVar5 + 0xc) + local_6c;
              if (*(int *)(iVar2 + 0x10) < iVar8 + 1) {
                if (*(int *)(iVar2 + 0x18) == 0) {
                  iVar6 = *(int *)(iVar2 + 0x10) / 2;
                  iVar4 = 1;
                  if (0 < iVar6) {
                    iVar4 = iVar6;
                  }
                  if (iVar4 + iVar8 < 1) {
                    iVar8 = 1;
                  }
                  else {
                    if (iVar6 < 1) {
                      iVar6 = 1;
                    }
                    iVar8 = iVar8 + iVar6;
                  }
                }
                else {
                  iVar8 = *(int *)(iVar2 + 0x18) + iVar8;
                }
                piVar7 = (int *)operator_new(iVar8 * 0x2c + 4);
                local_4 = 6;
                if (piVar7 == (int *)0x0) {
                  local_70 = (int *)0x0;
                }
                else {
                  local_70 = piVar7 + 1;
                  *piVar7 = iVar8;
                  FUN_006c043b(local_70,0x2c,iVar8,FUN_006499d0,FUN_00649ba0);
                }
                iVar4 = 0;
                local_4 = 0xffffffff;
                if (0 < *(int *)(iVar2 + 8)) {
                  iVar6 = 0;
                  do {
                    FUN_0064a320(*(int *)(iVar2 + 0xc) + iVar6);
                    iVar4 = iVar4 + 1;
                    iVar6 = iVar6 + 0x2c;
                  } while (iVar4 < *(int *)(iVar2 + 8));
                }
                if (*(int *)(iVar2 + 0xc) != 0) {
                  FUN_00407f70(3);
                }
                *(int *)(iVar2 + 0x10) = iVar8;
                *(int **)(iVar2 + 0xc) = local_70;
                iVar4 = local_60;
                param_1 = local_4c;
              }
              FUN_0064a320(local_48);
              *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
              local_68 = local_68 + 1;
              local_6c = local_6c + 0x2c;
            } while (local_68 < *(int *)(iVar5 + 8));
          }
        }
        iVar5 = *(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
        FUN_00649920(local_44,s_AIManager_Actions_Action__d_Spaw_00746f3c,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 8;
        local_48 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar8 = FUN_00425010();
          *(undefined4 *)(iVar8 + 0x80) = 0xd;
          FUN_00647d10(iVar8,local_48);
          *(undefined4 *)(iVar8 + 0x84) = 0;
          *(undefined4 *)(iVar8 + 0xf0) = 0;
          *(undefined4 *)(iVar8 + 0xf4) = *(undefined4 *)(iVar5 + 8);
          *(int *)(iVar8 + 0x100) = iVar5;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        local_60 = iVar4 + 1;
      } while (local_60 < *(int *)(param_1 + 0x20));
    }
  }
  ExceptionList = local_c;
  return;
}

