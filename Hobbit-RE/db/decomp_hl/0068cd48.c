
uint FUN_0068cd48(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  byte *pbVar10;
  int *unaff_ESI;
  int local_1c;
  int *local_18;
  int local_10;
  int local_8;
  
  puVar3 = (undefined4 *)unaff_ESI[5];
  local_8 = puVar3[1];
  pbVar8 = (byte *)*puVar3;
  if (*(char *)(unaff_ESI[100] + 0x51) == '\0') {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x3d;
    (**(code **)*unaff_ESI)();
  }
  if (local_8 == 0) {
    uVar5 = (*(code *)puVar3[3])();
    if ((char)uVar5 != '\0') {
      pbVar8 = (byte *)*puVar3;
      local_8 = puVar3[1];
      goto LAB_0068cd97;
    }
LAB_0068d02d:
    uVar5 = uVar5 & 0xffffff00;
  }
  else {
LAB_0068cd97:
    local_8 = local_8 + -1;
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    if (local_8 == 0) {
      uVar5 = (*(code *)puVar3[3])();
      if ((char)uVar5 == '\0') goto LAB_0068d02d;
      pbVar8 = (byte *)*puVar3;
      local_8 = puVar3[1];
    }
    bVar2 = *pbVar8;
    local_8 = local_8 + -1;
    pbVar8 = pbVar8 + 1;
    if (local_8 == 0) {
      uVar5 = (*(code *)puVar3[3])();
      if ((char)uVar5 == '\0') goto LAB_0068d02d;
      pbVar8 = (byte *)*puVar3;
      local_8 = puVar3[1];
    }
    uVar6 = (uint)*pbVar8;
    local_8 = local_8 + -1;
    pbVar8 = pbVar8 + 1;
    if ((((uint)bVar1 * 0x100 + (uint)bVar2 != uVar6 * 2 + 6) || (uVar6 == 0)) || (4 < uVar6)) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 9;
      (**(code **)*unaff_ESI)();
    }
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x66;
    *(uint *)(*unaff_ESI + 0x18) = uVar6;
    (**(code **)(*unaff_ESI + 4))();
    local_1c = 0;
    unaff_ESI[0x48] = uVar6;
    if (uVar6 != 0) {
      local_18 = unaff_ESI + 0x49;
      do {
        if (local_8 == 0) {
          uVar5 = (*(code *)puVar3[3])();
          if ((char)uVar5 == '\0') goto LAB_0068d02d;
          pbVar8 = (byte *)*puVar3;
          local_8 = puVar3[1];
        }
        uVar7 = (uint)*pbVar8;
        local_8 = local_8 + -1;
        pbVar8 = pbVar8 + 1;
        if (local_8 == 0) {
          uVar5 = (*(code *)puVar3[3])();
          if ((char)uVar5 == '\0') goto LAB_0068d02d;
          pbVar8 = (byte *)*puVar3;
          local_8 = puVar3[1];
        }
        bVar1 = *pbVar8;
        local_8 = local_8 + -1;
        local_10 = 0;
        pbVar8 = pbVar8 + 1;
        puVar9 = (uint *)unaff_ESI[0x31];
        if (0 < unaff_ESI[8]) {
          do {
            if (uVar7 == *puVar9) goto LAB_0068cee9;
            local_10 = local_10 + 1;
            puVar9 = puVar9 + 0x15;
          } while (local_10 < unaff_ESI[8]);
        }
        *(undefined4 *)(*unaff_ESI + 0x14) = 5;
        *(uint *)(*unaff_ESI + 0x18) = uVar7;
        (**(code **)*unaff_ESI)();
LAB_0068cee9:
        *local_18 = (int)puVar9;
        puVar9[6] = bVar1 & 0xf;
        puVar9[5] = (int)(uint)bVar1 >> 4;
        iVar4 = *unaff_ESI;
        *(uint *)(iVar4 + 0x18) = uVar7;
        *(uint *)(iVar4 + 0x1c) = puVar9[5];
        *(uint *)(iVar4 + 0x20) = puVar9[6];
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x67;
        (**(code **)(*unaff_ESI + 4))();
        local_1c = local_1c + 1;
        local_18 = local_18 + 1;
      } while (local_1c < (int)uVar6);
    }
    if (local_8 == 0) {
      uVar5 = (*(code *)puVar3[3])();
      if ((char)uVar5 == '\0') goto LAB_0068d02d;
      pbVar8 = (byte *)*puVar3;
      local_8 = puVar3[1];
    }
    local_8 = local_8 + -1;
    pbVar10 = pbVar8 + 1;
    unaff_ESI[0x5a] = (uint)*pbVar8;
    if (local_8 == 0) {
      uVar5 = (*(code *)puVar3[3])();
      if ((char)uVar5 == '\0') goto LAB_0068d02d;
      pbVar10 = (byte *)*puVar3;
      local_8 = puVar3[1];
    }
    local_8 = local_8 + -1;
    pbVar8 = pbVar10 + 1;
    unaff_ESI[0x5b] = (uint)*pbVar10;
    if (local_8 == 0) {
      uVar5 = (*(code *)puVar3[3])();
      if ((char)uVar5 == '\0') goto LAB_0068d02d;
      pbVar8 = (byte *)*puVar3;
      local_8 = puVar3[1];
    }
    bVar1 = *pbVar8;
    unaff_ESI[0x5d] = bVar1 & 0xf;
    iVar4 = *unaff_ESI;
    unaff_ESI[0x5c] = (int)(uint)bVar1 >> 4;
    *(int *)(iVar4 + 0x18) = unaff_ESI[0x5a];
    *(int *)(iVar4 + 0x1c) = unaff_ESI[0x5b];
    *(int *)(iVar4 + 0x20) = unaff_ESI[0x5c];
    *(int *)(iVar4 + 0x24) = unaff_ESI[0x5d];
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x68;
    (**(code **)(*unaff_ESI + 4))();
    *(undefined4 *)(unaff_ESI[100] + 0x54) = 0;
    unaff_ESI[0x1f] = unaff_ESI[0x1f] + 1;
    puVar3[1] = local_8 + -1;
    *puVar3 = pbVar8 + 1;
    uVar5 = CONCAT31((int3)((uint)(local_8 + -1) >> 8),1);
  }
  return uVar5;
}

