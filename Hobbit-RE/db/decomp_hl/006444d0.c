
void __fastcall FUN_006444d0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  FUN_00643c30();
  iVar3 = *(int *)(param_1 + 8);
  if ((*(int *)(param_1 + 0x574) != 0) &&
     ((iVar3 < *(int *)(param_1 + 0x578) || (*(int *)(param_1 + 0x57c) < iVar3)))) {
    FUN_006436b0(iVar3);
  }
  iVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0x574) == 0) {
      cVar2 = *(char *)(iVar1 + *(int *)(param_1 + 4));
    }
    else if ((iVar1 < *(int *)(param_1 + 0x578)) || (*(int *)(param_1 + 0x57c) < iVar1)) {
      cVar2 = FUN_006436b0(iVar1);
    }
    else {
      cVar2 = *(char *)((*(int *)(param_1 + 0x580) - *(int *)(param_1 + 0x578)) + iVar1);
    }
    if (*(char *)(cVar2 + 0x60 + param_1) == '\0') break;
    *(char *)(iVar3 + 0x164 + param_1) = cVar2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    iVar3 = iVar3 + 1;
  }
  *(undefined1 *)(iVar3 + 0x164 + param_1) = 0;
  iVar3 = FUN_00648730(param_1 + 0x164);
  *(int *)(param_1 + 0x568) = iVar3;
  *(float *)(param_1 + 0x564) = (float)iVar3;
  *(undefined4 *)(param_1 + 0x160) = 1;
  *(undefined4 *)(param_1 + 0x56c) = 0;
  return;
}

