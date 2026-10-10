
void __thiscall FUN_0046b3b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1011;
  local_c = ExceptionList;
  if (-1 < param_2) {
    ExceptionList = &local_c;
    if (param_2 < *(int *)(param_1 + 0x1a0)) {
      ExceptionList = &local_c;
      do {
        iVar5 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x1a4));
        if (iVar5 != 0) {
          local_4 = 0;
          FUN_00649bd0();
          if (*(undefined4 **)(iVar5 + 0x30) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar5 + 0x30))(1);
          }
          *(undefined4 *)(iVar5 + 0x30) = 0;
          local_4 = 0xffffffff;
          FUN_00649ba0();
          FUN_006bf840(iVar5);
        }
        iVar4 = (*(int *)(param_1 + 0x1a0) - param_2) + -1;
        iVar5 = param_2 * 4;
        if (0 < iVar4) {
          do {
            *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x1a4)) =
                 *(undefined4 *)(iVar5 + 4 + *(int *)(param_1 + 0x1a4));
            iVar4 = iVar4 + -1;
            iVar5 = iVar5 + 4;
          } while (iVar4 != 0);
        }
        iVar5 = *(int *)(param_1 + 0x1a0) + -1;
        *(int *)(param_1 + 0x1a0) = iVar5;
      } while (param_2 < iVar5);
    }
    iVar5 = *(int *)(param_1 + 0x1a0);
    while (iVar5 < param_2) {
      puVar1 = (undefined4 *)operator_new(0x34);
      local_4 = 1;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        FUN_006499d0();
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_0064a2e0(s_Enter_Action_s_Name_00727068);
        *puVar1 = 0;
        puVar1[0xc] = 0;
      }
      iVar5 = *(int *)(param_1 + 0x1a0);
      local_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x1a8) < iVar5 + 1) {
        if (*(int *)(param_1 + 0x1b0) == 0) {
          iVar2 = *(int *)(param_1 + 0x1a8) / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (iVar5 + iVar4 < 1) {
            iVar5 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar5 = iVar5 + iVar2;
          }
        }
        else {
          iVar5 = iVar5 + *(int *)(param_1 + 0x1b0);
        }
        pvVar3 = operator_new(iVar5 * 4);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x1a0)) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x1a4) + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x1a0));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x1a4));
        *(void **)(param_1 + 0x1a4) = pvVar3;
        *(int *)(param_1 + 0x1a8) = iVar5;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x1a4) + *(int *)(param_1 + 0x1a0) * 4) = puVar1;
      iVar5 = *(int *)(param_1 + 0x1a0) + 1;
      *(int *)(param_1 + 0x1a0) = iVar5;
    }
  }
  ExceptionList = local_c;
  return;
}

