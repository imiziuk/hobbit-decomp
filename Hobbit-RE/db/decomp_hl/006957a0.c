
void FUN_006957a0(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int aiStack_51c [257];
  char local_118 [260];
  byte *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if (*param_3 == 0) {
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x5d4);
    *param_3 = iVar2;
  }
  iVar2 = *param_3;
  iVar3 = 0;
  *(int *)(iVar2 + 0xd0) = param_2;
  param_1 = 0;
  param_3 = (int *)0x1;
  do {
    uVar6 = (uint)*(byte *)((int)param_3 + param_2);
    local_8 = uVar6;
    if (uVar6 != 0) {
      pcVar10 = local_118 + iVar3;
      for (uVar7 = (uint)(*(byte *)((int)param_3 + param_2) >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint *)pcVar10 =
             CONCAT22(CONCAT11((char)param_3,(char)param_3),CONCAT11((char)param_3,(char)param_3));
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = (char)param_3;
        pcVar10 = pcVar10 + 1;
      }
      iVar3 = param_1 + uVar6;
      param_1 = iVar3;
    }
    param_3 = (int *)((int)param_3 + 1);
  } while ((int)param_3 < 0x11);
  local_118[iVar3] = '\0';
  iVar3 = (int)local_118[0];
  iVar4 = 0;
  iVar11 = 0;
  iVar8 = iVar3;
  while (local_118[0] != '\0') {
    while (iVar8 == iVar3) {
      cVar1 = local_118[iVar4 + 1];
      aiStack_51c[iVar4] = iVar11;
      iVar4 = iVar4 + 1;
      iVar11 = iVar11 + 1;
      iVar8 = (int)cVar1;
    }
    iVar11 = iVar11 << 1;
    iVar3 = iVar3 + 1;
    local_118[0] = local_118[iVar4];
  }
  iVar3 = 0;
  iVar8 = 1;
  piVar5 = (int *)(iVar2 + 0x48);
  do {
    if (*(char *)(iVar8 + param_2) == '\0') {
      *piVar5 = -1;
    }
    else {
      iVar4 = aiStack_51c[iVar3];
      piVar5[0x12] = iVar3;
      piVar5[-0x11] = iVar4;
      iVar3 = iVar3 + (uint)*(byte *)(iVar8 + param_2);
      *piVar5 = aiStack_51c[iVar3 + -1];
    }
    iVar8 = iVar8 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar8 < 0x11);
  param_1 = 0;
  *(undefined4 *)(iVar2 + 0x88) = 0xfffff;
  puVar12 = (undefined4 *)(iVar2 + 0xd4);
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  param_3 = (int *)0x1;
  local_c = 7;
  do {
    local_14 = (byte *)((int)param_3 + param_2);
    local_10 = 1;
    if (*local_14 != 0) {
      iVar3 = 1 << ((byte)local_c & 0x1f);
      puVar9 = (undefined1 *)(param_1 + 0x11 + param_2);
      do {
        iVar8 = aiStack_51c[param_1] << ((byte)local_c & 0x1f);
        if (0 < iVar3) {
          puVar13 = (undefined1 *)(iVar8 + 0x4d4 + iVar2);
          piVar5 = (int *)(iVar2 + 0xd4 + iVar8 * 4);
          local_8 = iVar3;
          do {
            *piVar5 = (int)param_3;
            piVar5 = piVar5 + 1;
            *puVar13 = *puVar9;
            puVar13 = puVar13 + 1;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
        }
        local_10 = local_10 + 1;
        param_1 = param_1 + 1;
        puVar9 = puVar9 + 1;
      } while (local_10 <= (int)(uint)*local_14);
    }
    param_3 = (int *)((int)param_3 + 1);
    local_c = local_c + -1;
  } while (-1 < local_c);
  return;
}

