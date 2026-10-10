
/* WARNING: Removing unreachable block (ram,0x005bffca) */
/* WARNING: Removing unreachable block (ram,0x005bffdf) */

void __fastcall thunk_FUN_005bffb0(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar1 = DAT_00771f50;
  if (param_1 == 0x771f1c) {
    FUN_0054ad20();
    iVar3 = DAT_00771f50 - uVar1;
    iVar6 = -1;
    if ((iVar3 == -1) || (iVar6 = iVar3, iVar3 != 0)) {
      FUN_006c0fa0((undefined1 *)(uVar1 + (int)DAT_00771f4c),
                   (undefined1 *)(uVar1 + (int)DAT_00771f4c) + iVar6,iVar3 - iVar6);
      iVar6 = DAT_00771f50 - iVar6;
      cVar2 = FUN_0054a310(iVar6,0);
      if (cVar2 != '\0') {
        FUN_0054a2f0(iVar6);
      }
    }
    FUN_0054ad20();
  }
  else {
    if (DAT_00771f50 != 0) {
      puVar4 = DAT_00771f4c;
      if (DAT_00771f4c == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_006f3ce8;
      }
      if (*(byte *)((int)puVar4 + -1) < 0xfe) {
        iVar6 = *(int *)(param_1 + 0x30);
        if (iVar6 != 0) {
          cVar2 = *(char *)(iVar6 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_006bf840((char *)(iVar6 + -1));
          }
          else {
            *(char *)(iVar6 + -1) = cVar2 + -1;
          }
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        puVar4 = DAT_00771f4c;
        if (DAT_00771f4c == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)&DAT_006f3ce8;
        }
        *(undefined4 **)(param_1 + 0x30) = puVar4;
        *(uint *)(param_1 + 0x34) = DAT_00771f50;
        *(undefined4 *)(param_1 + 0x38) = DAT_00771f54;
        *(char *)((int)puVar4 + -1) = *(char *)((int)puVar4 + -1) + '\x01';
        goto LAB_005c00eb;
      }
    }
    cVar2 = FUN_0054a310(DAT_00771f50,1);
    if (cVar2 != '\0') {
      puVar4 = DAT_00771f4c;
      if (DAT_00771f4c == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_006f3ce8;
      }
      puVar7 = *(undefined4 **)(param_1 + 0x30);
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(uint *)(param_1 + 0x34) = uVar1;
      *(undefined1 *)(uVar1 + *(int *)(param_1 + 0x30)) = 0;
    }
  }
LAB_005c00eb:
  *(undefined4 *)(param_1 + 0x3c) = 0x7d1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}

