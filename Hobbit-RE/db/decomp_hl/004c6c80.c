
int __thiscall FUN_004c6c80(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iStack_4;
  
  iVar5 = FUN_005a7910();
  iStack_4 = 0;
  if (((*(short *)(param_1 + 0x124) == 0) || (iStack_4 = *(int *)(param_1 + 0xb8), iStack_4 == 0))
     || (*(int *)(param_1 + 0x140) != 0)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  *(ushort *)(iVar5 + 0x3c) =
       (byte)((byte)(iVar9 << 4) ^ (byte)*(ushort *)(iVar5 + 0x3c)) & 0x10 ^
       *(ushort *)(iVar5 + 0x3c);
  if ((*(int *)(param_1 + 0x140) != 0) && (param_3 == 0)) {
    param_3 = 1;
  }
  uVar2 = *(ushort *)(param_1 + 0x7a);
  bVar1 = (byte)(uVar2 >> 8);
  if (((uVar2 & 0x3000) != 0) &&
     ((cVar11 = *(char *)(param_1 + 0x128) + -1, *(char *)(param_1 + 0x128) = cVar11,
      cVar11 < '\x01' || ((uVar2 & 0x1000) != 0)))) {
    if ((*(byte *)(param_1 + 0x15d) & 1) == 0) {
      if (((*(byte *)(param_1 + 0x15b) & 0x20) == 0) && (*(char *)(param_1 + 0x15e) == '\0')) {
        iVar9 = (uint)bVar1 << 8;
      }
      else {
        iVar9 = CONCAT31((uint3)bVar1,1);
      }
      if ((*(int *)(param_1 + 0x140) == 0) && (*(int *)(param_1 + 0xb8) != 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      iVar9 = 0;
      uVar13 = 0;
    }
    FUN_004d2360(uVar13,iVar9);
  }
  *(int *)(iVar5 + 0x10) = param_1;
  uVar13 = *(undefined4 *)(param_1 + 0x10);
  *(byte *)(iVar5 + 0x3c) = *(byte *)(iVar5 + 0x3c) & 0xfc;
  *(undefined4 *)(iVar5 + 0x28) = uVar13;
  *(int *)(iVar5 + 0x1c) = param_1 + 0x44;
  bVar1 = *(byte *)(param_1 + 0x7a);
  *(int *)(iVar5 + 0x24) = param_1 + 0xc4;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(ushort *)(iVar5 + 0x3c) =
       (byte)(bVar1 >> 1 ^ (byte)*(ushort *)(iVar5 + 0x3c)) & 0x20 ^ *(ushort *)(iVar5 + 0x3c);
  *(int *)(iVar5 + 0x34) = iStack_4;
  *(byte *)(iVar5 + 0x40) =
       (*(byte *)(param_1 + 0x15d) ^ *(byte *)(iVar5 + 0x40)) & 1 ^ *(byte *)(iVar5 + 0x40);
  uVar13 = FUN_00549470(param_1 + 0xbc);
  *(undefined4 *)(iVar5 + 0x38) = uVar13;
  *(int *)(iVar5 + 0x20) = param_1 + 0xb0;
  *(byte *)(iVar5 + 8) = ((char)param_3 << 2 ^ *(byte *)(iVar5 + 8)) & 4 ^ *(byte *)(iVar5 + 8);
  if ((*(byte *)(param_1 + 0x15d) & 1) != 0) {
    *(byte *)(iVar5 + 0x40) = *(byte *)(iVar5 + 0x40) | 1;
  }
  iVar9 = FUN_004c71a0();
  if (iVar9 == 0) {
    *(undefined4 *)(iVar5 + 0x18) = 1;
    puVar12 = DAT_007f23d8;
    puVar7 = DAT_007f23d8 + 0x10;
    if ((DAT_007f23d8 != param_2) && (puVar6 = param_2 + 0x10, param_2 != puVar6)) {
      puVar8 = DAT_007f23d8 + 2;
      iVar9 = (int)param_2 - (int)DAT_007f23d8;
      DAT_007f23d8 = puVar7;
      do {
        puVar8[-2] = *param_2;
        puVar8[-1] = param_2[1];
        *puVar8 = *(undefined4 *)(iVar9 + (int)puVar8);
        puVar8[1] = param_2[3];
        param_2 = param_2 + 4;
        puVar8 = puVar8 + 4;
        puVar7 = DAT_007f23d8;
      } while (param_2 != puVar6);
    }
    DAT_007f23d8 = puVar7;
    *(undefined4 **)(iVar5 + 0x14) = puVar12;
    return iVar5;
  }
  piVar3 = *(int **)(param_1 + 0x140);
  uVar4 = piVar3[1] * 2;
  if (((uVar4 ^ piVar3[1]) & 0x7fffffff ^ uVar4) == 0xffffffff) {
    iVar9 = *piVar3;
  }
  else {
    iVar9 = FUN_00549470(piVar3 + 1);
  }
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar9 + 0x4c);
  piVar3 = *(int **)(param_1 + 0x140);
  uVar4 = piVar3[1] * 2;
  if (((uVar4 ^ piVar3[1]) & 0x7fffffff ^ uVar4) == 0xffffffff) {
    iVar9 = *piVar3;
  }
  else {
    iVar9 = FUN_00549470(piVar3 + 1);
  }
  iVar10 = ((int)DAT_007f23d8 + 0x3fU & 0xffffffc0) - (int)DAT_007f23d8;
  iVar9 = (int)DAT_007f23d8 + (*(int *)(iVar9 + 0x4c) * 0x40 + 0xf + iVar10 & 0xfffffff0U);
  iVar10 = iVar10 + (int)DAT_007f23d8;
  puVar12 = (undefined4 *)(*(int *)(param_1 + 0x140) + 0x20);
  DAT_007f23d8 = (undefined4 *)iVar9;
  if ((puVar12 != param_2) && (puVar7 = param_2 + 0x10, param_2 != puVar7)) {
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x140) + 0x28);
    iVar9 = (int)param_2 - (int)puVar12;
    do {
      puVar6[-2] = *param_2;
      puVar6[-1] = param_2[1];
      *puVar6 = *(undefined4 *)(iVar9 + (int)puVar6);
      puVar6[1] = param_2[3];
      param_2 = param_2 + 4;
      puVar6 = puVar6 + 4;
    } while (param_2 != puVar7);
  }
  FUN_0053ba50(iVar10);
  *(int *)(iVar5 + 0x14) = iVar10;
  return iVar5;
}

