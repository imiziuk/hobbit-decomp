
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0062a170(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (_DAT_006f62ac <= *(float *)(param_1 + 100)) {
    uVar1 = FUN_005af060(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    fVar2 = (float10)FUN_00647b30(0xbdcccccd,0x3dcccccd);
    *(float *)(param_1 + 100) = (float)fVar2;
  }
  FUN_005bec70(param_2);
  return;
}

