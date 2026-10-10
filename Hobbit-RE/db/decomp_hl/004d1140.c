
int FUN_004d1140(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_006eee58;
  do {
    iVar1 = FUN_00647ed0(puVar2,param_1);
    if (iVar1 == 0) {
      return iVar3;
    }
    puVar2 = puVar2 + 0x20;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x6eef98);
  return -1;
}

