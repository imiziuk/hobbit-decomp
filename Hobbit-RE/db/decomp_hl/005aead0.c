
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005aead0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int unaff_retaddr;
  int *piVar6;
  
  if ((*(int **)(param_1 + 0xbc) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x24))(), iVar1 == 0)) {
    *(float *)(param_4 + 0x20) = *(float *)(param_4 + 0x20) * _DAT_006e958c;
  }
  if (*(int **)(param_1 + 0xbc) == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x40))(param_2,param_3,param_4);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004021c0(param_2,param_3);
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x24))(), iVar3 != 0)) {
      piVar6 = piVar2;
      FUN_005af120(piVar2);
      iVar3 = FUN_004683d0(piVar6);
      if (iVar3 != 0) {
        iVar3 = FUN_005af120();
        if (*(int *)(iVar3 + 0x244) == 0) {
          uVar4 = (**(code **)(*piVar2 + 0x28))(1);
          FUN_004357e0(uVar4);
          FUN_005af120();
          FUN_005b3030();
          FUN_005aa7f0();
        }
        else {
          *(undefined4 *)(param_1 + 0x180) = param_2;
          *(undefined4 *)(param_1 + 0x184) = param_3;
        }
      }
    }
    if (((*(int *)(unaff_retaddr + 0x34) != 2) && (*(int *)(unaff_retaddr + 0x34) != 1)) &&
       (lVar5 = FUN_005af0f0(), lVar5 == CONCAT44(param_3,param_2))) {
      *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
      if ((*(uint *)(param_1 + 0x130) & 0x1000) == 0) {
        *(undefined4 *)(param_1 + 0x210) = 0;
        return iVar1;
      }
    }
  }
  return iVar1;
}

