
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a7090(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    param_3 = param_3 + *(float *)(param_1 + 0x140);
    *(float *)(param_1 + 0x140) = param_3;
    if (param_3 < _DAT_006ec06c == (NAN(param_3) || NAN(_DAT_006ec06c))) {
      iVar3 = *(int *)(param_1 + 0x100);
      iVar1 = *(int *)(param_1 + 0x104);
      *(undefined4 *)(param_1 + 0x140) = 0;
      iVar2 = *(int *)(param_1 + 0x160);
      if ((((iVar3 < *(int *)(param_1 + 0x118)) || (*(int *)(param_1 + 0x120) < iVar3)) ||
          (iVar1 < *(int *)(param_1 + 0x11c))) || (*(int *)(param_1 + 0x124) < iVar1)) {
        iVar4 = iVar2;
        if (((*(int *)(param_1 + 0x108) <= iVar3) && (iVar3 <= *(int *)(param_1 + 0x110))) &&
           ((*(int *)(param_1 + 0x10c) <= iVar1 &&
            ((iVar1 <= *(int *)(param_1 + 0x114) && (iVar4 = iVar2 + -1, iVar4 < 0)))))) {
          iVar4 = 0;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x15c);
        iVar4 = iVar2 + 1;
        if (iVar3 < iVar2 + 1) {
          iVar4 = iVar3;
        }
      }
      if (iVar4 != iVar2) {
        *(int *)(param_1 + 0x160) = iVar4;
      }
    }
  }
  return;
}

