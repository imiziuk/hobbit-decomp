
void __thiscall FUN_005edc10(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  int iStack_18;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e2038;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    FUN_00649920(auStack_10,s_AIManager_Actions_Action__d_Audi_00747e50,*(undefined4 *)(param_1 + 4)
                );
    uStack_4 = 0;
    uVar1 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iStack_24 = *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x10) < iStack_24 + 1) {
        if (*(int *)(param_2 + 0x18) == 0) {
          iVar2 = *(int *)(param_2 + 0x10) / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (iVar4 + iStack_24 < 1) {
            iStack_24 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iStack_24 = iStack_24 + iVar2;
          }
        }
        else {
          iStack_24 = *(int *)(param_2 + 0x18) + iStack_24;
        }
        puStack_1c = (undefined1 *)operator_new(iStack_24 * 0x108);
        if (puStack_1c == (undefined1 *)0x0) {
          puStack_1c = (undefined1 *)0x0;
        }
        else {
          iVar4 = iStack_24;
          if (-1 < iStack_24 + -1) {
            do {
              FUN_00406a80();
              FUN_00406a80();
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        iStack_18 = 0;
        if (0 < *(int *)(param_2 + 8)) {
          iStack_20 = 0;
          puVar5 = puStack_1c;
          do {
            iVar4 = *(int *)(param_2 + 0xc) + iStack_20;
            iVar2 = 0x80;
            puVar3 = puVar5;
            do {
              *puVar3 = puVar3[iVar4 - (int)puVar5];
              puVar3 = puVar3 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            *(undefined4 *)(puVar5 + 0x80) = *(undefined4 *)(iVar4 + 0x80);
            *(undefined4 *)(puVar5 + 0x84) = *(undefined4 *)(iVar4 + 0x84);
            FUN_00480ed0(iVar4 + 0x88);
            FUN_00480f20(iVar4 + 0xb8);
            FUN_00480f60(iVar4 + 0xc0);
            FUN_00480f60(iVar4 + 0xd8);
            *(undefined4 *)(puVar5 + 0xf0) = *(undefined4 *)(iVar4 + 0xf0);
            *(undefined4 *)(puVar5 + 0xf4) = *(undefined4 *)(iVar4 + 0xf4);
            *(undefined4 *)(puVar5 + 0xf8) = *(undefined4 *)(iVar4 + 0xf8);
            *(undefined4 *)(puVar5 + 0xfc) = *(undefined4 *)(iVar4 + 0xfc);
            *(undefined4 *)(puVar5 + 0x100) = *(undefined4 *)(iVar4 + 0x100);
            *(undefined4 *)(puVar5 + 0x104) = *(undefined4 *)(iVar4 + 0x104);
            iStack_18 = iStack_18 + 1;
            iStack_20 = iStack_20 + 0x108;
            puVar5 = puVar5 + 0x108;
          } while (iStack_18 < *(int *)(param_2 + 8));
        }
        FUN_006bf840(*(undefined4 *)(param_2 + 0xc));
        *(undefined1 **)(param_2 + 0xc) = puStack_1c;
        *(int *)(param_2 + 0x10) = iStack_24;
      }
      iVar4 = *(int *)(param_2 + 8) + 1;
      *(int *)(param_2 + 8) = iVar4;
      iVar4 = iVar4 * 0x108 + -0x108 + *(int *)(param_2 + 0xc);
      *(undefined4 *)(iVar4 + 0x80) = 0xf;
      FUN_00647d10(iVar4,uVar1);
      *(undefined4 *)(iVar4 + 0x84) = 0;
      *(undefined4 *)(iVar4 + 0x100) = 0x32;
      *(undefined4 *)(iVar4 + 0x104) = 1;
    }
    uStack_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = pvStack_c;
  return;
}

