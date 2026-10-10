
undefined4 __thiscall FUN_00668620(int param_1,uint param_2,char param_3)

{
  char cVar1;
  undefined2 *puVar2;
  
  if (0x7ffffffd < param_2) {
    FUN_006bf8fc();
  }
  puVar2 = *(undefined2 **)(param_1 + 4);
  if (((puVar2 == (undefined2 *)0x0) || (cVar1 = *(char *)((int)puVar2 + -1), cVar1 == '\0')) ||
     (cVar1 == -1)) {
    if (param_2 == 0) {
      if (param_3 == '\0') {
        if (puVar2 != (undefined2 *)0x0) {
          *(undefined4 *)(param_1 + 8) = 0;
          *puVar2 = 0;
        }
        return 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        cVar1 = *(char *)((int)puVar2 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)((int)puVar2 + -1) = cVar1 + -1;
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
          return 0;
        }
        FUN_006bf840(puVar2 + -1);
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return 0;
    }
    if (param_3 != '\0') {
      if ((*(uint *)(param_1 + 0xc) < 0x20) && (param_2 <= *(uint *)(param_1 + 0xc))) {
        return 1;
      }
      if (puVar2 != (undefined2 *)0x0) {
        cVar1 = *(char *)((int)puVar2 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)((int)puVar2 + -1) = cVar1 + -1;
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
          FUN_00669340(param_2);
          return 1;
        }
        FUN_006bf840(puVar2 + -1);
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      FUN_00669340(param_2);
      return 1;
    }
    if (param_2 <= *(uint *)(param_1 + 0xc)) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    *(char *)((int)puVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0;
  }
  FUN_00669340(param_2);
  return 1;
}

