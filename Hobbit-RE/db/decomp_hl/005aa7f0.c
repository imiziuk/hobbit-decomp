
void __thiscall FUN_005aa7f0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (piVar1 == (int *)0x0) {
    uVar2 = FUN_0054bad0(0x2f,0,0);
    *(undefined8 *)(param_1 + 8) = uVar2;
    piVar1 = (int *)FUN_004021c0(uVar2);
    if (piVar1 == (int *)0x0) {
      return;
    }
  }
  (**(code **)(*piVar1 + 0x14))(&param_2,0);
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

