
undefined4 __thiscall FUN_00553c50(int param_1,uint param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = FUN_00555ea0();
  if (cVar2 != '\0') {
    return 1;
  }
  pcVar1 = *(code **)(DAT_00771ec0 + 0xc +
                     *(int *)(*(int *)(*(int *)(param_1 + 100) + 8 +
                                      ((int)param_2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) +
                              0x104 + (*(uint *)(param_1 + 0x58) & param_2) * 0xa04) * 0x24);
  if (pcVar1 == (code *)0x0) {
    return 1;
  }
  uVar3 = (*pcVar1)((*(uint *)(param_1 + 0x58) & param_2) * 0xa04 +
                    *(int *)(*(int *)(param_1 + 100) + 8 +
                            ((int)param_2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18));
  return uVar3;
}

