
void FUN_006995c6(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int unaff_EDI;
  char local_1c;
  int *local_18;
  int local_14;
  undefined1 *local_10;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)(unaff_EDI + 0x1a4);
  if (*(int *)(unaff_EDI + 0x4c) == 1) {
    local_14 = 0x1fe;
    *(undefined1 *)(iVar4 + 0x1c) = 1;
  }
  else {
    local_14 = 0;
    *(undefined1 *)(iVar4 + 0x1c) = 0;
  }
  uVar6 = (**(code **)(*(int *)(unaff_EDI + 4) + 8))();
  *(undefined4 *)(iVar4 + 0x18) = uVar6;
  iVar7 = *(int *)(iVar4 + 0x14);
  local_c = 0;
  if (0 < *(int *)(unaff_EDI + 100)) {
    local_18 = (int *)(iVar4 + 0x20);
    do {
      iVar7 = iVar7 / *local_18;
      if (local_14 != 0) {
        piVar1 = (int *)(*(int *)(iVar4 + 0x18) + local_c * 4);
        *piVar1 = *piVar1 + 0xff;
      }
      puVar5 = *(undefined1 **)(*(int *)(iVar4 + 0x18) + local_c * 4);
      cVar2 = '\0';
      iVar8 = FUN_00699496();
      local_8 = 0;
      do {
        while (iVar8 < local_8) {
          cVar2 = cVar2 + '\x01';
          iVar8 = FUN_00699496();
        }
        local_1c = (char)iVar7;
        iVar3 = local_8 + 1;
        puVar5[local_8] = local_1c * cVar2;
        local_8 = iVar3;
      } while (iVar3 < 0x100);
      if (local_14 != 0) {
        local_8 = 1;
        local_10 = puVar5;
        do {
          local_10 = local_10 + -1;
          *local_10 = *puVar5;
          iVar8 = local_8 + 1;
          (puVar5 + 0xff)[local_8] = puVar5[0xff];
          local_8 = iVar8;
        } while (iVar8 < 0x100);
      }
      local_c = local_c + 1;
      local_18 = local_18 + 1;
    } while (local_c < *(int *)(unaff_EDI + 100));
  }
  return;
}

