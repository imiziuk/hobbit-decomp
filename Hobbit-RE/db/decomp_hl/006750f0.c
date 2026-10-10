
void __fastcall FUN_006750f0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 != 0) {
    uVar2 = FUN_00675070();
    uVar1 = param_1[3];
    param_1[2] = uVar2;
    if ((uVar2 != uVar1) && (param_1[1] != 0)) {
      iVar4 = 0;
      iVar3 = FUN_00675150();
      if (0 < iVar3) {
        do {
          if (((uVar1 ^ uVar2) & 1 << ((byte)iVar4 & 0x1f)) != 0) {
            (*(code *)param_1[1])(iVar4);
          }
          iVar4 = iVar4 + 1;
          iVar3 = FUN_00675150();
        } while (iVar4 < iVar3);
      }
    }
    param_1[3] = param_1[2];
  }
  return;
}

