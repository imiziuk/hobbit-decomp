
undefined4 __fastcall FUN_005ec650(int param_1)

{
  if ((*(int *)(param_1 + 0x20) != 0 || *(int *)(param_1 + 0x24) != 0) &&
     (*(int *)(param_1 + 0x28) != 0 || *(int *)(param_1 + 0x2c) != 0)) {
    return 1;
  }
  return 0;
}

