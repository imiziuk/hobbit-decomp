
void FUN_00693218(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar6 = param_2;
  bVar2 = *(byte *)(param_1 + 0xfb);
  uVar4 = (uint)bVar2;
  if (param_3 == 0xff) {
    uVar4 = uVar4 * *(int *)(param_1 + 0xb8) + 7;
    pbVar6 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    for (uVar5 = uVar4 >> 5; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar4 = uVar4 >> 3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      param_2 = param_2 + 1;
    }
  }
  else if (uVar4 == 1) {
    iVar3 = *(int *)(param_1 + 0xb8);
    pbVar8 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (byte *)0x80;
    iVar7 = 7;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (((uint)param_2 & param_3) != 0) {
        bVar2 = (byte)iVar7;
        *pbVar6 = (byte)(0x7f7f >> (7 - bVar2 & 0x1f)) & *pbVar6 |
                  (*pbVar8 >> (bVar2 & 0x1f) & 1) << (bVar2 & 0x1f);
      }
      if (iVar7 == 0) {
        pbVar8 = pbVar8 + 1;
        iVar7 = 7;
        pbVar6 = pbVar6 + 1;
      }
      else {
        iVar7 = iVar7 + -1;
      }
      if (param_2 == (byte *)0x1) {
        param_2 = (byte *)0x80;
      }
      else {
        param_2 = (byte *)((int)param_2 >> 1);
      }
    }
  }
  else if (uVar4 == 2) {
    iVar3 = *(int *)(param_1 + 0xb8);
    pbVar8 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (byte *)0x80;
    iVar7 = 6;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (((uint)param_2 & param_3) != 0) {
        bVar2 = (byte)iVar7;
        *pbVar6 = (byte)(0x3f3f >> (6 - bVar2 & 0x1f)) & *pbVar6 |
                  (*pbVar8 >> (bVar2 & 0x1f) & 3) << (bVar2 & 0x1f);
      }
      if (iVar7 == 0) {
        pbVar8 = pbVar8 + 1;
        iVar7 = 6;
        pbVar6 = pbVar6 + 1;
      }
      else {
        iVar7 = iVar7 + -2;
      }
      if (param_2 == (byte *)0x1) {
        param_2 = (byte *)0x80;
      }
      else {
        param_2 = (byte *)((int)param_2 >> 1);
      }
    }
  }
  else if (uVar4 == 4) {
    iVar3 = *(int *)(param_1 + 0xb8);
    pbVar8 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (byte *)0x80;
    iVar7 = 4;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (((uint)param_2 & param_3) != 0) {
        bVar2 = (byte)iVar7;
        *pbVar6 = (byte)(0xf0f >> (4 - bVar2 & 0x1f)) & *pbVar6 |
                  (*pbVar8 >> (bVar2 & 0x1f) & 0xf) << (bVar2 & 0x1f);
      }
      if (iVar7 == 0) {
        pbVar8 = pbVar8 + 1;
        iVar7 = 4;
        pbVar6 = pbVar6 + 1;
      }
      else {
        iVar7 = iVar7 + -4;
      }
      if (param_2 == (byte *)0x1) {
        param_2 = (byte *)0x80;
      }
      else {
        param_2 = (byte *)((int)param_2 >> 1);
      }
    }
  }
  else {
    uVar4 = (uint)(bVar2 >> 3);
    pbVar6 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    bVar1 = 0x80;
    for (iVar3 = *(int *)(param_1 + 0xb8); iVar3 != 0; iVar3 = iVar3 + -1) {
      if ((bVar1 & (byte)param_3) != 0) {
        pbVar8 = pbVar6;
        pbVar9 = param_2;
        for (uVar5 = (uint)(bVar2 >> 5); uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
          pbVar8 = pbVar8 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar9 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        }
      }
      pbVar6 = pbVar6 + uVar4;
      param_2 = param_2 + uVar4;
      if (bVar1 == 1) {
        bVar1 = 0x80;
      }
      else {
        bVar1 = bVar1 >> 1;
      }
    }
  }
  return;
}

