
void __fastcall FUN_00644400(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  FUN_00643c30();
  iVar4 = *(int *)(param_1 + 8);
  if ((*(int *)(param_1 + 0x574) != 0) &&
     ((iVar4 < *(int *)(param_1 + 0x578) || (*(int *)(param_1 + 0x57c) < iVar4)))) {
    FUN_006436b0(iVar4);
  }
  iVar4 = 0;
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
    *(char *)(iVar4 + 0x164 + param_1) = cVar2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    iVar4 = iVar4 + 1;
  }
  *(undefined1 *)(iVar4 + 0x164 + param_1) = 0;
  fVar5 = (float10)FUN_006487a0(param_1 + 0x164);
  *(float *)(param_1 + 0x564) = (float)fVar5;
  uVar3 = __ftol();
  *(undefined4 *)(param_1 + 0x568) = uVar3;
  *(undefined4 *)(param_1 + 0x160) = 1;
  *(undefined4 *)(param_1 + 0x56c) = 1;
  return;
}

