
void FUN_0067b260(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar5 = 0;
  if ((*(int *)(param_1 + 0x60) != 0) && (piVar6 = *(int **)(param_1 + 0x58), piVar6[0x31] != 0)) {
    if (1 < piVar6[0x45]) {
      FUN_0067a700(piVar6[0x30],piVar6,piVar6[0x45] + -2);
    }
    iVar7 = *piVar6;
    local_10 = 0;
    param_1 = 0;
    local_8 = iVar7;
    if (0 < iVar7) {
      local_14 = piVar6 + 0x36;
      local_c = iVar7;
      do {
        iVar4 = *local_14;
        piVar3 = *(int **)(iVar4 + 0x78);
        if (piVar3 == (int *)0x0) {
          param_1 = param_1 + 1;
        }
        else {
          (**(code **)(*piVar3 + 4))(piVar3);
          uVar5 = *(uint *)(iVar4 + 0x18);
          (**(code **)(**(int **)(iVar4 + 0x78) + 0x10))
                    (*(int **)(iVar4 + 0x78),(uint *)(iVar4 + 0x18),0);
          (**(code **)(**(int **)(iVar4 + 0x78) + 0x24))(*(int **)(iVar4 + 0x78),&local_14);
          if ((*(uint *)(iVar4 + 0x18) < uVar5) && (0x20000 < uVar5)) {
            *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 0x40000;
          }
          uVar2 = FUN_0067be30(iVar4);
          *(uint *)(iVar4 + 0x24) = uVar2;
          uVar5 = (uint)*(ushort *)(iVar4 + 0x26);
          if (*(uint *)(*(int *)(iVar4 + 0xc) + 0x18) <= uVar2) {
            local_14 = (int *)((int)local_14 + 1);
          }
          (**(code **)(**(int **)(iVar4 + 0x78) + 8))(*(int **)(iVar4 + 0x78));
          iVar7 = local_8;
        }
        local_14 = local_14 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    if (iVar7 == local_10) {
      if (0 < iVar7) {
        piVar3 = piVar6 + 0x36;
        iVar4 = iVar7;
        do {
          iVar1 = *piVar3;
          piVar3 = piVar3 + 1;
          iVar4 = iVar4 + -1;
          *(uint *)(iVar1 + 0x1c) = uVar5;
        } while (iVar4 != 0);
      }
      if ((uint)piVar6[0x34] < (uint)piVar6[0x33]) {
        FUN_00677a80(piVar6,0);
      }
      else {
        if (piVar6[0x2e] == 0) {
          FUN_0064e7d0(s_Stream__x_should_be_done_00752dc0,piVar6);
          piVar6[0x2e] = 1;
        }
        FUN_0067b860(*(undefined4 *)(piVar6[0x36] + 0x78),0,0,piVar6[0x3f] * 0x9000,0x9000);
      }
    }
    if ((iVar7 == param_1) && (0 < iVar7)) {
      piVar6 = piVar6 + 0x36;
      do {
        piVar3 = *(int **)(*piVar6 + 0x78);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x48))(piVar3);
        }
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

