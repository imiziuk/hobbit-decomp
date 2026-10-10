
void __thiscall FUN_005bde70(int param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x134);
  if (uVar1 < param_2) {
    if ((int)uVar1 < (int)param_2) {
      param_2 = param_2 - uVar1;
      do {
        pvVar2 = operator_new(0x18);
        if (pvVar2 != (void *)0x0) {
          FUN_00648600(pvVar2,0,0x18);
          iVar6 = *(int *)(param_1 + 0x134);
          if (*(int *)(param_1 + 0x13c) < iVar6 + 1) {
            if (*(int *)(param_1 + 0x144) == 0) {
              iVar3 = *(int *)(param_1 + 0x13c) / 2;
              iVar5 = 1;
              if (0 < iVar3) {
                iVar5 = iVar3;
              }
              if (iVar5 + iVar6 < 1) {
                iVar6 = 1;
              }
              else {
                if (iVar3 < 1) {
                  iVar3 = 1;
                }
                iVar6 = iVar6 + iVar3;
              }
            }
            else {
              iVar6 = *(int *)(param_1 + 0x144) + iVar6;
            }
            pvVar4 = operator_new(iVar6 * 4);
            iVar5 = 0;
            if (0 < *(int *)(param_1 + 0x134)) {
              do {
                *(undefined4 *)((int)pvVar4 + iVar5 * 4) =
                     *(undefined4 *)(*(int *)(param_1 + 0x138) + iVar5 * 4);
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)(param_1 + 0x134));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x138));
            *(void **)(param_1 + 0x138) = pvVar4;
            *(int *)(param_1 + 0x13c) = iVar6;
          }
          *(void **)(*(int *)(param_1 + 0x138) + *(int *)(param_1 + 0x134) * 4) = pvVar2;
          *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return;
    }
  }
  else if (param_2 < uVar1) {
    uVar1 = *(uint *)(param_1 + 0x13c);
    uVar7 = param_2;
    if ((int)param_2 <= (int)uVar1) {
      uVar7 = uVar1;
    }
    if (uVar7 != uVar1) {
      pvVar2 = operator_new(uVar7 * 4);
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x134)) {
        do {
          *(undefined4 *)((int)pvVar2 + iVar6 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x138) + iVar6 * 4);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0x134));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0x138));
      *(void **)(param_1 + 0x138) = pvVar2;
      *(uint *)(param_1 + 0x13c) = uVar7;
    }
    *(uint *)(param_1 + 0x134) = param_2;
  }
  return;
}

