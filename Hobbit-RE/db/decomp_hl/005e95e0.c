
undefined4 __thiscall FUN_005e95e0(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_20 [8];
  undefined1 local_18 [4];
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1bf0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_20,s_AIManager_Actions_Action__d_Worl_00747294,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar3 = FUN_00649940();
  uVar5 = param_2;
  iVar4 = FUN_00647e40(param_2,uVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar4 == 0) {
    if ((*param_3 == 1) || (*param_3 == 0xc)) {
      DAT_007cc540 = param_3[0x93];
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    FUN_00649920(local_20,s_AIManager_Actions_Action__d_Worl_0074726c,*(undefined4 *)(param_1 + 4));
    bVar2 = true;
    local_4 = 1;
    uVar3 = FUN_00649940();
    iVar4 = FUN_00647e40(uVar5,uVar3);
    if ((iVar4 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
      *(int *)(param_1 + 0x18) = param_3[0x90];
      *(int *)(param_1 + 0x1c) = param_3[0x91];
    }
    else {
      bVar2 = false;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    if (bVar2) {
      uVar7 = *(uint *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x1c);
      local_14 = uVar7;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      iVar6 = (int)*(short *)(&DAT_0076cd88 + ((uVar7 ^ uVar1) * -0xfb & 0xfff) * 2);
      for (iVar4 = iVar6; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
      }
      for (; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)) {
        iVar4 = *(int *)(DAT_0076f648 + iVar6 * 0x14);
        if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == local_14)) &&
           (*(uint *)(iVar4 + 0xc) == uVar1)) {
          if (iVar6 != -1) {
            uVar7 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
            local_4 = 0xffffffff;
            uVar7 = -(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7;
            FUN_00649720();
            uVar5 = param_2;
            if (uVar7 != 0) {
              *(uint *)(param_1 + 0x20) = ((byte)~*(byte *)(uVar7 + 0x7a) & 4) >> 2;
              *(uint *)(param_1 + 0x24) = ((ushort)~*(ushort *)(uVar7 + 0x7a) & 0x200) >> 9;
              *(uint *)(param_1 + 0x28) = ((ushort)~*(ushort *)(uVar7 + 0x7a) & 0x400) >> 10;
            }
            goto LAB_005e97f1;
          }
          break;
        }
      }
      local_4 = 0xffffffff;
      FUN_00649720();
      uVar5 = param_2;
    }
LAB_005e97f1:
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Coll_00747b2c,*(undefined4 *)(param_1 + 4));
    local_4 = 3;
    uVar3 = FUN_00649940();
    iVar4 = FUN_00647e40(uVar5,uVar3);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar4 == 0) {
      if (*param_3 == 3) {
        *(int *)(param_1 + 0x20) = param_3[0x95];
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Bilb_00747b00,*(undefined4 *)(param_1 + 4)
                  );
      local_4 = 4;
      uVar3 = FUN_00649940();
      iVar4 = FUN_00647e40(uVar5,uVar3);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar4 == 0) {
        if (*param_3 == 3) {
          *(int *)(param_1 + 0x24) = param_3[0x95];
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        FUN_00649920(local_18,s_AIManager_Actions_Action__d_NPC_C_00747ad4,
                     *(undefined4 *)(param_1 + 4));
        local_4 = 5;
        uVar3 = FUN_00649940();
        iVar4 = FUN_00647e40(uVar5,uVar3);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar4 == 0) {
          if (*param_3 == 3) {
            *(int *)(param_1 + 0x28) = param_3[0x95];
            uVar5 = 1;
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = FUN_005ccb60(uVar5,param_3);
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar5;
}

