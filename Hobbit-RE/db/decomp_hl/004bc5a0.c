
undefined4 __thiscall FUN_004bc5a0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  if (*param_2 == 0xe) {
    param_1[0x98] = param_1[0x98] | 2;
    if (param_1[0xa4] != 0 || param_1[0xa5] != 0) {
      piVar1 = (int *)FUN_004021c0(param_1[0xa4],param_1[0xa5]);
      if (piVar1 != (int *)0x0) {
        puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
        uStack_c = *puVar2;
        iStack_8 = param_1[6];
        uStack_4 = puVar2[2];
        (**(code **)(*param_1 + 300))(&uStack_c);
      }
    }
    return 1;
  }
  return 0;
}

