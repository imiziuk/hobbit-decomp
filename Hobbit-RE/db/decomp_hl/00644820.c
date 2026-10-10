
int __fastcall FUN_00644820(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  FUN_00643c30();
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = 0;
  bVar1 = false;
  while( true ) {
    iVar3 = iVar3 + 1;
    *(int *)(param_1 + 8) = iVar3;
    if (*(int *)(param_1 + 0x574) == 0) {
      cVar2 = *(char *)(iVar3 + *(int *)(param_1 + 4));
    }
    else if ((iVar3 < *(int *)(param_1 + 0x578)) || (*(int *)(param_1 + 0x57c) < iVar3)) {
      cVar2 = FUN_006436b0(iVar3);
    }
    else {
      cVar2 = *(char *)((*(int *)(param_1 + 0x580) - *(int *)(param_1 + 0x578)) + iVar3);
    }
    if (cVar2 == '\"') break;
    iVar3 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0x574) == 0) {
      cVar2 = *(char *)(iVar3 + *(int *)(param_1 + 4));
    }
    else if ((iVar3 < *(int *)(param_1 + 0x578)) || (*(int *)(param_1 + 0x57c) < iVar3)) {
      cVar2 = FUN_006436b0(iVar3);
    }
    else {
      cVar2 = *(char *)((*(int *)(param_1 + 0x580) - *(int *)(param_1 + 0x578)) + iVar3);
    }
    *(char *)(iVar4 + 0x164 + param_1) = cVar2;
    if (cVar2 < ' ') {
      bVar1 = true;
    }
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = iVar4 + 1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(undefined1 *)(iVar4 + 0x164 + param_1) = 0;
  *(undefined4 *)(param_1 + 0x160) = 4;
  if (bVar1) {
    FUN_00647d10(param_1 + 0x164,s____BADSTRING____0074b888);
  }
  return param_1 + 0x164;
}

