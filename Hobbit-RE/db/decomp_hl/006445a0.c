
int __fastcall FUN_006445a0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00643c30();
  iVar4 = *(int *)(param_1 + 8);
  if ((*(int *)(param_1 + 0x574) != 0) &&
     ((iVar4 < *(int *)(param_1 + 0x578) || (*(int *)(param_1 + 0x57c) < iVar4)))) {
    FUN_006436b0(iVar4);
  }
  iVar4 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar4;
  if ((*(int *)(param_1 + 0x574) != 0) &&
     ((iVar4 < *(int *)(param_1 + 0x578) || (*(int *)(param_1 + 0x57c) < iVar4)))) {
    FUN_006436b0(iVar4);
  }
  iVar5 = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar4 = 2;
  *(undefined1 *)(param_1 + 0x164) = 0x30;
  *(undefined1 *)(param_1 + 0x165) = 0x78;
  while( true ) {
    iVar3 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0x574) == 0) {
      uVar2 = (uint)*(byte *)(iVar3 + *(int *)(param_1 + 4));
    }
    else if ((iVar3 < *(int *)(param_1 + 0x578)) || (*(int *)(param_1 + 0x57c) < iVar3)) {
      uVar2 = FUN_006436b0(iVar3);
    }
    else {
      uVar2 = (uint)*(byte *)((*(int *)(param_1 + 0x580) - *(int *)(param_1 + 0x578)) + iVar3);
    }
    bVar1 = (&DAT_0074c290)[uVar2 & 0xff];
    if (((&DAT_0074c490)[bVar1] & 8) == 0) break;
    iVar3 = (char)bVar1 + -0x30;
    if (9 < iVar3) {
      iVar3 = (char)bVar1 + -0x37;
    }
    iVar5 = iVar5 * 0x10 + iVar3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    *(byte *)(param_1 + 0x164 + iVar4) = bVar1;
    iVar4 = iVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x164 + iVar4) = 0;
  *(undefined4 *)(param_1 + 0x56c) = 0;
  *(int *)(param_1 + 0x568) = iVar5;
  *(float *)(param_1 + 0x564) = (float)iVar5;
  *(undefined4 *)(param_1 + 0x160) = 1;
  return iVar5;
}

