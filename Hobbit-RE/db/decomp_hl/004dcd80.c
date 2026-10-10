
void __fastcall FUN_004dcd80(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xffffffeb | 1;
  if (*(int *)(param_1 + 0x144) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x13c));
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x14c)) {
    do {
      iVar4 = *(int *)(param_1 + 0x138);
      if (*(int *)(param_1 + 0x140) < iVar4 + 1) {
        if (*(int *)(param_1 + 0x148) == 0) {
          iVar1 = *(int *)(param_1 + 0x140) / 2;
          iVar3 = 1;
          if (0 < iVar1) {
            iVar3 = iVar1;
          }
          if (iVar3 + iVar4 < 1) {
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
          iVar4 = *(int *)(param_1 + 0x148) + iVar4;
        }
        pvVar2 = operator_new(iVar4 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x138)) {
          do {
            *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x13c) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x138));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x13c));
        *(int *)(param_1 + 0x140) = iVar4;
        *(void **)(param_1 + 0x13c) = pvVar2;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x13c) + *(int *)(param_1 + 0x138) * 4) = 0xffffffff;
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x14c));
  }
  *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) | 8;
  *(undefined4 *)(param_1 + 0x154) = 0;
  iVar5 = FUN_004ac5d0();
  if ((iVar5 != 0) && ((char)((uint)*(undefined4 *)(param_1 + 0x120) >> 8) < '\0')) {
    FUN_004aaaf0(s_OnInit_0072d84c,&DAT_0071fa28,param_1);
    *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xffff7fff;
  }
  return;
}

