
void __thiscall FUN_0054a190(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  
  puVar9 = *(undefined4 **)(param_1 + 4);
  puVar6 = (undefined4 *)puVar9[1];
  if (puVar6 != DAT_0076cd84) {
    do {
      iVar3 = FUN_0054b450(param_3);
      if (iVar3 < 0) {
        puVar7 = (undefined4 *)puVar6[2];
      }
      else {
        puVar7 = (undefined4 *)*puVar6;
        puVar9 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != DAT_0076cd84);
  }
  if (puVar9 != *(undefined4 **)(param_1 + 4)) {
    uVar1 = puVar9[5];
    pbVar10 = (byte *)puVar9[4];
    if (pbVar10 == (byte *)0x0) {
      pbVar10 = &DAT_006f3ce8;
    }
    uVar2 = *(uint *)(param_3 + 8);
    uVar5 = uVar2;
    if (uVar1 <= uVar2) {
      uVar5 = uVar1;
    }
    bVar11 = false;
    uVar4 = 0;
    bVar12 = true;
    pbVar8 = *(byte **)(param_3 + 4);
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar11 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    } while (bVar12);
    if (!bVar12) {
      uVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
    }
    if (uVar4 == 0) {
      if (uVar2 < uVar1) goto LAB_0054a22e;
      uVar4 = (uint)(uVar2 != uVar1);
    }
    if (-1 < (int)uVar4) {
      *param_2 = puVar9;
      return;
    }
  }
LAB_0054a22e:
  *param_2 = *(undefined4 **)(param_1 + 4);
  return;
}

