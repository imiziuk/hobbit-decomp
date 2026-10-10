
int __thiscall FUN_0069f890(int param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7411;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0069fa60(param_2);
  if (iVar1 == -1) {
    param_2 = operator_new(0x30);
    local_4 = 0;
    if (param_2 == (void *)0x0) {
      param_2 = (void *)0x0;
    }
    else {
      FUN_006499d0();
    }
    local_4 = 0xffffffff;
    FUN_0064a2e0(uVar3);
    iVar1 = 1;
    if (*(int *)(param_1 + 0x398) == 0) {
      pvVar2 = operator_new(0xc88);
      local_4 = 2;
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006a95e0();
      }
      local_4 = 0xffffffff;
      *(undefined4 *)((int)param_2 + 0x2c) = uVar3;
      FUN_006a96b0(param_3);
    }
    else {
      pvVar2 = operator_new(0x60);
      local_4 = 1;
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006a9d90();
      }
      *(undefined4 *)((int)param_2 + 0x2c) = uVar3;
      local_4 = 0xffffffff;
      FUN_006a9e20(*(undefined4 *)(param_1 + 0x39c),*(undefined4 *)(param_1 + 0x3c8),
                   *(undefined4 *)(param_1 + 0x3cc),*(undefined4 *)(param_1 + 0x3d0));
    }
    iVar5 = *(int *)(param_1 + 0x9c);
    if (*(int *)(param_1 + 0xa4) < iVar5 + 1) {
      if (*(int *)(param_1 + 0xac) == 0) {
        iVar4 = *(int *)(param_1 + 0xa4) / 2;
        iVar6 = 1;
        if (0 < iVar4) {
          iVar6 = iVar4;
        }
        if (0 < iVar6 + iVar5) {
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          iVar1 = iVar5 + iVar4;
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0xac) + iVar5;
      }
      pvVar2 = operator_new(iVar1 * 4);
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x9c)) {
        do {
          *(undefined4 *)((int)pvVar2 + iVar5 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xa0) + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x9c));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0xa0));
      *(void **)(param_1 + 0xa0) = pvVar2;
      *(int *)(param_1 + 0xa4) = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x9c) + 1;
    *(int *)(param_1 + 0x9c) = iVar1;
    *(void **)(*(int *)(param_1 + 0xa0) + -4 + iVar1 * 4) = param_2;
    iVar1 = *(int *)(param_1 + 0x9c) + -1;
  }
  ExceptionList = local_c;
  return iVar1;
}

