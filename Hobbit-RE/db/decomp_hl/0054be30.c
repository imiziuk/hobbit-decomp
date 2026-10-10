
void __thiscall FUN_0054be30(int param_1,uint param_2,uint param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9778;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__DestroyObject_0073cd6c);
  iVar3 = (int)*(short *)(param_1 + ((param_2 ^ param_3) * -0xfb & 0xfff) * 2);
  local_4 = 0;
  if (iVar3 != -1) {
    iVar4 = iVar3;
    do {
      iVar4 = (int)*(short *)(*(int *)(param_1 + 0x28c0) + iVar4 * 0x14 + 0xe);
    } while (iVar4 != -1);
  }
  if (iVar3 != -1) {
    iVar4 = *(int *)(param_1 + 0x28c0);
    do {
      iVar5 = *(int *)(iVar4 + iVar3 * 0x14);
      if (((iVar5 != 0) && (*(uint *)(iVar5 + 8) == param_2)) && (*(uint *)(iVar5 + 0xc) == param_3)
         ) {
        if (iVar3 != -1) {
          iVar5 = iVar3 * 0x14;
          piVar2 = *(int **)(iVar5 + iVar4);
          if (*(int *)(param_1 + 0x28d0) == 0) {
            iVar4 = (*(byte *)(piVar2 + 0x1f) + 0x100) * 0x20;
            piVar6 = (int *)(iVar4 + param_1);
            *piVar6 = *(int *)(iVar4 + param_1) + -1;
            piVar6[1] = *(int *)(iVar4 + 4 + param_1) + -1;
            FUN_0054c8e0(iVar3);
            (**(code **)(*piVar2 + 0x40))();
            (**(code **)(*piVar2 + 8))();
            FUN_0054e570(iVar3);
            (**(code **)*piVar2)(1);
            if (piVar6[3] == iVar3) {
              piVar6[3] = (int)*(short *)(*(int *)(param_1 + 0x28c0) + 4 + iVar5);
            }
            iVar4 = *(int *)(param_1 + 0x28c0);
            sVar1 = *(short *)(iVar4 + 6 + iVar5);
            if (sVar1 != -1) {
              *(undefined2 *)(iVar4 + 4 + sVar1 * 0x14) = *(undefined2 *)(iVar4 + 4 + iVar5);
            }
            iVar4 = *(int *)(param_1 + 0x28c0);
            sVar1 = *(short *)(iVar4 + 4 + iVar5);
            if (sVar1 != -1) {
              *(undefined2 *)(iVar4 + 6 + sVar1 * 0x14) = *(undefined2 *)(iVar4 + 6 + iVar5);
            }
            FUN_0054ba60(iVar3);
          }
          else {
            *(byte *)((int)piVar2 + 0x7a) = *(byte *)((int)piVar2 + 0x7a) | 2;
          }
        }
        break;
      }
      iVar3 = (int)*(short *)(iVar4 + iVar3 * 0x14 + 0xe);
    } while (iVar3 != -1);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

