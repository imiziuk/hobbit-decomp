
int __thiscall
FUN_006a1430(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,uint param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *local_5c;
  undefined4 local_58;
  int local_54;
  int local_50 [4];
  int local_40;
  int local_3c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e76e0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_manager__OpenDialog_00755c14);
  iVar7 = 0;
  iVar6 = 0;
  local_4 = 0;
  local_5c = (code *)0x0;
  local_58 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar5 = 0;
    do {
      iVar1 = FUN_0064a7e0(*(int *)(param_1 + 0x4c) + iVar5,param_3);
      if (iVar1 != 0) {
        local_5c = *(code **)(iVar5 + 0x2c + *(int *)(param_1 + 0x4c));
        local_58 = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x4c) + 0x30);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x34;
    } while (iVar6 < *(int *)(param_1 + 0x48));
    if (local_5c != (code *)0x0) {
      FUN_0065f8a0(local_50,&local_54);
      iVar5 = param_5;
      iVar6 = param_4;
      local_40 = param_6;
      local_3c = param_7;
      iVar7 = (*local_5c)(param_2,param_1,local_58,&param_4,param_8,param_9,param_10);
      uVar2 = FUN_00649b20(param_3);
      local_4._0_1_ = 1;
      FUN_0064a320(uVar2);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649ba0();
      *(int *)(iVar7 + 0x118) = local_50[0];
      *(int *)(iVar7 + 0x11c) = local_54;
      *(int *)(iVar7 + 0x34) = iVar6 + -(local_50[0] / 2);
      *(int *)(iVar7 + 0x38) = iVar5 + -(local_54 / 2);
      *(int *)(iVar7 + 0x3c) = local_40 + -(local_50[0] / 2);
      *(int *)(iVar7 + 0x40) = local_3c + -(local_54 / 2);
      uVar3 = FUN_006a3230();
      if ((uVar3 & 8) == 0) {
        if (param_8 == 0) {
          iVar6 = *(int *)(param_2 + 0x5c8);
          if (*(int *)(param_2 + 0x5d0) < iVar6 + 1) {
            if (*(int *)(param_2 + 0x5d8) == 0) {
              iVar1 = *(int *)(param_2 + 0x5d0) / 2;
              iVar5 = 1;
              if (0 < iVar1) {
                iVar5 = iVar1;
              }
              if (iVar5 + iVar6 < 1) {
                iVar6 = 1;
              }
              else {
                if (iVar1 < 1) {
                  iVar1 = 1;
                }
                iVar6 = iVar6 + iVar1;
              }
            }
            else {
              iVar6 = *(int *)(param_2 + 0x5d8) + iVar6;
            }
            pvVar4 = operator_new(iVar6 * 4);
            iVar5 = 0;
            if (0 < *(int *)(param_2 + 0x5c8)) {
              do {
                *(undefined4 *)((int)pvVar4 + iVar5 * 4) =
                     *(undefined4 *)(*(int *)(param_2 + 0x5cc) + iVar5 * 4);
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)(param_2 + 0x5c8));
            }
            FUN_006bf840(*(undefined4 *)(param_2 + 0x5cc));
            *(void **)(param_2 + 0x5cc) = pvVar4;
            *(int *)(param_2 + 0x5d0) = iVar6;
          }
          iVar6 = *(int *)(param_2 + 0x5c8) + 1;
          *(int *)(param_2 + 0x5c8) = iVar6;
          *(int *)(*(int *)(param_2 + 0x5cc) + -4 + iVar6 * 4) = iVar7;
        }
        if (((param_9 & 0x10) == 0) && (0 < *(int *)(iVar7 + 0x18))) {
          FUN_006a2b00(0);
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return iVar7;
}

