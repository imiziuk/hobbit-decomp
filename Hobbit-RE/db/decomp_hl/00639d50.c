
void __thiscall FUN_00639d50(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_1c;
  undefined4 *local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e59c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00640420(s_IdleLeashRadius_0074a6f8,param_1 + 100);
  FUN_00640420(s_IdleAnimDelay_0074a2b4,param_1 + 0x68);
  FUN_00640420(s_WanderDelay_007490ac,param_1 + 0x6c);
  local_1c = 0;
  FUN_00640450(s_PatrolCount_0074a474,&local_1c);
  iVar6 = 0;
  if (0 < local_1c) {
    do {
      local_18 = (undefined4 *)operator_new(0x10);
      if (local_18 == (undefined4 *)0x0) {
        local_18 = (undefined4 *)0x0;
      }
      else {
        *local_18 = 0;
        local_18[1] = 0;
        local_18[2] = 0x3f800000;
        local_18[3] = 0;
      }
      if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x50) + 1) {
        if (*(int *)(param_1 + 0x60) == 0) {
          iVar1 = *(int *)(param_1 + 0x58) / 2;
          iVar3 = 1;
          if (0 < iVar1) {
            iVar3 = iVar1;
          }
          if (iVar3 + *(int *)(param_1 + 0x50) < 1) {
            iVar1 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            iVar1 = *(int *)(param_1 + 0x50) + iVar1;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x50);
        }
        pvVar2 = operator_new(iVar1 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x50)) {
          do {
            *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x50));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
        *(void **)(param_1 + 0x54) = pvVar2;
        *(int *)(param_1 + 0x58) = iVar1;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x50) * 4) = local_18;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      FUN_00649920(local_14,s_PatrolPoint_d_0074a6e8,iVar6);
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar6 * 4);
      local_4 = 0;
      uVar4 = FUN_00649940(uVar5);
      FUN_006405e0(uVar4,uVar5);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_10,s_PatrolPause_d_0074a6d8,iVar6);
      iVar1 = *(int *)(*(int *)(param_1 + 0x54) + iVar6 * 4) + 8;
      local_4 = 1;
      uVar5 = FUN_00649940(iVar1);
      FUN_00640420(uVar5,iVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_1c);
  }
  FUN_005bf550(param_2);
  ExceptionList = local_c;
  return;
}

