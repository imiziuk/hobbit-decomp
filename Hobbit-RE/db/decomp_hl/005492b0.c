
void __thiscall FUN_005492b0(int param_1,uint *param_2,int param_3)

{
  short *psVar1;
  uint uVar2;
  undefined1 local_100 [256];
  
  if (param_3 == 0) {
    uVar2 = *param_2 * 2;
    uVar2 = (uVar2 ^ *param_2) & 0x7fffffff ^ uVar2;
    if (uVar2 == 0xffffffff) {
      return;
    }
  }
  else {
    FUN_005484f0(param_3,local_100,1);
    uVar2 = FUN_00548c90(local_100);
    if (uVar2 == 0xffffffff) {
      uVar2 = FUN_005488d0(local_100);
    }
  }
  psVar1 = (short *)(*(int *)(*(int *)(param_1 + 0x24) + 8 +
                             ((int)uVar2 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x70 +
                    (*(uint *)(param_1 + 0x18) & uVar2) * 0x7c);
  *psVar1 = *psVar1 + 1;
  *param_2 = (*param_2 ^ uVar2) & 0x7fffffff ^ *param_2;
  return;
}

