
void __thiscall FUN_00562540(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dad31;
  local_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 < param_2) {
    if (iVar6 < param_2) {
      param_2 = param_2 - iVar6;
      ExceptionList = &local_c;
      do {
        puVar1 = (undefined4 *)operator_new(100);
        local_4 = 0;
        puVar5 = (undefined4 *)0x0;
        if (puVar1 != (undefined4 *)0x0) {
          FUN_006499d0();
          local_4._0_1_ = 1;
          FUN_006499d0();
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_0064a2e0(s_Enter_Action_s_Name_00727068);
          *puVar1 = 0;
          puVar1[0x17] = 0;
          puVar1[0x18] = puVar1[0x18] & 0xfffffff8;
          puVar5 = puVar1;
        }
        iVar6 = *(int *)(param_1 + 0x2c);
        local_4 = 0xffffffff;
        if (*(int *)(param_1 + 0x34) < iVar6 + 1) {
          if (*(int *)(param_1 + 0x3c) == 0) {
            iVar2 = *(int *)(param_1 + 0x34) / 2;
            iVar4 = 1;
            if (0 < iVar2) {
              iVar4 = iVar2;
            }
            if (iVar6 + iVar4 < 1) {
              iVar6 = 1;
            }
            else {
              if (iVar2 < 1) {
                iVar2 = 1;
              }
              iVar6 = iVar6 + iVar2;
            }
          }
          else {
            iVar6 = iVar6 + *(int *)(param_1 + 0x3c);
          }
          pvVar3 = operator_new(iVar6 * 4);
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x2c)) {
            do {
              *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar4 * 4);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(param_1 + 0x2c));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x30));
          *(void **)(param_1 + 0x30) = pvVar3;
          *(int *)(param_1 + 0x34) = iVar6;
        }
        *(undefined4 **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 4) = puVar5;
        param_2 = param_2 + -1;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      } while (param_2 != 0);
    }
  }
  else if (param_2 < iVar6) {
    iVar6 = *(int *)(param_1 + 0x34);
    iVar4 = param_2;
    if (param_2 <= iVar6) {
      iVar4 = iVar6;
    }
    ExceptionList = &local_c;
    if (iVar4 != iVar6) {
      ExceptionList = &local_c;
      pvVar3 = operator_new(iVar4 * 4);
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x2c)) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar6 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar6 * 4);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0x2c));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0x30));
      *(void **)(param_1 + 0x30) = pvVar3;
      *(int *)(param_1 + 0x34) = iVar4;
    }
    *(int *)(param_1 + 0x2c) = param_2;
    FUN_0055d480();
  }
  ExceptionList = local_c;
  return;
}

