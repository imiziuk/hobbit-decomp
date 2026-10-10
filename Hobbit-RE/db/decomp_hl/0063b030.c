
void __thiscall
FUN_0063b030(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  
  if (param_1[3] <= param_2) {
    param_1[3] = param_2 + 1;
  }
  puVar1 = (undefined4 *)(*param_1 + param_2 * 0xc);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  puVar1 = (undefined4 *)(param_1[1] + param_2 * 0xc);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1[2] = param_8;
  return;
}

