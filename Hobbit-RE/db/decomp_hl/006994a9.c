
void FUN_006994a9(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  iVar1 = unaff_ESI[0x69];
  local_20 = (int *)(iVar1 + 0x20);
  iVar4 = FUN_006993b2();
  iVar2 = *unaff_ESI;
  if (unaff_ESI[0x19] == 3) {
    *(int *)(iVar2 + 0x18) = iVar4;
    *(int *)(iVar2 + 0x1c) = *local_20;
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x5d;
  }
  else {
    *(undefined4 *)(iVar2 + 0x14) = 0x5e;
    *(int *)(*unaff_ESI + 0x18) = iVar4;
  }
  (**(code **)(*unaff_ESI + 4))();
  piVar5 = (int *)(**(code **)(unaff_ESI[1] + 8))();
  local_14 = 0;
  local_24 = piVar5;
  local_1c = iVar4;
  if (0 < unaff_ESI[0x19]) {
    do {
      iVar2 = *local_20;
      iVar6 = local_1c / iVar2;
      local_c = 0;
      if (0 < iVar2) {
        local_18 = 0;
        do {
          uVar3 = FUN_0069947d();
          for (iVar7 = local_18; iVar7 < iVar4; iVar7 = iVar7 + local_1c) {
            local_8 = 0;
            if (0 < iVar6) {
              do {
                iVar8 = *local_24 + local_8;
                local_8 = local_8 + 1;
                *(undefined1 *)(iVar8 + iVar7) = uVar3;
              } while (local_8 < iVar6);
            }
          }
          local_c = local_c + 1;
          local_18 = local_18 + iVar6;
        } while (local_c < iVar2);
      }
      local_14 = local_14 + 1;
      local_20 = local_20 + 1;
      local_24 = local_24 + 1;
      local_1c = iVar6;
    } while (local_14 < unaff_ESI[0x19]);
  }
  *(int *)(iVar1 + 0x14) = iVar4;
  *(int **)(iVar1 + 0x10) = piVar5;
  return;
}

