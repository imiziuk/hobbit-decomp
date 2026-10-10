
undefined4 __thiscall FUN_005d2d40(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_40 [4];
  int *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e031e;
  local_c = ExceptionList;
  bVar1 = false;
  iVar6 = 0;
  ExceptionList = &local_c;
  FUN_00649920(local_40,s_AIManager_Actions_Action__d_Dial_00746ca8,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar2 = FUN_00649940();
  uVar4 = param_2;
  iVar3 = FUN_00647e40(param_2,uVar2);
  if ((iVar3 == 0) && ((*param_3 == 1 || (*param_3 == 0xc)))) {
    iVar6 = param_3[0x93];
    bVar1 = true;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar1) {
    *(int *)(param_1 + 0x18) = iVar6;
  }
  FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Dial_00746c7c,*(undefined4 *)(param_1 + 4));
  local_4 = 1;
  uVar2 = FUN_00649940();
  iVar6 = FUN_00647e40(uVar4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar6 == 0) {
    if (*param_3 == 1) {
      param_2 = param_3[0x93];
      piVar7 = (int *)0x0;
      if (param_2 < 0) {
        param_2 = 0;
      }
      iVar6 = *(int *)(param_1 + 0x24);
      if (iVar6 < param_2) {
        if (iVar6 < param_2) {
          param_2 = param_2 - iVar6;
          do {
            FUN_00649b20(&DAT_00720670);
            iVar6 = *(int *)(param_1 + 0x24);
            local_4 = 2;
            if (*(int *)(param_1 + 0x2c) < iVar6 + 1) {
              if (*(int *)(param_1 + 0x34) == 0) {
                iVar5 = *(int *)(param_1 + 0x2c) / 2;
                iVar3 = 1;
                if (0 < iVar5) {
                  iVar3 = iVar5;
                }
                if (iVar3 + iVar6 < 1) {
                  iVar6 = 1;
                }
                else {
                  if (iVar5 < 1) {
                    iVar5 = 1;
                  }
                  iVar6 = iVar6 + iVar5;
                }
              }
              else {
                iVar6 = *(int *)(param_1 + 0x34) + iVar6;
              }
              param_3 = (int *)operator_new(iVar6 * 0x2c + 4);
              iVar3 = 0;
              local_4._0_1_ = 3;
              if (param_3 == (int *)0x0) {
                param_3 = (int *)0x0;
              }
              else {
                piVar7 = param_3 + 1;
                *param_3 = iVar6;
                FUN_006c043b(piVar7,0x2c,iVar6,FUN_006499d0,FUN_00649ba0);
                param_3 = piVar7;
              }
              local_4 = CONCAT31(local_4._1_3_,2);
              if (0 < *(int *)(param_1 + 0x24)) {
                iVar5 = 0;
                do {
                  FUN_0064a320(*(int *)(param_1 + 0x28) + iVar5);
                  iVar3 = iVar3 + 1;
                  iVar5 = iVar5 + 0x2c;
                } while (iVar3 < *(int *)(param_1 + 0x24));
              }
              iVar3 = *(int *)(param_1 + 0x28);
              if (iVar3 != 0) {
                FUN_006c026a(iVar3,0x2c,*(undefined4 *)(iVar3 + -4),FUN_00649ba0);
                FUN_006bf840(iVar3 + -4);
              }
              *(int **)(param_1 + 0x28) = param_3;
              *(int *)(param_1 + 0x2c) = iVar6;
            }
            FUN_0064a320(local_38);
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
            local_4 = 0xffffffff;
            FUN_00649ba0();
            param_2 = param_2 + -1;
          } while (param_2 != 0);
          ExceptionList = local_c;
          return 1;
        }
      }
      else if (param_2 < iVar6) {
        iVar6 = *(int *)(param_1 + 0x2c);
        iVar3 = iVar6;
        if (iVar6 < param_2) {
          iVar3 = param_2;
        }
        if (iVar3 != iVar6) {
          param_3 = (int *)iVar3;
          local_3c = (int *)operator_new(iVar3 * 0x2c + 4);
          local_4 = 4;
          if (local_3c != (int *)0x0) {
            piVar7 = local_3c + 1;
            *local_3c = iVar3;
            FUN_006c043b(piVar7,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
          }
          iVar6 = 0;
          local_4 = 0xffffffff;
          if (0 < *(int *)(param_1 + 0x24)) {
            iVar3 = 0;
            do {
              FUN_0064a320(*(int *)(param_1 + 0x28) + iVar3);
              iVar6 = iVar6 + 1;
              iVar3 = iVar3 + 0x2c;
            } while (iVar6 < *(int *)(param_1 + 0x24));
          }
          iVar6 = *(int *)(param_1 + 0x28);
          if (iVar6 != 0) {
            FUN_006c026a(iVar6,0x2c,*(undefined4 *)(iVar6 + -4),FUN_00649ba0);
            FUN_006bf840(iVar6 + -4);
          }
          *(int **)(param_1 + 0x28) = piVar7;
          *(int **)(param_1 + 0x2c) = param_3;
        }
        *(int *)(param_1 + 0x24) = param_2;
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Dial_00746c50,
                     *(undefined4 *)(param_1 + 4),iVar6);
        local_4 = 5;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(uVar4,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          if ((*param_3 != 0xd) && (*param_3 != 4)) {
            ExceptionList = local_c;
            return 0;
          }
          FUN_0064a2e0(param_3 + 2);
          ExceptionList = local_c;
          return 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x24));
    }
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Spea_00746b90,*(undefined4 *)(param_1 + 4));
    local_4 = 6;
    uVar2 = FUN_00649940();
    iVar6 = FUN_00647e40(uVar4,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar6 == 0) {
      if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
        *(int *)(param_1 + 0x38) = param_3[0x90];
        *(int *)(param_1 + 0x3c) = param_3[0x91];
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s_AIManager_Actions_Action__d_At_S_00746b60,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 7;
      uVar2 = FUN_00649940();
      iVar6 = FUN_00647e40(uVar4,uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar6 == 0) {
        if (*param_3 == 3) {
          *(uint *)(param_1 + 0x7c) =
               (param_3[0x95] ^ *(uint *)(param_1 + 0x7c)) & 1 ^ *(uint *)(param_1 + 0x7c);
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        FUN_00649920(&local_3c,s_AIManager_Actions_Action__d_Bilb_00746b34,
                     *(undefined4 *)(param_1 + 4));
        local_4 = 8;
        uVar2 = FUN_00649940();
        iVar6 = FUN_00647e40(uVar4,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          if (*param_3 == 3) {
            *(uint *)(param_1 + 0x7c) =
                 (param_3[0x95] << 1 ^ *(uint *)(param_1 + 0x7c)) & 2 ^ *(uint *)(param_1 + 0x7c);
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = FUN_005ccb60(uVar4,param_3);
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

