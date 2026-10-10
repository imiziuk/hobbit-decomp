
void FUN_0066d9c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (DAT_007f15e0 != 0) {
    if ((param_1 != &DAT_007f1590) && (puVar1 = param_1 + 0x10, param_1 != puVar1)) {
      puVar2 = &DAT_007f1598;
      puVar3 = param_1 + -0x1fc564;
      do {
        puVar2[-2] = *param_1;
        puVar2[-1] = param_1[1];
        *puVar2 = *(undefined4 *)((int)puVar3 + (int)puVar2);
        puVar2[1] = param_1[3];
        param_1 = param_1 + 4;
        puVar2 = puVar2 + 4;
      } while (param_1 != puVar1);
    }
    DAT_007f155c = 0;
  }
  return;
}

