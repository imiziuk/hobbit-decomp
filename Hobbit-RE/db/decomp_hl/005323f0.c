
undefined4 __thiscall
FUN_005323f0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = false;
  FUN_005321f0();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    do {
      if (bVar1) goto LAB_005324e8;
      piVar2 = (int *)(*(int *)(param_1 + 0xc0) + iVar4 * 4);
      iVar5 = 0;
      if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0xc0) + iVar4 * 4) + 100)) {
        do {
          iVar3 = FUN_00647ed0(**(undefined4 **)(*(int *)(*piVar2 + 0x68) + iVar5 * 4),*param_2);
          if (iVar3 == 0) {
            if ((((*(int *)(param_1 + 0x60) != iVar5) || (*(int *)(param_1 + 0x2c) != iVar4)) ||
                (*(int *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1) == 0)) ||
               (DAT_00736e78 != 0)) {
              *(undefined4 *)(param_1 + 0x1d8) = param_3;
              *(undefined4 *)(param_1 + 0x1b4) = 1;
              FUN_005322b0(iVar4,0);
              FUN_00532230(iVar5,param_4);
            }
            bVar1 = true;
            break;
          }
          piVar2 = (int *)(*(int *)(param_1 + 0xc0) + iVar4 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(*(int *)(*(int *)(param_1 + 0xc0) + iVar4 * 4) + 100));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xbc));
    if (bVar1) goto LAB_005324e8;
  }
  FUN_0064e870(7,s_Audio_Descriptor___s__Does_not_e_00736f00,*param_2);
LAB_005324e8:
  return *(undefined4 *)(param_1 + 0x140);
}

