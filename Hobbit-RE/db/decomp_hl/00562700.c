
void __thiscall FUN_00562700(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dad56;
  local_c = ExceptionList;
  local_10 = *(int *)(param_1 + 0x48);
  if (local_10 < (int)param_2) {
    if (local_10 < (int)param_2) {
      local_10 = (int)param_2 - local_10;
      ExceptionList = &local_c;
      do {
        param_2 = (undefined4 *)operator_new(0xa0);
        local_4 = 0;
        if (param_2 == (undefined4 *)0x0) {
          param_2 = (undefined4 *)0x0;
        }
        else {
          FUN_006499d0();
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_006499d0();
          param_2[0x1d] = 0;
          param_2[0x1c] = 0;
          param_2[0x1e] = 0;
          param_2[0x20] = 0;
          param_2[0x1f] = 0;
          param_2[0x1a] = 0;
          param_2[0x1b] = 0;
          param_2[0x24] = 0;
          param_2[0x23] = 0;
          param_2[0x25] = 0;
          param_2[0x27] = 0;
          param_2[0x26] = 0;
          param_2[0x21] = 0;
          param_2[0x22] = 0;
          param_2[2] = 0;
          param_2[3] = 0;
          *param_2 = 0;
          param_2[1] = param_2[1] & 0xfffffff0;
        }
        iVar4 = *(int *)(param_1 + 0x48);
        local_4 = 0xffffffff;
        if (*(int *)(param_1 + 0x50) < iVar4 + 1) {
          if (*(int *)(param_1 + 0x58) == 0) {
            iVar1 = *(int *)(param_1 + 0x50) / 2;
            iVar3 = 1;
            if (0 < iVar1) {
              iVar3 = iVar1;
            }
            if (iVar4 + iVar3 < 1) {
              iVar4 = 1;
            }
            else {
              if (iVar1 < 1) {
                iVar1 = 1;
              }
              iVar4 = iVar4 + iVar1;
            }
          }
          else {
            iVar4 = *(int *)(param_1 + 0x58) + iVar4;
          }
          pvVar2 = operator_new(iVar4 * 4);
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0x48)) {
            do {
              *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar3 * 4);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x48));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
          *(void **)(param_1 + 0x4c) = pvVar2;
          *(int *)(param_1 + 0x50) = iVar4;
        }
        *(undefined4 **)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48) * 4) = param_2;
        local_10 = local_10 + -1;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      } while (local_10 != 0);
    }
  }
  else if ((int)param_2 < local_10) {
    iVar3 = *(int *)(param_1 + 0x50);
    iVar1 = iVar3;
    if (iVar3 < (int)param_2) {
      iVar1 = (int)param_2;
    }
    param_2 = (undefined4 *)iVar1;
    if (param_2 != (undefined4 *)iVar3) {
      ExceptionList = &local_c;
      pvVar2 = operator_new((int)param_2 * 4);
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x48)) {
        do {
          *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar3 * 4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x48));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
      *(void **)(param_1 + 0x4c) = pvVar2;
      *(undefined4 **)(param_1 + 0x50) = param_2;
    }
    *(int *)(param_1 + 0x48) = iVar4;
  }
  ExceptionList = local_c;
  return;
}

