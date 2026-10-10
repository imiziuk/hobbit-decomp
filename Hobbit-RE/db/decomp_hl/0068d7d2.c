
uint FUN_0068d7d2(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  ushort *puVar11;
  int *unaff_EDI;
  int *local_18;
  int local_10;
  int local_8;
  
  puVar3 = (undefined4 *)unaff_EDI[5];
  local_8 = puVar3[1];
  pbVar9 = (byte *)*puVar3;
  if (local_8 == 0) {
    uVar6 = (*(code *)puVar3[3])();
    if ((char)uVar6 != '\0') {
      pbVar9 = (byte *)*puVar3;
      local_8 = puVar3[1];
      goto LAB_0068d804;
    }
LAB_0068da18:
    uVar6 = uVar6 & 0xffffff00;
  }
  else {
LAB_0068d804:
    local_8 = local_8 + -1;
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    if (local_8 == 0) {
      uVar6 = (*(code *)puVar3[3])();
      if ((char)uVar6 == '\0') goto LAB_0068da18;
      pbVar9 = (byte *)*puVar3;
      local_8 = puVar3[1];
    }
    local_8 = local_8 + -1;
    pbVar10 = pbVar9 + 1;
    iVar8 = (uint)bVar2 * 0x100 + (uint)*pbVar9 + -2;
    while (local_10 = iVar8, 0 < local_10) {
      if (local_8 == 0) {
        uVar6 = (*(code *)puVar3[3])();
        if ((char)uVar6 == '\0') goto LAB_0068da18;
        pbVar10 = (byte *)*puVar3;
        local_8 = puVar3[1];
      }
      bVar2 = *pbVar10;
      local_8 = local_8 + -1;
      *(undefined4 *)(*unaff_EDI + 0x14) = 0x50;
      uVar6 = bVar2 & 0xf;
      *(uint *)(*unaff_EDI + 0x18) = uVar6;
      iVar7 = (int)(uint)bVar2 >> 4;
      *(int *)(*unaff_EDI + 0x1c) = iVar7;
      pbVar10 = pbVar10 + 1;
      (**(code **)(*unaff_EDI + 4))();
      if (3 < uVar6) {
        *(undefined4 *)(*unaff_EDI + 0x14) = 0x1e;
        *(uint *)(*unaff_EDI + 0x18) = uVar6;
        (**(code **)*unaff_EDI)();
      }
      piVar1 = unaff_EDI + uVar6 + 0x24;
      if (*piVar1 == 0) {
        iVar8 = FUN_006924fe();
        *piVar1 = iVar8;
      }
      iVar8 = *piVar1;
      local_18 = &DAT_006fb870;
      do {
        if (iVar7 == 0) {
          if (local_8 == 0) {
            uVar6 = (*(code *)puVar3[3])();
            if ((char)uVar6 == '\0') goto LAB_0068da18;
            pbVar10 = (byte *)*puVar3;
            local_8 = puVar3[1];
          }
          uVar5 = (ushort)*pbVar10;
        }
        else {
          if (local_8 == 0) {
            uVar6 = (*(code *)puVar3[3])();
            if ((char)uVar6 == '\0') goto LAB_0068da18;
            pbVar10 = (byte *)*puVar3;
            local_8 = puVar3[1];
          }
          local_8 = local_8 + -1;
          bVar2 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          if (local_8 == 0) {
            uVar6 = (*(code *)puVar3[3])();
            if ((char)uVar6 == '\0') goto LAB_0068da18;
            pbVar10 = (byte *)*puVar3;
            local_8 = puVar3[1];
          }
          uVar5 = (ushort)bVar2 * 0x100 + (ushort)*pbVar10;
        }
        local_8 = local_8 + -1;
        iVar4 = *local_18;
        local_18 = local_18 + 1;
        pbVar10 = pbVar10 + 1;
        *(ushort *)(iVar8 + iVar4 * 2) = uVar5;
      } while ((int)local_18 < 0x6fb970);
      if (1 < *(int *)(*unaff_EDI + 0x68)) {
        puVar11 = (ushort *)(iVar8 + 4);
        local_18 = (int *)0x8;
        do {
          iVar8 = *unaff_EDI;
          *(uint *)(iVar8 + 0x18) = (uint)puVar11[-2];
          *(uint *)(iVar8 + 0x1c) = (uint)puVar11[-1];
          *(uint *)(iVar8 + 0x20) = (uint)*puVar11;
          *(uint *)(iVar8 + 0x24) = (uint)puVar11[1];
          *(uint *)(iVar8 + 0x28) = (uint)puVar11[2];
          *(uint *)(iVar8 + 0x2c) = (uint)puVar11[3];
          *(uint *)(iVar8 + 0x30) = (uint)puVar11[4];
          *(uint *)(iVar8 + 0x34) = (uint)puVar11[5];
          *(undefined4 *)(*unaff_EDI + 0x14) = 0x5c;
          (**(code **)(*unaff_EDI + 4))();
          puVar11 = puVar11 + 8;
          local_18 = (int *)((int)local_18 + -1);
        } while (local_18 != (int *)0x0);
      }
      iVar8 = local_10 + -0x41;
      if (iVar7 != 0) {
        iVar8 = local_10 + -0x81;
      }
    }
    puVar3[1] = local_8;
    *puVar3 = pbVar10;
    uVar6 = CONCAT31((int3)((uint)local_8 >> 8),1);
  }
  return uVar6;
}

