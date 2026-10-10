
void __fastcall FUN_006a5020(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if ((*(int *)(param_1 + 0xe8) == 0) && ((*(uint *)(param_1 + 0x2c) & 0x200) != 0)) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x3c))(piVar1,param_1,5,*(undefined4 *)(param_1 + 0x174));
      return;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x2c);
    iVar3 = *(int *)(param_1 + 0x118);
    uVar10 = uVar2 & 0x200;
    if ((uVar10 != 0) || (iVar7 = FUN_006a4d30(), 0 < iVar7)) {
      iVar7 = *(int *)(param_1 + 0x110);
      iVar4 = *(int *)(param_1 + 0x114);
      if ((((iVar7 < iVar3) || (*(int *)(param_1 + 0x130) < iVar7)) ||
          (iVar4 < *(int *)(param_1 + 0x11c))) || (*(int *)(param_1 + 0x134) < iVar4)) {
        if (uVar10 == 0) {
          *(uint *)(param_1 + 0x2c) = uVar2 ^ 0x200;
        }
        uVar6 = *(undefined4 *)(param_1 + 0x10c);
        *(undefined4 *)(param_1 + 0x174) = uVar6;
        if ((*(uint *)(param_1 + 0x2c) & 0x200) != 0) {
          *(undefined4 *)(param_1 + 0x178) = uVar6;
          return;
        }
        piVar1 = *(int **)(param_1 + 0xc);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x3c))(piVar1,param_1,5,uVar6);
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x174);
        if (((*(int *)(param_1 + 0x128) <= iVar7) && (iVar7 <= *(int *)(param_1 + 0x130))) &&
           ((*(int *)(param_1 + 300) <= iVar4 && (iVar4 <= *(int *)(param_1 + 0x134))))) {
          iVar5 = *(int *)(param_1 + 0x160);
          iVar8 = *(int *)(param_1 + 0x17c) + 1;
          *(int *)(param_1 + 0x17c) = iVar8;
          iVar9 = iVar5 - *(int *)(param_1 + 0x180);
          if (iVar9 <= iVar8) {
            *(int *)(param_1 + 0x17c) = iVar9;
          }
          if (iVar5 <= iVar3) {
            *(int *)(param_1 + 0x174) = iVar5 + -1;
          }
          *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x174);
          *(undefined4 *)(param_1 + 0x148) = 1;
        }
        if (((iVar7 < *(int *)(param_1 + 0x118)) || (*(int *)(param_1 + 0x120) < iVar7)) ||
           ((iVar4 < *(int *)(param_1 + 0x11c) || (*(int *)(param_1 + 0x124) < iVar4)))) {
          if ((((*(int *)(param_1 + 0x138) <= iVar7) && (iVar7 <= *(int *)(param_1 + 0x140))) &&
              (*(int *)(param_1 + 0x13c) <= iVar4)) && (iVar4 <= *(int *)(param_1 + 0x144))) {
            *(undefined4 *)(param_1 + 0x14c) = 1;
          }
        }
        else {
          piVar1 = (int *)(param_1 + 0x17c);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            *(undefined4 *)(param_1 + 0x17c) = 0;
          }
          if (*(int *)(param_1 + 0x174) < 0) {
            *(undefined4 *)(param_1 + 0x174) = 0;
          }
          *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x174);
          *(undefined4 *)(param_1 + 0x148) = 1;
        }
        if (((*(int *)(param_1 + 0x148) != 0) && (*(int *)(param_1 + 0x174) != iVar3)) &&
           (piVar1 = *(int **)(param_1 + 0xc), piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0x3c))(piVar1,param_1,4,*(int *)(param_1 + 0x174));
          return;
        }
      }
    }
  }
  return;
}

